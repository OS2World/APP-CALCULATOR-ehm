#include "ehm.h"
#include "ui_ehm.h"
#include <QMessageBox>
#include <math.h>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QStatusBar>
#include <QTextCodec>
#include <QDebug>
#include <QLabel>

#if defined(__OS2__)
  #define log2(value) log((double)value)/log(2.0)
#endif

QString islem;
QString onceki;
QString sonucKS="0";
QString geciciSayi2;
QString geciciSayi1;
QString yedektext;
QString yedektextSon;
QString yedektextBas;
QString diziyeIsaret;
QString silinecek;
QString oncekiCarpanAyir;
QStringList Dizi;
QStringList DiziIslemisareti;
QStringList DiziParantez;
QStringList DiziCarpanAyir;
bool devam=true;
bool islemSirasi=false;
bool islemOnceligi=true;
bool mevcutToplama=false;
bool mevcutCikarma=false;
bool mevcutCarpma=false;
bool mevcutBolme=false;
bool mevcutEsittir=false;
bool mevcutUs=false;
bool mevcutFakt=false;
bool mevcutSin=false;
bool mevcutCos=false;
bool mevcutTan=false;
bool mevcutCot=false;
bool mevcutArcsin=false;
bool mevcutArccos=false;
bool mevcutArctan=false;
bool mevcutArccot=false;
bool mevcutSinh=false;
bool mevcutCosh=false;
bool mevcutTanh=false;
bool mevcutCoth=false;
bool mevcutLog=false;
bool mevcutYuzde=false;
bool mevcutMod=false;
bool mevcutKok=false;
bool mevcutParantez=false;
bool islemVar=false;
bool sifirVar=false;
bool virgulVar=false;
bool ikiliIslem=false;
bool ilkSayi=true;
bool satirIlkSayi=true;
bool esittirVar=false;
bool hataVar=false;
bool kokVar=false;
bool sinVar=false;
bool cosVar=false;
bool tanVar=false;
bool cotVar=false;
bool arcsinVar=false;
bool arccosVar=false;
bool arctanVar=false;
bool arccotVar=false;
bool logVar=false;
bool faktVar=false;
bool yuzdeVar=false;
bool modVar=false;
bool parantezVar=false;
bool sinhVar=false;
bool coshVar=false;
bool tanhVar=false;
bool cothVar=false;
bool carpanAyirVar=false;
double sonuc=0;
double sonucK=0;
double geciciSonuc=0;
double sayi2=0;
double sayi1=0;
double oncekiDouble=0;
double tri=0;
const double pi=3.14159265;
const double e=2.71828182;
int islemSayac=0;
int DiziSayac=0;
int yer=0;
int satirSayac=1;
int parantezAcSayac=0;
int parantezKapaSayac=0;
int oncekiSayi;
QLabel *labelIS;
QLabel *labelIO;

ehm::ehm(QWidget *parent) : QMainWindow(parent),ui(new Ui::ehm)
{
    surum="ehm 0.6";
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));
    labelIS = new QLabel(surum+" : "+QObject::tr("İşlem Sırası Etkin"));
    labelIO = new QLabel(surum+" : "+QObject::tr("İşlem Önceliği Etkin"));
    ui->setupUi(this);
    fonkBasit();
    fonkIslemTuru();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    connect(ui->btnGizle,SIGNAL(clicked()),this,SLOT(fonkGelismis()));
    connect(ui->btnGecmis,SIGNAL(clicked()),this,SLOT(fonkGecmis()));
    connect(ui->btn1,SIGNAL(clicked()),this,SLOT(fonkbtn1()));
    connect(ui->btn2,SIGNAL(clicked()),this,SLOT(fonkbtn2()));
    connect(ui->btn3,SIGNAL(clicked()),this,SLOT(fonkbtn3()));
    connect(ui->btn4,SIGNAL(clicked()),this,SLOT(fonkbtn4()));
    connect(ui->btn5,SIGNAL(clicked()),this,SLOT(fonkbtn5()));
    connect(ui->btn6,SIGNAL(clicked()),this,SLOT(fonkbtn6()));
    connect(ui->btn7,SIGNAL(clicked()),this,SLOT(fonkbtn7()));
    connect(ui->btn8,SIGNAL(clicked()),this,SLOT(fonkbtn8()));
    connect(ui->btn9,SIGNAL(clicked()),this,SLOT(fonkbtn9()));
    connect(ui->btn0,SIGNAL(clicked()),this,SLOT(fonkbtn0()));
    connect(ui->btnVirgul,SIGNAL(clicked()),this,SLOT(fonkVirgul()));
    connect(ui->btnTemizle,SIGNAL(clicked()),this,SLOT(fonkTemizle()));
    connect(ui->btnToplama,SIGNAL(clicked()),this,SLOT(fonkToplama()));
    connect(ui->btnCikarma,SIGNAL(clicked()),this,SLOT(fonkCikarma()));
    connect(ui->btnCarpma,SIGNAL(clicked()),this,SLOT(fonkCarpma()));
    connect(ui->btnBolme,SIGNAL(clicked()),this,SLOT(fonkBolme()));
    connect(ui->btnEsittir,SIGNAL(clicked()),this,SLOT(fonkEsittir()));
    connect(ui->btnGeriAl,SIGNAL(clicked()),this,SLOT(fonkGeriAl()));
    connect(ui->btnIsaret,SIGNAL(clicked()),this,SLOT(fonkIsaret()));
    connect(ui->btnKarekok,SIGNAL(clicked()),this,SLOT(fonkKarekok()));
    connect(ui->btnYuzde,SIGNAL(clicked()),this,SLOT(fonkYuzde()));
    connect(ui->btnUs,SIGNAL(clicked()),this,SLOT(fonkUs()));
    connect(ui->btn1bolu,SIGNAL(clicked()),this,SLOT(fonk1bolu()));
    connect(ui->btnFakt,SIGNAL(clicked()),this,SLOT(fonkFakt()));
    connect(ui->btnSin,SIGNAL(clicked()),this,SLOT(fonkSin()));
    connect(ui->btnCos,SIGNAL(clicked()),this,SLOT(fonkCos()));
    connect(ui->btnTan,SIGNAL(clicked()),this,SLOT(fonkTan()));
    connect(ui->btnCot,SIGNAL(clicked()),this,SLOT(fonkCot()));
    connect(ui->btnPi,SIGNAL(clicked()),this,SLOT(fonkPi()));
    connect(ui->btnE,SIGNAL(clicked()),this,SLOT(fonkE()));
    connect(ui->btnArcsin,SIGNAL(clicked()),this,SLOT(fonkArcsin()));
    connect(ui->btnArccos,SIGNAL(clicked()),this,SLOT(fonkArccos()));
    connect(ui->btnArctan,SIGNAL(clicked()),this,SLOT(fonkArctan()));
    connect(ui->btnArccot,SIGNAL(clicked()),this,SLOT(fonkArccot()));
    connect(ui->btnLog,SIGNAL(clicked()),this,SLOT(fonkLog()));
    connect(ui->btnMod,SIGNAL(clicked()),this,SLOT(fonkMod()));
    connect(ui->btnGecmisSil,SIGNAL(clicked()),this,SLOT(fonkGecmisSil()));
    connect(ui->btnGecmisKaydet,SIGNAL(clicked()),this,SLOT(fonkGecmisKaydet()));
    connect(ui->btnParantezAc,SIGNAL(clicked()),this,SLOT(fonkParantezAc()));
    connect(ui->btnParantezKapa,SIGNAL(clicked()),this,SLOT(fonkParantezKapa()));
    connect(ui->actionQtHakkinda,SIGNAL(triggered()),this,SLOT(fonkQtHakkinda()));
    connect(ui->actionEhmHakkinda,SIGNAL(triggered()),this,SLOT(fonkHakkinda()));
    connect(ui->actionGelismis,SIGNAL(triggered()),this,SLOT(fonkGelismis()));
    connect(ui->actionGecmis,SIGNAL(triggered()),this,SLOT(fonkGecmis()));
    connect(ui->actionBasit2,SIGNAL(triggered()),this,SLOT(fonkBasit()));
    connect(ui->actionIslemOnceligi,SIGNAL(triggered()),this,SLOT(fonkDegistirIO()));
    connect(ui->actionIslemSirasi,SIGNAL(triggered()),this,SLOT(fonkDegistirIS()));
    connect(ui->btnSinh,SIGNAL(clicked()),this,SLOT(fonkSinh()));
    connect(ui->btnCosh,SIGNAL(clicked()),this,SLOT(fonkCosh()));
    connect(ui->btnTanh,SIGNAL(clicked()),this,SLOT(fonkTanh()));
    connect(ui->btnCoth,SIGNAL(clicked()),this,SLOT(fonkCoth()));
    connect(ui->btnCarpanAyir,SIGNAL(clicked()),this,SLOT(fonkCarpanAyir()));
}

