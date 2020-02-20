#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class myTCPServer : public QObject
{
    Q_OBJECT
public:
    explicit myTCPServer(QObject *parent = nullptr);

signals:

public slots:

    void newConnection();

private:
    QTcpServer *server;
};

#endif // MYTCPSERVER_H
