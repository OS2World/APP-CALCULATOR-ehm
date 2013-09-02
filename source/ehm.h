#ifndef EHM_H
#define EHM_H

#include <QMainWindow>
#include <QLabel>
#include "hakkinda.h"


namespace Ui {
    class ehm;
}

class ehm : public QMainWindow
{
    Q_OBJECT

public:
    explicit ehm(QWidget *parent = 0);
    ~ehm();
    QString surum;

public slots:
    void fonkSifirla();
    void fonkHakkinda();
    void fonkbtn(QString);
    void fonkbtn1();
    void fonkbtn2();
    void fonkbtn3();
    void fonkbtn4();
    void fonkbtn5();
    void fonkbtn6();
    void fonkbtn7();
    void fonkbtn8();
    void fonkbtn9();
    void fonkbtn0();
    void fonkVirgul();
    void fonkVirgulKontrol();
    void fonkTemizle();
    void fonkToplama();
    void fonkCikarma();
    void fonkCarpma();
    void fonkBolme();
    void fonkEsittir();
    void fonkIslem();
    void fonkIslem2(QStringList &diziPro,QString isaret);
    void fonkGeriAl();
    void fonkIsaret();
    void fonkKarekok();
    void fonkYuzde();
    void fonkUs();
    void fonk1bolu();
    void fonkFakt();
    void fonkGelismis();
    void fonkBasit();
    void fonkSin();
    void fonkCos();
    void fonkTan();
    void fonkCot();
    void fonkPi();
    void fonkE();
    void fonkArcsin();
    void fonkArccos();
    void fonkArctan();
    void fonkArccot();
    void fonkSinh();
    void fonkCosh();
    void fonkTanh();
    void fonkCoth();
    void fonkLog();
    void fonkGecmis();
    void fonkGecmisSil();
    void fonkGecmisKaydet();
    void fonkQtHakkinda();
    void fonkDegistirIO();
    void fonkDegistirIS();
    void fonkDegistirTur(QLabel*,QLabel*,bool);
    void fonkIslemTuru();
    void fonkIslemPro(QString,QString,bool);
    void fonkTrigIslemIO(QStringList &diziPro,bool &trigVar,QString,QString);
    void fonkTrigIslemIS(QString);
    void fonkYerDegistir(QStringList &diziPro,int,double);
    void fonkMod();
    void fonkParantezAc();
    void fonkParantezKapa();
    void fonkDonusum(int,double);
    void fonkCarpanAyir();

private:
    Ui::ehm *ui;
    hakkinda formHakkinda;
};

#endif // EHM_H