void ehm::fonkIslemTuru()
{
    if(islemOnceligi==true)
    {
        ui->statusBar->addWidget(labelIO);
        ui->btnIsaret->setEnabled(false);
        ui->btn1bolu->setEnabled(false);
    }
    else if(islemSirasi==true)
    {
        ui->statusBar->addWidget(labelIS);
    }
}

void ehm::fonkDegistirTur(QLabel *labelTuru,QLabel *digerLabelTuru,bool islemTuru)
{
    labelTuru->show();
    digerLabelTuru->hide();
    ui->ekran->setText("");
    fonkSifirla();
    islem="";
    ui->statusBar->addWidget(labelTuru);
    if(islemTuru==islemSirasi)
    {
        islemSirasi=true;
        islemOnceligi=false;
        ui->btnIsaret->setEnabled(true);
        ui->btn1bolu->setEnabled(true);
        ui->btnParantezAc->setEnabled(false);
        ui->btnParantezKapa->setEnabled(false);
        ui->actionIslemSirasi->setChecked(true);
        ui->actionIslemOnceligi->setChecked(false);
    }
    else if(islemTuru==islemOnceligi)
    {
        islemSirasi=false;
        islemOnceligi=true;
        ui->btnIsaret->setEnabled(false);
        ui->btn1bolu->setEnabled(false);
        ui->btnParantezAc->setEnabled(true);
        ui->btnParantezKapa->setEnabled(true);
        ui->actionIslemSirasi->setChecked(false);
        ui->actionIslemOnceligi->setChecked(true);
    }
}

void ehm::fonkDegistirIO()
{
    fonkDegistirTur(labelIO,labelIS,islemOnceligi);
}

void ehm::fonkDegistirIS()
{
    fonkDegistirTur(labelIS,labelIO,islemSirasi);
}

void ehm::fonkHakkinda()
{
    if(formHakkinda.isHidden()==true)
    {
        formHakkinda.show();
    }
    else
    {
        formHakkinda.hide();
    }
}

void ehm::fonkQtHakkinda()
{
    QMessageBox::aboutQt(this,tr("Qt hakkında"));
}

void ehm::fonkGelismis()
{
    if(ui->gbMat->isHidden()==true)
    {
        ui->gbMat->show();
        ui->btnGizle->setText(QChar(0x2191));
        ui->actionGelismis->setChecked(true);
    }
    else
    {
        ui->gbMat->hide();
        ui->btnGizle->setText(QChar(0x2193));
        ui->actionGelismis->setChecked(false);
    }
}

void ehm::fonkGecmis()
{
    if(ui->gbGecmis->isHidden()==true)
    {
        ui->gbGecmis->show();
        ui->actionGecmis->setChecked(true);
    }
    else
    {
        ui->gbGecmis->hide();
        ui->actionGecmis->setChecked(false);
    }
}

void ehm::fonkBasit()
{
    ui->gbMat->hide();
    ui->gbGecmis->hide();
    ui->actionBasit2->setChecked(true);
    ui->actionGecmis->setChecked(false);
    ui->actionGelismis->setChecked(false);
}

void ehm::fonkGecmisSil()
{
    ui->textGecmis->clear();
    satirSayac=1;
    ui->statusBar->showMessage(surum+" : "+tr("Geçmiş Silindi"),10000);
}

void ehm::fonkGecmisKaydet()
{
    QString dosya = QFileDialog::getSaveFileName(this,tr("Kaydet"),"/home/untitled.txt",tr("Metin Dosyaları(*.txt);;Tüm Dosyalar(*.*)"));
    QFile f(dosya);
    if(f.open(QIODevice::WriteOnly))
    {
        QTextStream out(&f);
        out<<ui->textGecmis->toPlainText();
        out.flush();
    }
    ui->statusBar->showMessage(surum+" : "+tr("Geçmiş Kaydedildi"),10000);
}

void ehm::fonkSifirla()
{
    mevcutToplama=false;
    mevcutCikarma=false;
    mevcutCarpma=false;
    mevcutBolme=false;
    mevcutEsittir=false;
    mevcutUs=false;
    mevcutFakt=false;
    mevcutSin=false;
    mevcutCos=false;
    mevcutTan=false;
}

