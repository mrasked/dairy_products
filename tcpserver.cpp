#include "tcpserver.h"
#include <QDebug>

TCPServer::TCPServer(QObject *parent, netSettings *netSettings) : QTcpServer(parent)
{
    QStringList *ipList = &netSettings->ipList;
    for (QString &ipAddr : *ipList)
    {
        QHostAddress host_address(ipAddr);
        acceptedIpList.append(host_address);
    }

}



void TCPServer::startServer()
{
    if (!this->listen(QHostAddress("127.0.0.1"), 2345))
    {
        qDebug() << "Could not start server";
    }
    else
    {
        qDebug() << "Listening...";
    }
}


int TCPServer::sendDataToClient(QString clientIP, QByteArray *data)
{
    if (connectionsMap.contains(clientIP))
    {
        auto iter = connectionsMap.find(clientIP);
        if (iter != connectionsMap.end())
        {
            iter.value()->sendData(data);
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}


void TCPServer::incomingConnection(long long serverSocketDescriptor)
{
    qDebug() << serverSocketDescriptor << "Connecting...";

    TCPConnectionThread *thread = new TCPConnectionThread(serverSocketDescriptor, &acceptedIpList, this);
    connect(thread, &QThread::finished, thread, &QThread::deleteLater);
    connect(thread, &TCPConnectionThread::connectionEstablished, this, &TCPServer::addThreadInfo);
    connect(thread, &TCPConnectionThread::connectionDisconnected, this, &TCPServer::deleteThreadInfo);
    thread->start();
}


void TCPServer::addThreadInfo(QString ipAddr, TCPConnectionThread *thread)
{
    connectionsMap.insert(ipAddr, thread);

    QHostAddress host_address(ipAddr);
    acceptedIpList.removeOne(host_address);

    qDebug() << "connected " <<ipAddr;
}

void TCPServer::deleteThreadInfo(QString ipAddr)
{
    connectionsMap.remove(ipAddr);

    QHostAddress host_address(ipAddr);
    acceptedIpList.append(host_address);

    qDebug() << "disconnected " <<ipAddr;
}


///////////////////////////////////////
void TCPServer::testInform()
{

    qDebug() << "stopped";
}
