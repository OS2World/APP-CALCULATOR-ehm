#include <QtGui/QApplication>
#include <QTranslator>
#include <QLocale>
#include "ehm.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTranslator translator;
    translator.load("ehm_"  + QLocale::system().name(), "../ehm/translations");
    app.installTranslator(&translator);
    ehm w;
    w.show();
    return app.exec();
}
