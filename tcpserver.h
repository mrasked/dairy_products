#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QTcpServer>
#include "commondatatypes.h"
#include "tcpconnectionthread.h"


class TCPServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit TCPServer(QObject *parent = nullptr, netSettings *netSettings = nullptr);
    void startServer();
    int sendDataToClient(QString clientIP, QByteArray *data);

protected:
    void incomingConnection(long long serverSocketDescriptor);

private slots:
    void testInform();
    void addThreadInfo(QString ipAddr, TCPConnectionThread *thread);
    void deleteThreadInfo(QString ipAddr);

private:
    QList<QHostAddress> acceptedIpList;
    QMap <QString, TCPConnectionThread*> connectionsMap;

};

#endif // TCPSERVER_H
