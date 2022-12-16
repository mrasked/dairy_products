#include "tcpconnectionthread.h"
#include <QDebug>



TCPConnectionThread::TCPConnectionThread(int threadID, QList<QHostAddress> *ipAllowedList, QObject *parent) : QThread(parent)
{
    serverSocketDescriptor = threadID;
    this->ipAllowedList = ipAllowedList;
}



void TCPConnectionThread::run()
{
    qDebug() << serverSocketDescriptor << "Starting thread";

    serverSocket = new QTcpSocket();

    if(!serverSocket->setSocketDescriptor(serverSocketDescriptor))
    {
        emit socketError(serverSocket->error());

        return;
    }

    QHostAddress incomingAddress = serverSocket->peerAddress();
    quint32 ipv4IncomingAddress = incomingAddress.toIPv4Address();

    for (QHostAddress &allowedIpAddr : *ipAllowedList)
    {
        if (allowedIpAddr.toIPv4Address() == ipv4IncomingAddress)
        {
            CurrentConnectedAddrStr = allowedIpAddr.toString();
            emit connectionEstablished(CurrentConnectedAddrStr, this);
            TCPConnectionThread::threadStart();
            break;
        }
    }

}


void TCPConnectionThread::sendData(QByteArray *data)
{
    qDebug() << "it works!!!";
    serverSocket->write(*data);
}


void TCPConnectionThread::threadStart()
{
    connect(serverSocket, &QTcpSocket::readyRead, this, &TCPConnectionThread::socketReadyRead, Qt::DirectConnection);
    connect(serverSocket, &QTcpSocket::disconnected, this, &TCPConnectionThread::socketDisconnect, Qt::DirectConnection);
    qDebug() << serverSocketDescriptor << "Client connected";
    exec();
}

void TCPConnectionThread::socketReadyRead()
{
    QByteArray receivedData = serverSocket->readAll();

    qDebug() << serverSocketDescriptor << receivedData;

    sendData(&receivedData);
    //serverSocket->write(receivedData);
}



void TCPConnectionThread::socketDisconnect()
{
    qDebug() << serverSocketDescriptor << "Disconnected";

    if (CurrentConnectedAddrStr != "")
    {
        emit connectionDisconnected(CurrentConnectedAddrStr);
    }

    serverSocket->deleteLater();
    exit(0);
}