void ehm::fonkbtn(QString btn)
{
    if(islemSirasi==true)
    {
        fonkSifirla();
        if(islemVar==true)
        {
            ui->ekran->setText("");
            islemVar=false;
        }
        if(sifirVar==true)
        {
            ui->ekran->setText(btn);
        }
        else
        {
            onceki= ui->ekran->text();
            onceki.append(btn);
            ui->ekran->setText(onceki);
        }
        sifirVar=false;
        ikiliIslem=false;
    }
    else if(islemOnceligi==true)
    {
        if(mevcutEsittir==true)
        {
            ui->ekran->setText("");
            fonkSifirla();
        }
        onceki= ui->ekran->text();
        onceki.append(btn);
        ui->ekran->setText(onceki);
    }
}

void ehm::fonkbtn1()
{
    fonkbtn("1");
}

void ehm::fonkbtn2()
{
     fonkbtn("2");
}

void ehm::fonkbtn3()
{
     fonkbtn("3");
}

void ehm::fonkbtn4()
{
    fonkbtn("4");
}

void ehm::fonkbtn5()
{
     fonkbtn("5");
}

void ehm::fonkbtn6()
{
     fonkbtn("6");
}

void ehm::fonkbtn7()
{
     fonkbtn("7");
}

void ehm::fonkbtn8()
{
     fonkbtn("8");
}

void ehm::fonkbtn9()
{
     fonkbtn("9");
}

void ehm::fonkbtn0()
{
    fonkSifirla();
    if(islemSirasi==true)
    {
        if(islemVar==true)
        {
            ui->ekran->setText("");
            islemVar=false;
        }
        if(ui->ekran->text()=="")
        {
            ui->ekran->setText("0");
            sifirVar=true;
        }
        else if(sifirVar==false)
        {
            onceki=ui->ekran->text();
            onceki.append("0");
            ui->ekran->setText(onceki);
        }
        ikiliIslem=false;
    }
    else if(islemOnceligi==true)
    {
        fonkbtn("0");
    }
}

void ehm::fonkParantezAc()
{
    fonkIslemPro("parantezAc","(",mevcutParantez);
    parantezAcSayac=parantezAcSayac+1;
    parantezVar=true;
}

void ehm::fonkParantezKapa()
{
    fonkIslemPro("parantezKapa",")",mevcutParantez);
    parantezKapaSayac=parantezKapaSayac+1;
}

void ehm::fonkVirgul()
{
    if(islemSirasi==true)
    {
        if(virgulVar==false && sonucKS=="0")
        {
            islemVar=false;
            if(ui->ekran->text()=="")
            {
                ui->ekran->setText("0.");
                virgulVar=true;
            }
            else
            {
                onceki=ui->ekran->text();
                onceki.append(".");
                ui->ekran->setText(onceki);
                virgulVar=true;
            }
        }
        sifirVar=false;
    }
    else if(islemOnceligi==true)
    {
        if(ui->ekran->text()=="")
        {
            ui->ekran->setText("0.");
            virgulVar=true;
        }
        if(virgulVar==false)
        {
            onceki= ui->ekran->text();
            onceki.append(".");
            ui->ekran->setText(onceki);
            virgulVar=true;
        }
    }

}

void ehm::fonkVirgulKontrol()
{
    sonucK=sonuc;
    sonucK=sonucK*10;
    sonucKS=QString::number(sonucK);
    int size=sonucKS.size();
    sonucKS.remove(0,size-1);
}

void ehm::fonkTemizle()
{
    ui->ekran->setText("");
    ui->textGecmis->insertPlainText("\n");
    satirSayac=satirSayac-1;
    fonkSifirla();
    satirIlkSayi=true;
    sifirVar=false;
    virgulVar=false;
    islemVar=false;
    ilkSayi=true;
    geciciSayi1="0";
    geciciSayi2="0";
    geciciSonuc=0;
    kokVar=false;
    esittirVar=false;
    hataVar=false;
    ikiliIslem=false;
    sayi2=0;
    sayi1=0;
    sonuc=0;
    sonucK=0;
    sonucKS="0";
    oncekiDouble=0;
    tri=0;
    geciciSonuc=0;
}

void ehm::fonkIslemPro(QString islemAdi,QString islemIsareti,bool mevcutIslem)
{
    if(islemSirasi==true)
    {
        if(mevcutIslem==false)
        {
            fonkEsittir();
            if(satirIlkSayi==true)
            {
                ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+ui->ekran->text());
                satirIlkSayi=false;
                satirSayac=satirSayac+1;
            }
            else
            {
                ui->textGecmis->insertPlainText(ui->ekran->text());
            }
            if(islem!=islemAdi)
            {
                ilkSayi=true;
            }
            if(islemAdi=="mod")
            {
                onceki=ui->ekran->text();
                onceki.append("mod");
                ui->ekran->setText(onceki);
                ui->textGecmis->insertPlainText(" mod ");
            }
            else
            {
                ui->textGecmis->insertPlainText(" "+islemIsareti+" ");
            }
            islem=islemAdi;
            islemVar=true;
            fonkIslem();
            mevcutIslem=true;
            mevcutEsittir=true;
            ikiliIslem=true;
            sonucKS="0";
        }
    }
    else if(islemOnceligi==true)
    {
        if(carpanAyirVar==true)
        {
            QString text;
            text=ui->ekran->text();
            text.replace(oncekiCarpanAyir,QString::number(oncekiSayi));
            ui->ekran->setText(text);
            carpanAyirVar=false;
        }
        onceki= ui->ekran->text();
        if(islemIsareti=="]")
        {
            onceki.append("sin");
        }
        else if(islemIsareti=="[")
        {
            onceki.append("cos");
        }
        else if(islemIsareti=="}")
        {
            onceki.append("tan");
        }
        else if(islemIsareti=="{")
        {
            onceki.append("cot");
        }
        else if(islemIsareti=="?")
        {
            onceki.append("arcsin");
        }
        else if(islemIsareti=="&")
        {
            onceki.append("arccos");
        }
        else if(islemIsareti=="<")
        {
            onceki.append("arctan");
        }
        else if(islemIsareti==">")
        {
            onceki.append("arccot");
        }
        else if(islemIsareti=="e")
        {
            onceki.append("sinh");
        }
        else if(islemIsareti=="r")
        {
            onceki.append("cosh");
        }
        else if(islemIsareti=="t")
        {
            onceki.append("tanh");
        }
        else if(islemIsareti=="y")
        {
            onceki.append("coth");
        }
        else if(islemIsareti=="|")
        {
            if(ui->cbLog->currentText()=="ln")
            {
                onceki.append("ln");
            }
            else
            {
                onceki.append("log");
            }
        }
        else if(islemIsareti=="*")
        {
            onceki.append("mod");
        }
        else
        {
            onceki.append(islemIsareti);
        }
        DiziIslemisareti.append(islemIsareti);
        ui->ekran->setText(onceki);
        islemSayac=islemSayac+1;
        fonkSifirla();
    }
}

