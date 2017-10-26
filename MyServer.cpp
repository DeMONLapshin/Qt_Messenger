#include "MyServer.h"

MyServer::MyServer(int nPort, QWidget* pwgt) : QWidget(pwgt),   //конструктор предка
                                               NextBlockSize(0)
{
    pTcpServer = new QTcpServer(this);
    bool take_port = pTcpServer->listen(QHostAddress::Any, nPort);  //запуск сервера
    if(!take_port){
        QMessageBox::critical(0,                                //Родитель-виджет
                              "Server Error",                   //Название иконки
                              "Unable to start the server:"+    //Основное сообщение
                              pTcpServer->errorString());
    }
}

