#ifndef TCPCONNECTIONTHREAD_H
#define TCPCONNECTIONTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QTcpServer>


class TCPConnectionThread : public QThread
{
    Q_OBJECT
public:
    explicit TCPConnectionThread(int threadID, QList<QHostAddress> *ipAllowedList,  QObject *parent = nullptr);
    void run();

    void sendData (QByteArray *data);

signals:
    void socketError(QTcpSocket::SocketError sockError);
    void connectionEstablished(QString ipAddr, TCPConnectionThread *thread);
    void connectionDisconnected(QString ipAddr);

public slots:
    void socketReadyRead();
    void socketDisconnect();

private:
    QTcpSocket *serverSocket;
    int serverSocketDescriptor;
    QList<QHostAddress> *ipAllowedList;
    QString CurrentConnectedAddrStr = "";

    void threadStart();
};

#endif // TCPCONNECTIONTHREAD_H
