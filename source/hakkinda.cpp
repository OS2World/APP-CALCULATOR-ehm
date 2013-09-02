#include "hakkinda.h"
#include "ui_hakkinda.h"

hakkinda::hakkinda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hakkinda)
{
    surum="ehm 0.6";
    ui->setupUi(this);
    connect(ui->btnTamam,SIGNAL(clicked()),this,SLOT(fonkbtnTamam()));
    ui->lblHakkinda->setText("emre'nin hesap makinesi\n"+surum);
}

void hakkinda::fonkbtnTamam()
{
    close();
}

hakkinda::~hakkinda()
{
    delete ui;
}
