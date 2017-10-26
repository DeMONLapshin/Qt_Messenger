#ifndef MYSERVER_H
#define MYSERVER_H

#include <QWidget>
#include <QTcpServer>     //Библиотека(модуль) network в файле .pro
#include <QTextEdit>
#include <QMessageBox>
#include <QTcpSocket>

//class QTcpSocket;         //Можно просто объявить нужный класс, чтлбы не тащить весь инклудинг
//class QMessageBox;        //как это сделано выше для класса QWidget и остальных

class MyServer : public QWidget
{
    Q_OBJECT
private:
    QTcpServer* pTcpServer;
    QTextEdit* pTxt;
    quint16 NextBlockSize;      //Хранит длину следующего полученного от сокета блока
private:
    void sendToClient(QTcpSocket* pSocket,const QString& str);
public:
    MyServer(int nPort, QWidget* pwgt=0);   //nPort - номер порта серсвера, по кот. подкл клиенты
public slots:
    virtual void slotNewConnection(){}
    void slotReadClient(){}
};

#endif // MYSERVER_H

