
#include "mainwindow.h"

#include <iostream>
#include <QApplication>

#include "timerecordconrol.h"



void msgOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    const char chTypeSymbols[] = { 'I', 'W', 'E', 'X' };
    QByteArray localMsg = msg.toLocal8Bit();

    fprintf(stderr, "[%c]: %s (%s:%u, %s)\n", chTypeSymbols[type], localMsg.constData(), context.file, context.line, context.function);

    if( type == QtFatalMsg )
        abort();
}



int main(int argc, char *argv[])
{
    qInstallMessageHandler(msgOutput);

    std::tr1::shared_ptr<TimeRecordConrol> pTrc( new TimeRecordConrol );
    QApplication a(argc, argv);

    MainWindow w(NULL, pTrc);
    w.show();

    return a.exec();
}
