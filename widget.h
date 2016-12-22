#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <unistd.h>


namespace Ui {
class Widget;
}

class wint
{
    int i;
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    void refresh();
    void refresh2();
    void refresh3();
    void refresh4();
    void init();
    double getans();
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_progressBar_valueChanged(int value);

    void on_pushButton_2_clicked();

    void on_progressBar_2_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_progressBar_3_valueChanged(int value);

    void on_pushButton_4_clicked();

    void on_progressBar_4_valueChanged(int value);

private:
    Ui::Widget *ui;
    int pass;
};

#endif // WIDGET_H
