#include "MyServer.h"

MyServer::MyServer(int nPort, QWidget* pwgt) : QWidget(pwgt),   //����������� ������
                                               NextBlockSize(0)
{
    pTcpServer = new QTcpServer(this);
    bool take_port = pTcpServer->listen(QHostAddress::Any, nPort);  //������ �������
    if(!take_port){
        QMessageBox::critical(0,                                //��������-������
                              "Server Error",                   //�������� ������
                              "Unable to start the server:"+    //�������� ���������
                              pTcpServer->errorString());
    }
}