void ehm::fonkToplama()
{
    fonkIslemPro("toplama","+",mevcutToplama);
    virgulVar=false;
}

void ehm::fonkCikarma()
{
    fonkIslemPro("cikarma","-",mevcutCikarma);
    virgulVar=false;
}

void ehm::fonkCarpma()
{
    fonkIslemPro("carpma","x",mevcutCarpma);
    virgulVar=false;
}

void ehm::fonkBolme()
{
    fonkIslemPro("bolme","/",mevcutBolme);
    virgulVar=false;
}

void ehm::fonkUs()
{
    fonkIslemPro("us","^",mevcutUs);
}

void ehm::fonkIslem()
{
    if(islemSirasi==true)
    {
        if(ilkSayi==true)
        {
                sayi1=ui->ekran->text().toDouble();
                ilkSayi=false;
        }
        else
        {
            if(carpanAyirVar==true)
            {
                if(virgulVar==true)
                {
                    qDebug("hata");
                }
                else
                {
                    sayi1=oncekiSayi;
                    carpanAyirVar=false;
                }
            }
            sayi2=ui->ekran->text().toDouble();
            if(islem=="toplama")
            {
                sonuc=sayi1+sayi2;
            }
            else if(islem=="cikarma")
            {
                sonuc=sayi1-sayi2;
            }
            else if(islem=="carpma")
            {
                sonuc=sayi1*sayi2;
            }
            else if(islem=="bolme")
            {
                sonuc=sayi1/sayi2;
            }
            else if(islem=="mod")
            {
                int modSonuc=sayi1/sayi2;
                modSonuc=sayi1-(modSonuc*sayi2);
                sonuc=modSonuc;
            }
            else if(islem=="us")
            {
                    double usSonuc=1;
                    int usSayac=sayi2;
                    for(;usSayac>0;usSayac=usSayac-1)
                    {
                        usSonuc=usSonuc*sayi1;
                    }
                    sonuc=usSonuc;
                    fonkVirgulKontrol();
                    ui->ekran->setText(QString::number(sonuc));
                    sayi1=sonuc;
                    ui->textGecmis->insertPlainText(QString::number(sayi2)+"= "+QString::number(sonuc)+"\n");
                    satirIlkSayi=true;
            }
            if(islem!="us")
            {
                fonkVirgulKontrol();
                ui->ekran->setText(QString::number(sonuc));
                sayi1=sonuc;
                ui->textGecmis->insertPlainText(QString::number(sayi2)+"= "+QString::number(sonuc)+"\n");
                satirIlkSayi=true;
            }
        }
    }
    else if(islemOnceligi==true)
    {
        if(parantezAcSayac!=parantezKapaSayac)
        {
            qDebug("hata");
        }
        else
        {
            yedektext=ui->ekran->text();
            ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+yedektext);
            for(int trisayac=0;trisayac<yedektext.size();trisayac++)
            {
                yedektext.replace(QString("arcsin"),QString("?"));
                yedektext.replace(QString("arccos"),QString("&"));
                yedektext.replace(QString("arctan"),QString("<"));
                yedektext.replace(QString("arccot"),QString(">"));
                yedektext.replace(QString("sinh"),QString("e"));
                yedektext.replace(QString("cosh"),QString("r"));
                yedektext.replace(QString("tanh"),QString("t"));
                yedektext.replace(QString("coth"),QString("y"));
                yedektext.replace(QString("sin"),QString("]"));
                yedektext.replace(QString("cos"),QString("["));
                yedektext.replace(QString("tan"),QString("}"));
                yedektext.replace(QString("cot"),QString("{"));
                yedektext.replace(QString("log"),QString("|"));
                yedektext.replace(QString("ln"),QString("|"));
                yedektext.replace(QString("mod"),QString("*"));
            }
            yedektextBas=yedektext;
            yedektextSon=yedektext;
            int Sayac=0;
            while(Sayac<islemSayac)
            {
                int size=yedektext.size();
                yer=yedektext.indexOf(DiziIslemisareti.value(Sayac));
                diziyeIsaret=yedektext.at(yer);
                yedektextBas.remove(yer,size-1);
                yedektextSon.remove(0,yer+1);
                Dizi.append(yedektextBas);
                Dizi.append(diziyeIsaret);
                yedektext=yedektextSon;
                yedektextBas=yedektextSon;
                Sayac=Sayac+1;
            }
            int yerEsittir=yedektextSon.indexOf("=");
            yedektextSon.remove(yerEsittir,yerEsittir);
            Dizi.append(yedektextSon);
            Dizi.append("=");
            if(parantezVar==true)
            {
                while(Dizi.contains(")")==true)
                {
                    int parantezAcYer=Dizi.lastIndexOf("(");
                    int parantezKapaYer=Dizi.indexOf(")",parantezAcYer);
                    for(int kopyaSayac=parantezAcYer+1;kopyaSayac<=parantezKapaYer;kopyaSayac++)
                    {
                        DiziParantez.append(Dizi.value(kopyaSayac));
                    }
                    fonkIslem2(DiziParantez,")");
                    Dizi.replace(parantezAcYer,QString::number(sonuc));
                    for(int i=parantezAcYer+1;i<=parantezKapaYer;i++)
                    {
                        int i2=parantezAcYer+1;
                        Dizi.removeAt(i2);
                    }
                    if(Dizi.value(parantezAcYer-1)=="=")
                    {
                        Dizi.removeAt(parantezAcYer-1);
                        Dizi.removeAt(parantezAcYer);
                    }
                    DiziParantez.clear();
                }
                parantezVar=false;
            }
            fonkIslem2(Dizi,"=");
        }
    }
}

