/********************************************************************************
** Form generated from reading UI file 'hakkinda.ui'
**
** Created: Wed Mar 9 21:24:03 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAKKINDA_H
#define UI_HAKKINDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hakkinda
{
public:
    QGridLayout *gridLayout;
    QLabel *lblHakkinda;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTamam;
    QLabel *lblURL;

    void setupUi(QWidget *hakkinda)
    {
        if (hakkinda->objectName().isEmpty())
            hakkinda->setObjectName(QString::fromUtf8("hakkinda"));
        hakkinda->resize(205, 123);
        gridLayout = new QGridLayout(hakkinda);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblHakkinda = new QLabel(hakkinda);
        lblHakkinda->setObjectName(QString::fromUtf8("lblHakkinda"));

        gridLayout->addWidget(lblHakkinda, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(95, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        btnTamam = new QPushButton(hakkinda);
        btnTamam->setObjectName(QString::fromUtf8("btnTamam"));
        btnTamam->setDefault(true);

        gridLayout->addWidget(btnTamam, 2, 1, 1, 1);

        lblURL = new QLabel(hakkinda);
        lblURL->setObjectName(QString::fromUtf8("lblURL"));
        lblURL->setOpenExternalLinks(true);
        lblURL->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(lblURL, 1, 0, 1, 2);


        retranslateUi(hakkinda);

        QMetaObject::connectSlotsByName(hakkinda);
    } // setupUi

    void retranslateUi(QWidget *hakkinda)
    {
        hakkinda->setWindowTitle(QApplication::translate("hakkinda", "ehm", 0, QApplication::UnicodeUTF8));
        lblHakkinda->setText(QString());
        btnTamam->setText(QApplication::translate("hakkinda", "Tamam", 0, QApplication::UnicodeUTF8));
        lblURL->setText(QApplication::translate("hakkinda", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://code.google.com/p/ehm/\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600; text-decoration: underline; color:#0000ff;\">Google Code</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class hakkinda: public Ui_hakkinda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAKKINDA_H
