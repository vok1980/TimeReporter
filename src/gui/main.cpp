
#include "mainwindow.h"
#include <QApplication>

#include "timerecordconrol.h"


int main(int argc, char *argv[])
{
    std::tr1::shared_ptr<TimeRecordConrol> pTrc( new TimeRecordConrol );

    QApplication a(argc, argv);
    MainWindow w(NULL, pTrc);
    w.show();

    return a.exec();
}