void ehm::fonkIslem2(QStringList &diziPro,QString isaret)
{
    if(sinVar==true)
    {
        fonkTrigIslemIO(diziPro,sinVar,"sin","]");
    }
    if(cosVar==true)
    {
        fonkTrigIslemIO(diziPro,cosVar,"cos","[");
    }
    if(tanVar==true)
    {
        fonkTrigIslemIO(diziPro,tanVar,"tan","}");
    }
    if(cotVar==true)
    {
        fonkTrigIslemIO(diziPro,cotVar,"cot","{");
    }
    if(arcsinVar==true)
    {
        fonkTrigIslemIO(diziPro,arcsinVar,"asin","?");
    }
    if(arccosVar==true)
    {
        fonkTrigIslemIO(diziPro,arccosVar,"acos","&");
    }
    if(arctanVar==true)
    {
        fonkTrigIslemIO(diziPro,arctanVar,"atan","<");
    }
    if(arccotVar==true)
    {
        fonkTrigIslemIO(diziPro,arccotVar,"acot",">");
    }
    if(sinhVar==true)
    {
        fonkTrigIslemIO(diziPro,sinhVar,"sinh","e");
    }
    if(coshVar==true)
    {
        fonkTrigIslemIO(diziPro,coshVar,"cosh","r");
    }
    if(tanhVar==true)
    {
        fonkTrigIslemIO(diziPro,tanhVar,"tanh","t");
    }
    if(cothVar==true)
    {
        fonkTrigIslemIO(diziPro,cothVar,"coth","y");
    }
    if(modVar==true)
    {
        int modYer=diziPro.indexOf("*");
        QString chMod=diziPro.value(modYer-1);
        if(chMod=="=")
        {
            qDebug("hata");
        }
        else
        {
            QString modSayi=diziPro.value(modYer+1);
            double modSayiDouble=modSayi.toDouble();
            double chModDouble=chMod.toDouble();
            int modSonuc=chModDouble/modSayiDouble;
            modSonuc=chModDouble-(modSonuc*modSayiDouble);
            geciciSonuc=modSonuc;
        }
        fonkYerDegistir(diziPro,modYer,geciciSonuc);
        modVar=false;
    }
    if(yuzdeVar==true)
    {
        int yuzdeYer=diziPro.indexOf("%");
        QString chYuzde=diziPro.value(yuzdeYer-1);
        if(chYuzde=="=")
        {
            qDebug("hata");
        }
        else
        {
            geciciSonuc=chYuzde.toDouble()/100;
            fonkYerDegistir(diziPro,yuzdeYer,geciciSonuc);
        }
        yuzdeVar=false;
    }
    if(logVar==true)
    {
        int logYer=diziPro.indexOf("|");
        QString chlog=diziPro.value(logYer-1);
        if(chlog=="=")
        {
            QString logsayi=diziPro.value(logYer+1);
            double logsayidouble=logsayi.toDouble();
            if(ui->cbLog->currentText()=="log2")
            {
                geciciSonuc=log2(logsayidouble);
            }
            else if(ui->cbLog->currentText()=="log10")
            {
                geciciSonuc=log10(logsayidouble);
            }
            else if(ui->cbLog->currentText()=="ln")
            {
                geciciSonuc=log(logsayidouble);
            }
        }
        else
        {
            QString logsayi=diziPro.value(logYer+1);
            double logsayidouble=logsayi.toDouble();
            if(ui->cbLog->currentText()=="log2")
            {
                geciciSonuc=log2(logsayidouble);
                geciciSonuc=geciciSonuc*chlog.toDouble();
            }
            else if(ui->cbLog->currentText()=="log10")
            {
                geciciSonuc=log10(logsayidouble);
                geciciSonuc=geciciSonuc*chlog.toDouble();
            }
            else if(ui->cbLog->currentText()=="ln")
            {
                geciciSonuc=log(logsayidouble);
                geciciSonuc=geciciSonuc*chlog.toDouble();
            }
        }
        fonkYerDegistir(diziPro,logYer,geciciSonuc);
        logVar=false;
    }
    if(faktVar==true)
    {
        while(diziPro.contains("!")==true)
        {
            int yerFakt=diziPro.indexOf("!");
            diziPro.removeAt(yerFakt+1);
            geciciSayi1=diziPro.value(yerFakt-1);
            int fakt=1;
            double faktSayac=geciciSayi1.toDouble();
            while(faktSayac>0)
            {
                fakt=fakt*faktSayac;
                faktSayac=faktSayac-1;
            }
            geciciSonuc=fakt;
            diziPro.replace(yerFakt-1,QString::number(geciciSonuc));
            diziPro.removeAt(yerFakt);
        }
        faktVar=false;
    }
    if(kokVar==true)
    {
        for(int koksayac=0;koksayac<diziPro.size();koksayac++)
        {
            QString kokkontrol=diziPro.value(koksayac);
            if(kokkontrol.contains(QChar(0x221A))==true)
            {
                int yerkok=kokkontrol.indexOf(QChar(0x221A));
                QString DiziKokBas=diziPro.value(koksayac);
                QString DiziKokSon=diziPro.value(koksayac);
                if(DiziKokBas.indexOf(QChar(0x221A))==true)
                {
                    int kokkontrolsize=kokkontrol.size();
                    DiziKokBas.remove(yerkok,kokkontrolsize-1);
                    DiziKokSon.remove(0,yerkok+1);
                    geciciSonuc=sqrt(DiziKokSon.toDouble());
                    geciciSonuc=geciciSonuc*DiziKokBas.toDouble();
                }
                else
                {
                    DiziKokSon.remove(0,yerkok+1);
                    geciciSonuc=sqrt(DiziKokSon.toDouble());
                }
                diziPro.replace(koksayac,QString::number(geciciSonuc));
            }
        }
        kokVar=false;
    }
    while(diziPro.lastIndexOf("^")!=-1)
    {
        int usYer=diziPro.lastIndexOf("^");
        geciciSayi1=diziPro.value(usYer-1);
        geciciSayi2=diziPro.value(usYer+1);
        double usSonuc=1;
        int usSayac=geciciSayi2.toDouble();
        for(;usSayac>0;usSayac=usSayac-1)
        {
            usSonuc=usSonuc*geciciSayi1.toDouble();
        }
        geciciSonuc=usSonuc;
        diziPro.replace(usYer,QString::number(geciciSonuc));
        diziPro.removeAt(usYer-1);
        diziPro.removeAt(usYer);
    }
    DiziSayac=0;
    while(diziPro.value(DiziSayac)!=isaret)
    {
        if(diziPro.value(DiziSayac)=="x"||diziPro.value(DiziSayac)=="/")
        {
            if(diziPro.value(DiziSayac)=="x")
            {
                geciciSayi1=diziPro.value(DiziSayac-1);
                geciciSayi2=diziPro.value(DiziSayac+1);
                geciciSonuc=geciciSayi1.toDouble()*geciciSayi2.toDouble();
                diziPro.replace(DiziSayac,QString::number(geciciSonuc));
                diziPro.removeAt(DiziSayac-1);
                diziPro.removeAt(DiziSayac);
                DiziSayac=DiziSayac-1;
            }
            else if(diziPro.value(DiziSayac)=="/")
            {
                geciciSayi1=diziPro.value(DiziSayac-1);
                geciciSayi2=diziPro.value(DiziSayac+1);
                geciciSonuc=geciciSayi1.toDouble()/geciciSayi2.toDouble();
                diziPro.replace(DiziSayac,QString::number(geciciSonuc));
                diziPro.removeAt(DiziSayac-1);
                diziPro.removeAt(DiziSayac);
                DiziSayac=DiziSayac-1;
            }
        }
        DiziSayac=DiziSayac+1;
    }
    DiziSayac=0;
    while(diziPro.value(DiziSayac)!=isaret)
    {
        if(diziPro.value(DiziSayac)=="+"||diziPro.value(DiziSayac)=="-")
        {
            if(diziPro.value(DiziSayac)=="+")
            {
                geciciSayi1=diziPro.value(DiziSayac-1);
                geciciSayi2=diziPro.value(DiziSayac+1);
                geciciSonuc=geciciSayi1.toDouble()+geciciSayi2.toDouble();
                diziPro.replace(DiziSayac,QString::number(geciciSonuc));
                diziPro.removeAt(DiziSayac-1);
                diziPro.removeAt(DiziSayac);
                DiziSayac=DiziSayac-1;
            }
            else if(diziPro.value(DiziSayac)=="-")
            {
                geciciSayi1=diziPro.value(DiziSayac-1);
                geciciSayi2=diziPro.value(DiziSayac+1);
                geciciSonuc=geciciSayi1.toDouble()-geciciSayi2.toDouble();
                diziPro.replace(DiziSayac,QString::number(geciciSonuc));
                diziPro.removeAt(DiziSayac-1);
                diziPro.removeAt(DiziSayac);
                DiziSayac=DiziSayac-1;
            }
        }
        DiziSayac=DiziSayac+1;
    }
    sonuc=geciciSonuc;
    ui->ekran->setText(QString::number(sonuc));
    if(parantezVar==false)
    {
        ui->textGecmis->insertPlainText(" "+QString::number(sonuc)+"\n");
    }
    satirSayac=satirSayac+1;
    islemSayac=0;
    DiziIslemisareti.clear();
    if(isaret=="=")
    {
        diziPro.clear();
    }
}

