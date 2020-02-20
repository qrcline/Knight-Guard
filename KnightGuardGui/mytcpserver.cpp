#include "mytcpserver.h"

myTCPServer::myTCPServer(QObject *parent) : QObject(parent)
{
    server = new QTcpServer(this);

    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));

    if(!server->listen(QHostAddress::AnyIPv4,80))
    {
        qDebug()<<"Server could not start";

    }
    else
    {
        qDebug()<<"Server started";
    }
}

void myTCPServer::newConnection()
{
    QTcpSocket *socket=server->nextPendingConnection();
    socket->write("Welcome Client\r\n");
    socket->flush();
    socket->waitForBytesWritten(3000);
    socket->close();

}
