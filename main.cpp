#include "startwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    StartWindow w;

    w.setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint );

    w.show();
    return a.exec();
}
