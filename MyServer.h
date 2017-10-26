#ifndef MYSERVER_H
#define MYSERVER_H

#include <QWidget>
#include <QTcpServer>     //����������(������) network � ����� .pro
#include <QTextEdit>
#include <QMessageBox>
#include <QTcpSocket>

//class QTcpSocket;         //����� ������ �������� ������ �����, ����� �� ������ ���� ���������
//class QMessageBox;        //��� ��� ������� ���� ��� ������ QWidget � ���������

class MyServer : public QWidget
{
    Q_OBJECT
private:
    QTcpServer* pTcpServer;
    QTextEdit* pTxt;
    quint16 NextBlockSize;      //������ ����� ���������� ����������� �� ������ �����
private:
    void sendToClient(QTcpSocket* pSocket,const QString& str);
public:
    MyServer(int nPort, QWidget* pwgt=0);   //nPort - ����� ����� ��������, �� ���. ����� �������
public slots:
    virtual void slotNewConnection(){}
    void slotReadClient(){}
};

#endif // MYSERVER_H