void ehm::fonkYerDegistir(QStringList &diziPro,int islemYer,double gSonuc)
{
    diziPro.replace(islemYer,QString::number(gSonuc));
    diziPro.removeAt(islemYer-1);
    diziPro.removeAt(islemYer);
}

void ehm::fonkTrigIslemIS(QString islem)
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            oncekiDouble=ui->ekran->text().toDouble();
            tri=oncekiDouble;
            if(ui->cbTri->currentText()=="derece")
            {
                oncekiDouble=(oncekiDouble*pi)/180;
            }
            else if(ui->cbTri->currentText()=="radyan"){}
            else if(ui->cbTri->currentText()=="grad")
            {
                oncekiDouble=(oncekiDouble*pi)/200;
            }
            if(islem=="sin")
            {
                sonuc=sin(oncekiDouble);
            }
            if(islem=="cos")
            {
                sonuc=cos(oncekiDouble);
            }
            if(islem=="tan")
            {
                sonuc=tan(oncekiDouble);
            }
            if(islem=="cot")
            {
                sonuc=tan(oncekiDouble);
                sonuc=1/geciciSonuc;
            }
            if(islem=="asin")
            {
                sonuc=asin(oncekiDouble);
            }
            if(islem=="acos")
            {
                sonuc=acos(oncekiDouble);
            }
            if(islem=="atan")
            {
                sonuc=atan(oncekiDouble);
            }
            if(islem=="acot")
            {
                sonuc=atan(oncekiDouble);
                sonuc=1/sonuc;
            }
            if(islem=="sinh")
            {
                sonuc=sinh(oncekiDouble);
            }
            if(islem=="cosh")
            {
                sonuc=cosh(oncekiDouble);
            }
            if(islem=="tanh")
            {
                sonuc=tanh(oncekiDouble);
            }
            if(islem=="coth")
            {
                sonuc=tanh(oncekiDouble);
                sonuc=1/sonuc;
            }
            ui->ekran->setText(QString::number(sonuc));
            ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+islem+" ("+QString::number(tri)+") = "+QString::number(sonuc)+"\n");
            islemVar=true;
            satirSayac=satirSayac+1;
        }
    }
}

