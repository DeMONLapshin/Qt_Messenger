#include <QApplication>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
#ifndef QT_DEBUG
 //   qInstallMsgHandler(dummyOutput);  //qInstallMsgHandler - �-��� ��� ��������� ����������� �-��� ��������������� ������� ��������� qDebug � ��..
#endif                                  //dummyOutput - �� ���� �������������� � ������ � ������
    qDebug()<<"XYINA";                  //qDebug!!!!!!!!!!!!!
    QWidget FuckinWidget = new QWidget;

    return app.exec();
}
