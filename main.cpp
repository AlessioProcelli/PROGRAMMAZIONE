#include "baseeffect.h"
#include "controller.h"
#include "view.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model mod;
    Controller cont(&mod);
    View w(&mod, &cont);
    w.show();

    return a.exec();
}