void ehm::fonkTrigIslemIO(QStringList &diziPro,bool &trigVar,QString islem,QString islemIsareti)
{
    if(islemOnceligi==true)
    {
        if(trigVar==true)
        {
            do
            {
                int trigYer=diziPro.indexOf(islemIsareti);
                QString chtrig=diziPro.value(trigYer-1);
                if(chtrig=="=")
                {
                    QString trigsayi=diziPro.value(trigYer+1);
                    double trigsayidouble=trigsayi.toDouble();
                    if(islem=="sin"||islem=="cos"||islem=="tan"||islem=="cot")
                    {
                        fonkDonusum(1,trigsayidouble);
                        if(islem=="sin")
                        {
                            geciciSonuc=sin(trigsayidouble);
                        }
                        if(islem=="cos")
                        {
                            geciciSonuc=cos(trigsayidouble);
                        }
                        if(islem=="tan")
                        {
                            geciciSonuc=tan(trigsayidouble);
                        }
                        if(islem=="cot")
                        {
                            geciciSonuc=tan(trigsayidouble);
                            geciciSonuc=1/geciciSonuc;
                        }
                    }
                    else
                    {
                        if(islem=="asin")
                        {
                            geciciSonuc=asin(trigsayidouble);
                        }
                        if(islem=="acos")
                        {
                            geciciSonuc=acos(trigsayidouble);
                        }
                        if(islem=="atan")
                        {
                            geciciSonuc=atan(trigsayidouble);
                        }
                        if(islem=="acot")
                        {
                            geciciSonuc=atan(trigsayidouble);
                            geciciSonuc=1/geciciSonuc;
                        }
                        if(islem=="sinh")
                        {
                            geciciSonuc=sinh(trigsayidouble);
                        }
                        if(islem=="cosh")
                        {
                            geciciSonuc=cosh(trigsayidouble);
                        }
                        if(islem=="tanh")
                        {
                            geciciSonuc=tanh(trigsayidouble);
                        }
                        if(islem=="coth")
                        {
                            geciciSonuc=tanh(trigsayidouble);
                            geciciSonuc=1/geciciSonuc;
                        }

                        fonkDonusum(2,geciciSonuc);
                    }
                    diziPro.replace(trigYer,QString::number(geciciSonuc));
                    diziPro.removeAt(trigYer-1);
                    diziPro.removeAt(trigYer);
                }
                else
                {
                    QString trigsayi=diziPro.value(trigYer+1);
                    QString trigcarpan=diziPro.value(trigYer-1);
                    double trigsayidouble=trigsayi.toDouble();

                    if(islem=="sin"||islem=="cos"||islem=="tan"||islem=="cot")
                    {
                        fonkDonusum(1,trigsayidouble);
                        if(islem=="sin")
                        {
                            geciciSonuc=sin(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="cos")
                        {
                            geciciSonuc=cos(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="tan")
                        {
                            geciciSonuc=tan(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="cot")
                        {
                            geciciSonuc=tan(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                            geciciSonuc=1/geciciSonuc;
                        }
                    }
                    else
                    {
                        if(islem=="asin")
                        {
                            geciciSonuc=asin(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="acos")
                        {
                            geciciSonuc=acos(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="atan")
                        {
                            geciciSonuc=atan(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="acot")
                        {
                            geciciSonuc=atan(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                            geciciSonuc=1/geciciSonuc;
                        }
                        if(islem=="sinh")
                        {
                            geciciSonuc=sinh(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="cosh")
                        {
                            geciciSonuc=cosh(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="tanh")
                        {
                            geciciSonuc=tanh(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                        }
                        if(islem=="coth")
                        {
                            geciciSonuc=tanh(trigsayidouble);
                            geciciSonuc=geciciSonuc*trigcarpan.toDouble();
                            geciciSonuc=1/geciciSonuc;
                        }
                        fonkDonusum(2,geciciSonuc);
                    }
                    diziPro.replace(trigYer,QString::number(geciciSonuc));
                    diziPro.removeAt(trigYer-1);
                    diziPro.removeAt(trigYer);
                }
            }while(diziPro.contains(islemIsareti));
            trigVar=false;
        }
    }
}

void ehm::fonkDonusum(int tur,double trigSayi)
{
    if(tur==1)
    {
        if(ui->cbTri->currentText()=="derece")
        {
            trigSayi=(trigSayi*pi)/180;
        }
        else if(ui->cbTri->currentText()=="radyan"){}
        else if(ui->cbTri->currentText()=="grad")
        {
            trigSayi=(trigSayi*pi)/200;
        }
    }
    else if(tur==2)
    {
        if(ui->cbTri->currentText()=="derece")
        {
           trigSayi=(trigSayi/pi)*180;
        }
        else if(ui->cbTri->currentText()=="radyan"){}
        else if(ui->cbTri->currentText()=="grad")
        {
            trigSayi=(trigSayi/pi)*200;
        }
    }

}

void ehm::fonkCarpanAyir()
{
    QString oncekiCA;
    if(virgulVar==true)
    {
        qDebug("hata");
        ui->ekran->setText("");
    }
    else
    {
        carpanAyirVar=true;
        int asalSayi=2;
        int sayi=ui->ekran->text().toInt();
        oncekiSayi=sayi;
        while(asalSayi<=sayi)
        {
            bool asalSayiBool=true;
            devam=true;
            for(int asalSayac=2;asalSayac<=asalSayi/2;asalSayac++)
            {
                if(asalSayi%asalSayac==0)
                {
                    asalSayiBool=false;
                    asalSayac=asalSayi;
                }
            }
            if(asalSayiBool==true)
            {
                while(devam)
                {
                    if(sayi%asalSayi==0)
                    {
                        sayi=sayi/asalSayi;
                        DiziCarpanAyir.append(QString::number(asalSayi));
                    }
                    else
                    {
                        devam=false;
                    }
                }
            }
            asalSayi=asalSayi+1;
        }
        int DiziCarpanAyirSize=DiziCarpanAyir.size();
        for(int a=0;a<DiziCarpanAyirSize;a++)
        {
            oncekiCA.append(DiziCarpanAyir.value(a));
            if(a!=DiziCarpanAyirSize-1)
            oncekiCA.append("x");
            ui->ekran->setText("");
        }
        ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+QString::number(oncekiSayi)+"= "+oncekiCA+"\n");
        satirSayac=satirSayac+1;
        ui->ekran->setText(oncekiCA);
        oncekiCarpanAyir=oncekiCA;
        DiziCarpanAyir.clear();
    }
}

void ehm::fonkEsittir()
{
    if(islemSirasi==true)
    {
        if(mevcutEsittir==false)
        {
            fonkIslem();
            ikiliIslem=false;
            islemVar=true;
            virgulVar=false;
            ilkSayi=true;
            islem="";
        }
    }
    else if(islemOnceligi==true)
    {
        mevcutEsittir=true;
        onceki= ui->ekran->text();
        onceki.append("=");
        ui->ekran->setText(onceki);
        fonkIslem();
    }
}

void ehm::fonkGeriAl()
{
    if(islemSirasi==true)
    {
        if(islemVar==true)
        {
            islemVar=false;
            islem="";
        }
        else
        {
            silinecek=ui->ekran->text();
            QString silinecekK=silinecek;
            int silinecekKS=silinecekK.size();
            silinecekK.remove(0,silinecekKS-1);
            if(silinecekK==".")
            {
                virgulVar=false;
            }
            silinecek.chop(1);
            ui->ekran->setText(silinecek);
        }
    }
    else if(islemOnceligi==true)
    {
        silinecek=ui->ekran->text();
        silinecek.chop(1);
        ui->ekran->setText(silinecek);
    }
}

void ehm::fonkIsaret()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            oncekiDouble=ui->ekran->text().toDouble();
            if(oncekiDouble>0)
            {
                onceki=ui->ekran->text();
                onceki="-"+ onceki;
                ui->ekran->setText(onceki);
            }
            else if(oncekiDouble<0)
            {
                onceki=ui->ekran->text();
                onceki.remove(0,1);
                ui->ekran->setText(onceki);
            }
        }
    }
}

void ehm::fonkKarekok()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            oncekiDouble=ui->ekran->text().toDouble();
            ui->ekran->setText(QString::number(sqrt(oncekiDouble)));
            ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+QChar(0x221A)+QString::number(oncekiDouble)+" = "+QString::number(sqrt(oncekiDouble))+"\n");
            satirSayac=satirSayac+1;
            islemVar=true;
        }
    }
    else if(islemOnceligi==true)
    {
        onceki= ui->ekran->text();
        onceki.append(QChar(0x221A));
        ui->ekran->setText(onceki);
        kokVar=true;
        fonkSifirla();
    }
}

void ehm::fonkYuzde()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            oncekiDouble=ui->ekran->text().toDouble();
            ui->ekran->setText(QString::number(oncekiDouble/100));
            ui->textGecmis->insertPlainText("% "+QString::number(oncekiDouble)+" = "+QString::number(oncekiDouble/100)+"\n");
            islemVar=true;
        }
    }
    if(islemOnceligi==true)
    {
        yuzdeVar=true;
        fonkIslemPro("yuzde","%",mevcutYuzde);
    }
}

