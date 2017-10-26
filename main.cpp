#include <QApplication>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
#ifndef QT_DEBUG
 //   qInstallMsgHandler(dummyOutput);  //qInstallMsgHandler - ф-ция для установки собственной ф-ции перенаправления выводов сообщений qDebug и тд..
#endif                                  //dummyOutput - по идее перенаправляет в никуда в релизе
    qDebug()<<"XYINA";                  //qDebug!!!!!!!!!!!!!
    QWidget FuckinWidget = new QWidget;

    return app.exec();
}
