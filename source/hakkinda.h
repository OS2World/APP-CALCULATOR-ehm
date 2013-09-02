#ifndef HAKKINDA_H
#define HAKKINDA_H

#include <QWidget>

namespace Ui {
    class hakkinda;
}

class hakkinda : public QWidget
{
    Q_OBJECT

public:
    explicit hakkinda(QWidget *parent = 0);
    ~hakkinda();
    QString surum;

public slots:
    void fonkbtnTamam();

private:
    Ui::hakkinda *ui;
};

#endif // HAKKINDA_H