void ehm::fonk1bolu()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            oncekiDouble=ui->ekran->text().toDouble();
            ui->ekran->setText(QString::number(1/oncekiDouble));
            ui->textGecmis->insertPlainText(QString::number(satirSayac)+"-> 1 / "+QString::number(oncekiDouble)+" = "+QString::number(1/oncekiDouble)+"\n");
            satirSayac=satirSayac+1;
            islemVar=true;
        }
    }
}

void ehm::fonkFakt()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            int fakt=1;
            fonkEsittir();
            oncekiDouble=ui->ekran->text().toDouble();
            double faktSayac=oncekiDouble;
            while(faktSayac>0)
            {
                fakt=fakt*faktSayac;
                faktSayac=faktSayac-1;
            }
            ui->ekran->setText(QString::number(fakt));
            ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> "+QString::number(oncekiDouble)+" ! ="+QString::number(fakt)+"\n");
            satirSayac=satirSayac+1;
        }
    }
    else if(islemOnceligi==true)
    {
        fonkIslemPro("fakt","!",mevcutFakt);
        faktVar=true;
    }
}

void ehm::fonkSin()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("sin");
    }
    if(islemOnceligi==true)
    {
        sinVar=true;
        fonkIslemPro("sin","]",mevcutSin);
    }
}

void ehm::fonkCos()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("cos");
    }
    else if(islemOnceligi==true)
    {
        cosVar=true;
        fonkIslemPro("cos","[",mevcutCos);
    }
}

void ehm::fonkTan()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("tan");
    }
    else if(islemOnceligi==true)
    {
        tanVar=true;
        fonkIslemPro("tan","}",mevcutTan);
    }
}

void ehm::fonkCot()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("cot");
    }
    else if(islemOnceligi==true)
    {
        cotVar=true;
        fonkIslemPro("cot","{",mevcutCot);
    }
}

void ehm::fonkArcsin()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("asin");
    }
    else if(islemOnceligi==true)
    {
        arcsinVar=true;
        fonkIslemPro("asin","?",mevcutArcsin);
    }
}

void ehm::fonkArccos()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("acos");
    }
    else if(islemOnceligi==true)
    {
        arccosVar=true;
        fonkIslemPro("acos","&",mevcutArccos);
    }
}

void ehm::fonkArctan()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("atan");
    }
    else if(islemOnceligi==true)
    {
        arctanVar=true;
        fonkIslemPro("atan","<",mevcutArctan);
    }
}

void ehm::fonkArccot()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("acot");
    }
    else if(islemOnceligi==true)
    {
        arccotVar=true;
        fonkIslemPro("acot",">",mevcutArccot);
    }
}

void ehm::fonkSinh()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("sinh");
    }
    else if(islemOnceligi==true)
    {
        sinhVar=true;
        fonkIslemPro("sinh","e",mevcutSinh);
    }
}

void ehm::fonkCosh()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("cosh");
    }
    else if(islemOnceligi==true)
    {
        coshVar=true;
        fonkIslemPro("cosh","r",mevcutCosh);
    }
}

void ehm::fonkTanh()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("tanh");
    }
    else if(islemOnceligi==true)
    {
        tanhVar=true;
        fonkIslemPro("tanh","t",mevcutCosh);
    }
}

void ehm::fonkCoth()
{
    if(islemSirasi==true)
    {
        fonkTrigIslemIS("coth");
    }
    else if(islemOnceligi==true)
    {
        cothVar=true;
        fonkIslemPro("coth","y",mevcutCoth);
    }
}

void ehm::fonkPi()
{
    if(islemSirasi==true)
    {
        fonkSifirla();
        if(islemVar==true)
        {
            ui->ekran->setText("");
            islemVar=false;
        }
        ui->ekran->setText(QString::number(pi));
    }
    if(islemOnceligi==true)
    {
        fonkbtn(QString::number(pi));
    }
}

void ehm::fonkE()
{
    if(islemSirasi==true)
    {
        fonkSifirla();
        if(islemVar==true)
        {
            ui->ekran->setText("");
            islemVar=false;
        }
        ui->ekran->setText(QString::number(e));
    }
    if(islemOnceligi==true)
    {
        fonkbtn(QString::number(e));
    }
}

void ehm::fonkLog()
{
    if(islemSirasi==true)
    {
        if(ikiliIslem==true)
        {
            qDebug("hata");
        }
        else
        {
            islemVar=true;
            oncekiDouble=ui->ekran->text().toDouble();
            if(ui->cbLog->currentText()=="log2")
            {
                sonuc=log2(oncekiDouble);
                ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> log2 ("+QString::number(oncekiDouble)+") = "+QString::number(sonuc)+"\n");
            }
            else  if(ui->cbLog->currentText()=="log10")
            {
                sonuc=log10(oncekiDouble);
                ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> log ("+QString::number(oncekiDouble)+") = "+QString::number(sonuc)+"\n");
            }
            else if(ui->cbLog->currentText()=="ln")
            {
                sonuc=log(oncekiDouble);
                ui->textGecmis->insertPlainText(QString::number(satirSayac)+" -> ln ("+QString::number(oncekiDouble)+") = "+QString::number(sonuc)+"\n");
            }
            ui->ekran->setText(QString::number(sonuc));
        }
    }
    if(islemOnceligi==true)
    {
        logVar=true;
        fonkIslemPro("log","|",mevcutLog);
    }
}

void ehm::fonkMod()
{
    modVar=true;
    fonkIslemPro("mod","*",mevcutMod);
}

ehm::~ehm()
{
    delete ui;
}
