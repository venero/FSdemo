#include "widget.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
//    return a.exec();

Widget w;
w.show();

//QPushButton *button = new QPushButton( QApplication::translate("childwidget", "Press me"), &w);
//button->move(20, 100);
//button->show(*/);

return a.exec();
}
