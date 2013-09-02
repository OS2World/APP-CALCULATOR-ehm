/********************************************************************************
** Form generated from reading UI file 'ehm.ui'
**
** Created: Wed Mar 9 21:24:03 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EHM_H
#define UI_EHM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ehm
{
public:
    QAction *actionEhmHakkinda;
    QAction *actionQtHakkinda;
    QAction *actionBasit;
    QAction *actionGelismis;
    QAction *actionGecmis;
    QAction *actionBasit2;
    QAction *actionIslemSirasi;
    QAction *actionIslemOnceligi;
    QAction *action2;
    QAction *actionIngilizce;
    QAction *actionTurkce;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *btnVirgul;
    QPushButton *btnEsittir;
    QPushButton *btnTemizle;
    QLineEdit *ekran;
    QPushButton *btnGecmis;
    QPushButton *btnPi;
    QPushButton *btnE;
    QPushButton *btnMod;
    QPushButton *btnFakt;
    QPushButton *btnUs;
    QPushButton *btnKarekok;
    QPushButton *btnCikarma;
    QPushButton *btnToplama;
    QPushButton *btnBolme;
    QPushButton *btnCarpma;
    QPushButton *btnParantezAc;
    QPushButton *btnParantezKapa;
    QPushButton *btnGeriAl;
    QPushButton *btnYuzde;
    QPushButton *btnGizle;
    QPushButton *btnIsaret;
    QPushButton *btn1bolu;
    QPushButton *btnCarpanAyir;
    QGridLayout *yuzey2;
    QGroupBox *gbMat;
    QGridLayout *gridLayout_3;
    QFrame *line;
    QPushButton *btnCos;
    QPushButton *btnArccos;
    QPushButton *btnTan;
    QPushButton *btnArctan;
    QPushButton *btnCot;
    QPushButton *btnArccot;
    QPushButton *btnArcsin;
    QPushButton *btnSin;
    QPushButton *btnLog;
    QComboBox *cbTri;
    QComboBox *cbLog;
    QPushButton *btnSinh;
    QPushButton *btnCosh;
    QPushButton *btnTanh;
    QPushButton *btnCoth;
    QGroupBox *gbGecmis;
    QGridLayout *gridLayout_4;
    QTextEdit *textGecmis;
    QPushButton *btnGecmisSil;
    QPushButton *btnGecmisKaydet;
    QMenuBar *menuBar;
    QMenu *menuHakkinda;
    QMenu *menuKip;
    QMenu *menuIslemTuru;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ehm)
    {
        if (ehm->objectName().isEmpty())
            ehm->setObjectName(QString::fromUtf8("ehm"));
        ehm->setWindowModality(Qt::NonModal);
        ehm->setEnabled(true);
        ehm->resize(455, 670);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ehm->sizePolicy().hasHeightForWidth());
        ehm->setSizePolicy(sizePolicy);
        ehm->setMinimumSize(QSize(0, 20));
        ehm->setMaximumSize(QSize(16777215, 16777215));
        ehm->setBaseSize(QSize(50, 50));
        ehm->setIconSize(QSize(16, 16));
        ehm->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionEhmHakkinda = new QAction(ehm);
        actionEhmHakkinda->setObjectName(QString::fromUtf8("actionEhmHakkinda"));
        actionQtHakkinda = new QAction(ehm);
        actionQtHakkinda->setObjectName(QString::fromUtf8("actionQtHakkinda"));
        actionBasit = new QAction(ehm);
        actionBasit->setObjectName(QString::fromUtf8("actionBasit"));
        actionGelismis = new QAction(ehm);
        actionGelismis->setObjectName(QString::fromUtf8("actionGelismis"));
        actionGelismis->setCheckable(true);
        actionGecmis = new QAction(ehm);
        actionGecmis->setObjectName(QString::fromUtf8("actionGecmis"));
        actionGecmis->setCheckable(true);
        actionGecmis->setChecked(true);
        actionBasit2 = new QAction(ehm);
        actionBasit2->setObjectName(QString::fromUtf8("actionBasit2"));
        actionBasit2->setCheckable(true);
        actionBasit2->setChecked(true);
        actionIslemSirasi = new QAction(ehm);
        actionIslemSirasi->setObjectName(QString::fromUtf8("actionIslemSirasi"));
        actionIslemSirasi->setCheckable(true);
        actionIslemOnceligi = new QAction(ehm);
        actionIslemOnceligi->setObjectName(QString::fromUtf8("actionIslemOnceligi"));
        actionIslemOnceligi->setCheckable(true);
        actionIslemOnceligi->setChecked(true);
        action2 = new QAction(ehm);
        action2->setObjectName(QString::fromUtf8("action2"));
        actionIngilizce = new QAction(ehm);
        actionIngilizce->setObjectName(QString::fromUtf8("actionIngilizce"));
        actionIngilizce->setCheckable(true);
        actionIngilizce->setChecked(false);
        actionTurkce = new QAction(ehm);
        actionTurkce->setObjectName(QString::fromUtf8("actionTurkce"));
        actionTurkce->setCheckable(true);
        actionTurkce->setChecked(true);
        centralWidget = new QWidget(ehm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setMinimumSize(QSize(0, 30));
        btn7->setMaximumSize(QSize(57, 16777215));
        QFont font;
        font.setPointSize(11);
        btn7->setFont(font);

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn8 = new QPushButton(centralWidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setMinimumSize(QSize(0, 30));
        btn8->setMaximumSize(QSize(57, 16777215));
        btn8->setFont(font);

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn9 = new QPushButton(centralWidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setMinimumSize(QSize(0, 30));
        btn9->setMaximumSize(QSize(57, 16777215));
        btn9->setFont(font);

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setMinimumSize(QSize(0, 30));
        btn4->setMaximumSize(QSize(57, 16777215));
        btn4->setFont(font);

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setMinimumSize(QSize(0, 30));
        btn5->setMaximumSize(QSize(57, 16777215));
        btn5->setFont(font);

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setMinimumSize(QSize(0, 30));
        btn6->setMaximumSize(QSize(57, 16777215));
        btn6->setFont(font);

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(0, 30));
        btn1->setMaximumSize(QSize(57, 100));
        btn1->setFont(font);

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setMinimumSize(QSize(0, 30));
        btn2->setMaximumSize(QSize(57, 100));
        btn2->setFont(font);

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setMinimumSize(QSize(0, 30));
        btn3->setMaximumSize(QSize(57, 100));
        btn3->setFont(font);

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btn0 = new QPushButton(centralWidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMinimumSize(QSize(0, 30));
        btn0->setMaximumSize(QSize(57, 16777215));
        btn0->setFont(font);

        gridLayout->addWidget(btn0, 4, 0, 1, 1);

        btnVirgul = new QPushButton(centralWidget);
        btnVirgul->setObjectName(QString::fromUtf8("btnVirgul"));
        sizePolicy.setHeightForWidth(btnVirgul->sizePolicy().hasHeightForWidth());
        btnVirgul->setSizePolicy(sizePolicy);
        btnVirgul->setMinimumSize(QSize(0, 30));
        btnVirgul->setMaximumSize(QSize(57, 16777215));
        btnVirgul->setFont(font);

        gridLayout->addWidget(btnVirgul, 4, 1, 1, 1);

        btnEsittir = new QPushButton(centralWidget);
        btnEsittir->setObjectName(QString::fromUtf8("btnEsittir"));
        sizePolicy.setHeightForWidth(btnEsittir->sizePolicy().hasHeightForWidth());
        btnEsittir->setSizePolicy(sizePolicy);
        btnEsittir->setMaximumSize(QSize(57, 100));
        btnEsittir->setFont(font);
        btnEsittir->setAutoDefault(false);
        btnEsittir->setDefault(false);

        gridLayout->addWidget(btnEsittir, 4, 2, 2, 1);

        btnTemizle = new QPushButton(centralWidget);
        btnTemizle->setObjectName(QString::fromUtf8("btnTemizle"));
        sizePolicy.setHeightForWidth(btnTemizle->sizePolicy().hasHeightForWidth());
        btnTemizle->setSizePolicy(sizePolicy);
        btnTemizle->setMinimumSize(QSize(0, 30));
        btnTemizle->setMaximumSize(QSize(57, 16777215));
        btnTemizle->setFont(font);

        gridLayout->addWidget(btnTemizle, 1, 6, 1, 1);

        ekran = new QLineEdit(centralWidget);
        ekran->setObjectName(QString::fromUtf8("ekran"));
        sizePolicy.setHeightForWidth(ekran->sizePolicy().hasHeightForWidth());
        ekran->setSizePolicy(sizePolicy);
        ekran->setMinimumSize(QSize(0, 60));
        ekran->setMaximumSize(QSize(16777215, 60));
        ekran->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        ekran->setFont(font1);
        ekran->setCursor(QCursor(Qt::ArrowCursor));
        ekran->setLayoutDirection(Qt::LeftToRight);
        ekran->setMaxLength(300);
        ekran->setCursorPosition(0);
        ekran->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ekran->setReadOnly(true);

        gridLayout->addWidget(ekran, 0, 0, 1, 7);

        btnGecmis = new QPushButton(centralWidget);
        btnGecmis->setObjectName(QString::fromUtf8("btnGecmis"));
        sizePolicy.setHeightForWidth(btnGecmis->sizePolicy().hasHeightForWidth());
        btnGecmis->setSizePolicy(sizePolicy);
        btnGecmis->setMinimumSize(QSize(0, 30));
        btnGecmis->setMaximumSize(QSize(57, 16777215));

        gridLayout->addWidget(btnGecmis, 5, 6, 1, 1);

        btnPi = new QPushButton(centralWidget);
        btnPi->setObjectName(QString::fromUtf8("btnPi"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnPi->sizePolicy().hasHeightForWidth());
        btnPi->setSizePolicy(sizePolicy1);
        btnPi->setMinimumSize(QSize(0, 30));
        btnPi->setMaximumSize(QSize(57, 16777215));
        btnPi->setFont(font);

        gridLayout->addWidget(btnPi, 5, 0, 1, 1);

        btnE = new QPushButton(centralWidget);
        btnE->setObjectName(QString::fromUtf8("btnE"));
        sizePolicy1.setHeightForWidth(btnE->sizePolicy().hasHeightForWidth());
        btnE->setSizePolicy(sizePolicy1);
        btnE->setMinimumSize(QSize(0, 30));
        btnE->setMaximumSize(QSize(57, 16777215));
        QFont font2;
        font2.setPointSize(11);
        font2.setItalic(true);
        btnE->setFont(font2);

        gridLayout->addWidget(btnE, 5, 1, 1, 1);

        btnMod = new QPushButton(centralWidget);
        btnMod->setObjectName(QString::fromUtf8("btnMod"));
        sizePolicy1.setHeightForWidth(btnMod->sizePolicy().hasHeightForWidth());
        btnMod->setSizePolicy(sizePolicy1);
        btnMod->setMinimumSize(QSize(0, 30));
        btnMod->setMaximumSize(QSize(57, 16777215));

        gridLayout->addWidget(btnMod, 5, 4, 1, 1);

        btnFakt = new QPushButton(centralWidget);
        btnFakt->setObjectName(QString::fromUtf8("btnFakt"));
        sizePolicy.setHeightForWidth(btnFakt->sizePolicy().hasHeightForWidth());
        btnFakt->setSizePolicy(sizePolicy);
        btnFakt->setMinimumSize(QSize(0, 30));
        btnFakt->setMaximumSize(QSize(57, 100));
        btnFakt->setFont(font);

        gridLayout->addWidget(btnFakt, 4, 4, 1, 1);

        btnUs = new QPushButton(centralWidget);
        btnUs->setObjectName(QString::fromUtf8("btnUs"));
        sizePolicy.setHeightForWidth(btnUs->sizePolicy().hasHeightForWidth());
        btnUs->setSizePolicy(sizePolicy);
        btnUs->setMinimumSize(QSize(0, 30));
        btnUs->setMaximumSize(QSize(57, 16777215));
        btnUs->setFont(font);

        gridLayout->addWidget(btnUs, 3, 4, 1, 1);

        btnKarekok = new QPushButton(centralWidget);
        btnKarekok->setObjectName(QString::fromUtf8("btnKarekok"));
        sizePolicy.setHeightForWidth(btnKarekok->sizePolicy().hasHeightForWidth());
        btnKarekok->setSizePolicy(sizePolicy);
        btnKarekok->setMinimumSize(QSize(0, 30));
        btnKarekok->setMaximumSize(QSize(57, 16777215));
        btnKarekok->setFont(font);

        gridLayout->addWidget(btnKarekok, 2, 4, 1, 1);

        btnCikarma = new QPushButton(centralWidget);
        btnCikarma->setObjectName(QString::fromUtf8("btnCikarma"));
        sizePolicy.setHeightForWidth(btnCikarma->sizePolicy().hasHeightForWidth());
        btnCikarma->setSizePolicy(sizePolicy);
        btnCikarma->setMinimumSize(QSize(0, 30));
        btnCikarma->setMaximumSize(QSize(57, 16777215));
        btnCikarma->setFont(font);
        btnCikarma->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnCikarma, 5, 3, 1, 1);

        btnToplama = new QPushButton(centralWidget);
        btnToplama->setObjectName(QString::fromUtf8("btnToplama"));
        sizePolicy.setHeightForWidth(btnToplama->sizePolicy().hasHeightForWidth());
        btnToplama->setSizePolicy(sizePolicy);
        btnToplama->setMinimumSize(QSize(0, 30));
        btnToplama->setMaximumSize(QSize(57, 100));
        btnToplama->setFont(font);

        gridLayout->addWidget(btnToplama, 4, 3, 1, 1);

        btnBolme = new QPushButton(centralWidget);
        btnBolme->setObjectName(QString::fromUtf8("btnBolme"));
        sizePolicy.setHeightForWidth(btnBolme->sizePolicy().hasHeightForWidth());
        btnBolme->setSizePolicy(sizePolicy);
        btnBolme->setMinimumSize(QSize(0, 30));
        btnBolme->setMaximumSize(QSize(57, 16777215));
        btnBolme->setFont(font);

        gridLayout->addWidget(btnBolme, 3, 3, 1, 1);

        btnCarpma = new QPushButton(centralWidget);
        btnCarpma->setObjectName(QString::fromUtf8("btnCarpma"));
        sizePolicy.setHeightForWidth(btnCarpma->sizePolicy().hasHeightForWidth());
        btnCarpma->setSizePolicy(sizePolicy);
        btnCarpma->setMinimumSize(QSize(0, 30));
        btnCarpma->setMaximumSize(QSize(57, 16777215));
        btnCarpma->setFont(font);

        gridLayout->addWidget(btnCarpma, 2, 3, 1, 1);

        btnParantezAc = new QPushButton(centralWidget);
        btnParantezAc->setObjectName(QString::fromUtf8("btnParantezAc"));
        sizePolicy1.setHeightForWidth(btnParantezAc->sizePolicy().hasHeightForWidth());
        btnParantezAc->setSizePolicy(sizePolicy1);
        btnParantezAc->setMinimumSize(QSize(0, 30));
        btnParantezAc->setMaximumSize(QSize(57, 16777215));

        gridLayout->addWidget(btnParantezAc, 1, 3, 1, 1);

        btnParantezKapa = new QPushButton(centralWidget);
        btnParantezKapa->setObjectName(QString::fromUtf8("btnParantezKapa"));
        sizePolicy1.setHeightForWidth(btnParantezKapa->sizePolicy().hasHeightForWidth());
        btnParantezKapa->setSizePolicy(sizePolicy1);
        btnParantezKapa->setMinimumSize(QSize(0, 30));
        btnParantezKapa->setMaximumSize(QSize(57, 16777215));

        gridLayout->addWidget(btnParantezKapa, 1, 4, 1, 1);

        btnGeriAl = new QPushButton(centralWidget);
        btnGeriAl->setObjectName(QString::fromUtf8("btnGeriAl"));
        sizePolicy.setHeightForWidth(btnGeriAl->sizePolicy().hasHeightForWidth());
        btnGeriAl->setSizePolicy(sizePolicy);
        btnGeriAl->setMinimumSize(QSize(0, 30));
        btnGeriAl->setMaximumSize(QSize(57, 16777215));
        btnGeriAl->setFont(font);

        gridLayout->addWidget(btnGeriAl, 1, 5, 1, 1);

        btnYuzde = new QPushButton(centralWidget);
        btnYuzde->setObjectName(QString::fromUtf8("btnYuzde"));
        sizePolicy.setHeightForWidth(btnYuzde->sizePolicy().hasHeightForWidth());
        btnYuzde->setSizePolicy(sizePolicy);
        btnYuzde->setMinimumSize(QSize(0, 30));
        btnYuzde->setMaximumSize(QSize(57, 16777215));
        btnYuzde->setFont(font);

        gridLayout->addWidget(btnYuzde, 2, 5, 1, 1);

        btnGizle = new QPushButton(centralWidget);
        btnGizle->setObjectName(QString::fromUtf8("btnGizle"));
        sizePolicy.setHeightForWidth(btnGizle->sizePolicy().hasHeightForWidth());
        btnGizle->setSizePolicy(sizePolicy);
        btnGizle->setMinimumSize(QSize(0, 30));
        btnGizle->setMaximumSize(QSize(57, 16777215));
        btnGizle->setFont(font);

        gridLayout->addWidget(btnGizle, 4, 6, 1, 1);

        btnIsaret = new QPushButton(centralWidget);
        btnIsaret->setObjectName(QString::fromUtf8("btnIsaret"));
        btnIsaret->setEnabled(true);
        sizePolicy.setHeightForWidth(btnIsaret->sizePolicy().hasHeightForWidth());
        btnIsaret->setSizePolicy(sizePolicy);
        btnIsaret->setMinimumSize(QSize(0, 30));
        btnIsaret->setMaximumSize(QSize(57, 16777215));
        btnIsaret->setFont(font);

        gridLayout->addWidget(btnIsaret, 5, 5, 1, 1);

        btn1bolu = new QPushButton(centralWidget);
        btn1bolu->setObjectName(QString::fromUtf8("btn1bolu"));
        sizePolicy.setHeightForWidth(btn1bolu->sizePolicy().hasHeightForWidth());
        btn1bolu->setSizePolicy(sizePolicy);
        btn1bolu->setMinimumSize(QSize(0, 30));
        btn1bolu->setMaximumSize(QSize(57, 16777215));
        btn1bolu->setFont(font);

        gridLayout->addWidget(btn1bolu, 4, 5, 1, 1);

        btnCarpanAyir = new QPushButton(centralWidget);
        btnCarpanAyir->setObjectName(QString::fromUtf8("btnCarpanAyir"));
        sizePolicy1.setHeightForWidth(btnCarpanAyir->sizePolicy().hasHeightForWidth());
        btnCarpanAyir->setSizePolicy(sizePolicy1);
        btnCarpanAyir->setMinimumSize(QSize(0, 30));
        btnCarpanAyir->setMaximumSize(QSize(57, 16777215));

        gridLayout->addWidget(btnCarpanAyir, 3, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        yuzey2 = new QGridLayout();
        yuzey2->setSpacing(6);
        yuzey2->setObjectName(QString::fromUtf8("yuzey2"));
        yuzey2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gbMat = new QGroupBox(centralWidget);
        gbMat->setObjectName(QString::fromUtf8("gbMat"));
        gbMat->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gbMat->sizePolicy().hasHeightForWidth());
        gbMat->setSizePolicy(sizePolicy2);
        gbMat->setMinimumSize(QSize(37, 0));
        gbMat->setMaximumSize(QSize(16777215, 16777215));
        gbMat->setFont(font);
        gbMat->setFocusPolicy(Qt::NoFocus);
        gbMat->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(gbMat);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line = new QFrame(gbMat);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 0, 3, 6, 1);

        btnCos = new QPushButton(gbMat);
        btnCos->setObjectName(QString::fromUtf8("btnCos"));
        sizePolicy.setHeightForWidth(btnCos->sizePolicy().hasHeightForWidth());
        btnCos->setSizePolicy(sizePolicy);
        btnCos->setMaximumSize(QSize(100, 27));
        QFont font3;
        font3.setPointSize(10);
        btnCos->setFont(font3);

        gridLayout_3->addWidget(btnCos, 3, 0, 1, 1);

        btnArccos = new QPushButton(gbMat);
        btnArccos->setObjectName(QString::fromUtf8("btnArccos"));
        btnArccos->setMaximumSize(QSize(100, 27));
        btnArccos->setFont(font3);

        gridLayout_3->addWidget(btnArccos, 3, 1, 1, 1);

        btnTan = new QPushButton(gbMat);
        btnTan->setObjectName(QString::fromUtf8("btnTan"));
        sizePolicy.setHeightForWidth(btnTan->sizePolicy().hasHeightForWidth());
        btnTan->setSizePolicy(sizePolicy);
        btnTan->setMaximumSize(QSize(100, 27));
        btnTan->setFont(font3);

        gridLayout_3->addWidget(btnTan, 4, 0, 1, 1);

        btnArctan = new QPushButton(gbMat);
        btnArctan->setObjectName(QString::fromUtf8("btnArctan"));
        btnArctan->setMaximumSize(QSize(100, 27));
        btnArctan->setFont(font3);

        gridLayout_3->addWidget(btnArctan, 4, 1, 1, 1);

        btnCot = new QPushButton(gbMat);
        btnCot->setObjectName(QString::fromUtf8("btnCot"));
        sizePolicy.setHeightForWidth(btnCot->sizePolicy().hasHeightForWidth());
        btnCot->setSizePolicy(sizePolicy);
        btnCot->setMaximumSize(QSize(100, 27));
        btnCot->setFont(font3);

        gridLayout_3->addWidget(btnCot, 5, 0, 1, 1);

        btnArccot = new QPushButton(gbMat);
        btnArccot->setObjectName(QString::fromUtf8("btnArccot"));
        btnArccot->setMaximumSize(QSize(100, 27));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        btnArccot->setFont(font4);

        gridLayout_3->addWidget(btnArccot, 5, 1, 1, 1);

        btnArcsin = new QPushButton(gbMat);
        btnArcsin->setObjectName(QString::fromUtf8("btnArcsin"));
        btnArcsin->setMaximumSize(QSize(100, 27));
        btnArcsin->setFont(font3);

        gridLayout_3->addWidget(btnArcsin, 2, 1, 1, 1);

        btnSin = new QPushButton(gbMat);
        btnSin->setObjectName(QString::fromUtf8("btnSin"));
        sizePolicy.setHeightForWidth(btnSin->sizePolicy().hasHeightForWidth());
        btnSin->setSizePolicy(sizePolicy);
        btnSin->setMaximumSize(QSize(100, 27));
        btnSin->setFont(font3);

        gridLayout_3->addWidget(btnSin, 2, 0, 1, 1);

        btnLog = new QPushButton(gbMat);
        btnLog->setObjectName(QString::fromUtf8("btnLog"));
        btnLog->setMinimumSize(QSize(0, 0));
        btnLog->setMaximumSize(QSize(100, 27));
        btnLog->setFont(font3);

        gridLayout_3->addWidget(btnLog, 2, 4, 1, 1);

        cbTri = new QComboBox(gbMat);
        cbTri->setObjectName(QString::fromUtf8("cbTri"));
        cbTri->setFont(font3);
        cbTri->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(cbTri, 1, 0, 1, 1);

        cbLog = new QComboBox(gbMat);
        cbLog->setObjectName(QString::fromUtf8("cbLog"));
        cbLog->setMaximumSize(QSize(100, 16777215));
        cbLog->setFont(font3);

        gridLayout_3->addWidget(cbLog, 1, 4, 1, 1);

        btnSinh = new QPushButton(gbMat);
        btnSinh->setObjectName(QString::fromUtf8("btnSinh"));
        btnSinh->setFont(font3);

        gridLayout_3->addWidget(btnSinh, 2, 2, 1, 1);

        btnCosh = new QPushButton(gbMat);
        btnCosh->setObjectName(QString::fromUtf8("btnCosh"));
        btnCosh->setFont(font3);

        gridLayout_3->addWidget(btnCosh, 3, 2, 1, 1);

        btnTanh = new QPushButton(gbMat);
        btnTanh->setObjectName(QString::fromUtf8("btnTanh"));
        btnTanh->setFont(font3);

        gridLayout_3->addWidget(btnTanh, 4, 2, 1, 1);

        btnCoth = new QPushButton(gbMat);
        btnCoth->setObjectName(QString::fromUtf8("btnCoth"));
        btnCoth->setFont(font3);

        gridLayout_3->addWidget(btnCoth, 5, 2, 1, 1);


        yuzey2->addWidget(gbMat, 0, 0, 1, 1);


        gridLayout_2->addLayout(yuzey2, 1, 0, 1, 1);

        gbGecmis = new QGroupBox(centralWidget);
        gbGecmis->setObjectName(QString::fromUtf8("gbGecmis"));
        gbGecmis->setMinimumSize(QSize(370, 0));
        gbGecmis->setMaximumSize(QSize(16777215, 150));
        gridLayout_4 = new QGridLayout(gbGecmis);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textGecmis = new QTextEdit(gbGecmis);
        textGecmis->setObjectName(QString::fromUtf8("textGecmis"));
        textGecmis->setMaximumSize(QSize(16777215, 130));
        textGecmis->setReadOnly(true);

        gridLayout_4->addWidget(textGecmis, 0, 0, 3, 1);

        btnGecmisSil = new QPushButton(gbGecmis);
        btnGecmisSil->setObjectName(QString::fromUtf8("btnGecmisSil"));
        btnGecmisSil->setMaximumSize(QSize(60, 16777215));

        gridLayout_4->addWidget(btnGecmisSil, 0, 1, 1, 1);

        btnGecmisKaydet = new QPushButton(gbGecmis);
        btnGecmisKaydet->setObjectName(QString::fromUtf8("btnGecmisKaydet"));
        btnGecmisKaydet->setMaximumSize(QSize(60, 16777215));

        gridLayout_4->addWidget(btnGecmisKaydet, 1, 1, 1, 1);


        gridLayout_2->addWidget(gbGecmis, 2, 0, 1, 1);

        ehm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ehm);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 455, 24));
        menuHakkinda = new QMenu(menuBar);
        menuHakkinda->setObjectName(QString::fromUtf8("menuHakkinda"));
        menuKip = new QMenu(menuBar);
        menuKip->setObjectName(QString::fromUtf8("menuKip"));
        menuIslemTuru = new QMenu(menuBar);
        menuIslemTuru->setObjectName(QString::fromUtf8("menuIslemTuru"));
        ehm->setMenuBar(menuBar);
        statusBar = new QStatusBar(ehm);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        ehm->setStatusBar(statusBar);

        menuBar->addAction(menuKip->menuAction());
        menuBar->addAction(menuIslemTuru->menuAction());
        menuBar->addAction(menuHakkinda->menuAction());
        menuHakkinda->addAction(actionEhmHakkinda);
        menuHakkinda->addAction(actionQtHakkinda);
        menuKip->addAction(actionBasit2);
        menuKip->addAction(actionGelismis);
        menuKip->addAction(actionGecmis);
        menuIslemTuru->addAction(actionIslemSirasi);
        menuIslemTuru->addAction(actionIslemOnceligi);

        retranslateUi(ehm);

        QMetaObject::connectSlotsByName(ehm);
    } // setupUi

    void retranslateUi(QMainWindow *ehm)
    {
        ehm->setWindowTitle(QApplication::translate("ehm", "ehm", 0, QApplication::UnicodeUTF8));
        actionEhmHakkinda->setText(QApplication::translate("ehm", "ehm Hakk\304\261nda", 0, QApplication::UnicodeUTF8));
        actionQtHakkinda->setText(QApplication::translate("ehm", "Qt Hakk\304\261nda", 0, QApplication::UnicodeUTF8));
        actionBasit->setText(QApplication::translate("ehm", "Basit", 0, QApplication::UnicodeUTF8));
        actionGelismis->setText(QApplication::translate("ehm", "Geli\305\237mi\305\237", 0, QApplication::UnicodeUTF8));
        actionGecmis->setText(QApplication::translate("ehm", "Ge\303\247mi\305\237", 0, QApplication::UnicodeUTF8));
        actionBasit2->setText(QApplication::translate("ehm", "Basit", 0, QApplication::UnicodeUTF8));
        actionIslemSirasi->setText(QApplication::translate("ehm", "\304\260\305\237lem S\304\261ras\304\261", 0, QApplication::UnicodeUTF8));
        actionIslemOnceligi->setText(QApplication::translate("ehm", "\304\260\305\237lem \303\226nceli\304\237i", 0, QApplication::UnicodeUTF8));
        action2->setText(QApplication::translate("ehm", "2", 0, QApplication::UnicodeUTF8));
        actionIngilizce->setText(QApplication::translate("ehm", "\304\260ngilizce", 0, QApplication::UnicodeUTF8));
        actionTurkce->setText(QApplication::translate("ehm", "T\303\274rk\303\247e", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("ehm", "7", 0, QApplication::UnicodeUTF8));
        btn7->setShortcut(QApplication::translate("ehm", "7", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("ehm", "8", 0, QApplication::UnicodeUTF8));
        btn8->setShortcut(QApplication::translate("ehm", "8", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("ehm", "9", 0, QApplication::UnicodeUTF8));
        btn9->setShortcut(QApplication::translate("ehm", "9", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("ehm", "4", 0, QApplication::UnicodeUTF8));
        btn4->setShortcut(QApplication::translate("ehm", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("ehm", "5", 0, QApplication::UnicodeUTF8));
        btn5->setShortcut(QApplication::translate("ehm", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("ehm", "6", 0, QApplication::UnicodeUTF8));
        btn6->setShortcut(QApplication::translate("ehm", "6", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("ehm", "1", 0, QApplication::UnicodeUTF8));
        btn1->setShortcut(QApplication::translate("ehm", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("ehm", "2", 0, QApplication::UnicodeUTF8));
        btn2->setShortcut(QApplication::translate("ehm", "2", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("ehm", "3", 0, QApplication::UnicodeUTF8));
        btn3->setShortcut(QApplication::translate("ehm", "3", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("ehm", "0", 0, QApplication::UnicodeUTF8));
        btn0->setShortcut(QApplication::translate("ehm", "0", 0, QApplication::UnicodeUTF8));
        btnVirgul->setText(QApplication::translate("ehm", ".", 0, QApplication::UnicodeUTF8));
        btnVirgul->setShortcut(QApplication::translate("ehm", ".", 0, QApplication::UnicodeUTF8));
        btnEsittir->setText(QApplication::translate("ehm", "=", 0, QApplication::UnicodeUTF8));
        btnEsittir->setShortcut(QApplication::translate("ehm", "Return", 0, QApplication::UnicodeUTF8));
        btnTemizle->setText(QApplication::translate("ehm", "C", 0, QApplication::UnicodeUTF8));
        btnTemizle->setShortcut(QApplication::translate("ehm", "Del", 0, QApplication::UnicodeUTF8));
        ekran->setText(QString());
        btnGecmis->setText(QApplication::translate("ehm", "ge\303\247mi\305\237", 0, QApplication::UnicodeUTF8));
        btnGecmis->setShortcut(QApplication::translate("ehm", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        btnPi->setText(QApplication::translate("ehm", "\317\200", 0, QApplication::UnicodeUTF8));
        btnPi->setShortcut(QApplication::translate("ehm", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        btnE->setText(QApplication::translate("ehm", "e", 0, QApplication::UnicodeUTF8));
        btnE->setShortcut(QApplication::translate("ehm", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        btnMod->setText(QApplication::translate("ehm", "mod", 0, QApplication::UnicodeUTF8));
        btnMod->setShortcut(QApplication::translate("ehm", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        btnFakt->setText(QApplication::translate("ehm", "!", 0, QApplication::UnicodeUTF8));
        btnFakt->setShortcut(QApplication::translate("ehm", "!", 0, QApplication::UnicodeUTF8));
        btnUs->setText(QApplication::translate("ehm", "^", 0, QApplication::UnicodeUTF8));
        btnUs->setShortcut(QApplication::translate("ehm", "^", 0, QApplication::UnicodeUTF8));
        btnKarekok->setText(QApplication::translate("ehm", "\342\210\232", 0, QApplication::UnicodeUTF8));
        btnCikarma->setText(QApplication::translate("ehm", "-", 0, QApplication::UnicodeUTF8));
        btnCikarma->setShortcut(QApplication::translate("ehm", "-", 0, QApplication::UnicodeUTF8));
        btnToplama->setText(QApplication::translate("ehm", "+", 0, QApplication::UnicodeUTF8));
        btnToplama->setShortcut(QApplication::translate("ehm", "+", 0, QApplication::UnicodeUTF8));
        btnBolme->setText(QApplication::translate("ehm", "/", 0, QApplication::UnicodeUTF8));
        btnBolme->setShortcut(QApplication::translate("ehm", "/", 0, QApplication::UnicodeUTF8));
        btnCarpma->setText(QApplication::translate("ehm", "x", 0, QApplication::UnicodeUTF8));
        btnCarpma->setShortcut(QApplication::translate("ehm", "*", 0, QApplication::UnicodeUTF8));
        btnParantezAc->setText(QApplication::translate("ehm", "(", 0, QApplication::UnicodeUTF8));
        btnParantezAc->setShortcut(QApplication::translate("ehm", "(", 0, QApplication::UnicodeUTF8));
        btnParantezKapa->setText(QApplication::translate("ehm", ")", 0, QApplication::UnicodeUTF8));
        btnParantezKapa->setShortcut(QApplication::translate("ehm", ")", 0, QApplication::UnicodeUTF8));
        btnGeriAl->setText(QApplication::translate("ehm", "<<", 0, QApplication::UnicodeUTF8));
        btnGeriAl->setShortcut(QApplication::translate("ehm", "Backspace", 0, QApplication::UnicodeUTF8));
        btnYuzde->setText(QApplication::translate("ehm", "%", 0, QApplication::UnicodeUTF8));
        btnYuzde->setShortcut(QApplication::translate("ehm", "%", 0, QApplication::UnicodeUTF8));
        btnGizle->setText(QApplication::translate("ehm", "\342\206\223", 0, QApplication::UnicodeUTF8));
        btnGizle->setShortcut(QApplication::translate("ehm", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        btnIsaret->setText(QApplication::translate("ehm", "+/-", 0, QApplication::UnicodeUTF8));
        btn1bolu->setText(QApplication::translate("ehm", "1/x", 0, QApplication::UnicodeUTF8));
        btnCarpanAyir->setText(QApplication::translate("ehm", "axb", 0, QApplication::UnicodeUTF8));
        gbMat->setTitle(QString());
        btnCos->setText(QApplication::translate("ehm", "cos", 0, QApplication::UnicodeUTF8));
        btnArccos->setText(QApplication::translate("ehm", "arccos", 0, QApplication::UnicodeUTF8));
        btnTan->setText(QApplication::translate("ehm", "tan", 0, QApplication::UnicodeUTF8));
        btnArctan->setText(QApplication::translate("ehm", "arctan", 0, QApplication::UnicodeUTF8));
        btnCot->setText(QApplication::translate("ehm", "cot", 0, QApplication::UnicodeUTF8));
        btnArccot->setText(QApplication::translate("ehm", "arccot", 0, QApplication::UnicodeUTF8));
        btnArcsin->setText(QApplication::translate("ehm", "arcsin", 0, QApplication::UnicodeUTF8));
        btnSin->setText(QApplication::translate("ehm", "sin", 0, QApplication::UnicodeUTF8));
        btnLog->setText(QApplication::translate("ehm", "log", 0, QApplication::UnicodeUTF8));
        cbTri->clear();
        cbTri->insertItems(0, QStringList()
         << QApplication::translate("ehm", "radyan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ehm", "derece", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ehm", "grad", 0, QApplication::UnicodeUTF8)
        );
        cbLog->clear();
        cbLog->insertItems(0, QStringList()
         << QApplication::translate("ehm", "log10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ehm", "log2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ehm", "ln", 0, QApplication::UnicodeUTF8)
        );
        btnSinh->setText(QApplication::translate("ehm", "sinh", 0, QApplication::UnicodeUTF8));
        btnCosh->setText(QApplication::translate("ehm", "cosh", 0, QApplication::UnicodeUTF8));
        btnTanh->setText(QApplication::translate("ehm", "tanh", 0, QApplication::UnicodeUTF8));
        btnCoth->setText(QApplication::translate("ehm", "coth", 0, QApplication::UnicodeUTF8));
        gbGecmis->setTitle(QApplication::translate("ehm", "Ge\303\247mi\305\237", 0, QApplication::UnicodeUTF8));
        btnGecmisSil->setText(QApplication::translate("ehm", "Sil", 0, QApplication::UnicodeUTF8));
        btnGecmisKaydet->setText(QApplication::translate("ehm", "Kaydet", 0, QApplication::UnicodeUTF8));
        menuHakkinda->setTitle(QApplication::translate("ehm", "?", 0, QApplication::UnicodeUTF8));
        menuKip->setTitle(QApplication::translate("ehm", "Kip", 0, QApplication::UnicodeUTF8));
        menuIslemTuru->setTitle(QApplication::translate("ehm", "\304\260\305\237lem T\303\274r\303\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ehm: public Ui_ehm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EHM_H
