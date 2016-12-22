#include "widget.h"
#include "ui_widget.h"

#include <stdio.h>
#include <string>
#include <stdlib.h>

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QGraphicsView>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

QT_CHARTS_USE_NAMESPACE

double ranread[3][3]={0};
int crr=0;

double ranwrite[3][3]={0};
int crw=0;

double seqread[3][3]={0};
int csr=0;

double seqwrite[3][3]={0};
int csw=0;

char *ctpath= new char;

void Widget::refresh(){

//    No static here!
    QBarSet *set0 = new QBarSet("HMFS");
    QBarSet *set1 = new QBarSet("EXT4 on RAMDisk");
    QBarSet *set2 = new QBarSet("EXT4 on SSD");

    *set0 << ranread[0][0] << ranread[1][0] << ranread[2][0];
    *set1 << ranread[0][1] << ranread[1][1] << ranread[2][1];
    *set2 << ranread[0][2] << ranread[1][2] << ranread[2][2];

//    printf("drrr%f\n",ranread[0][0]);
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("随机读操作性能(mb/s)");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    char s1[20];
    char s2[20];
    char s3[20];
    sprintf(s1,"第%d次测试",( ((crr-1)/3*3+1)>1?((crr-1)/3*3+1):1) );
    sprintf(s2,"第%d次测试",( ((crr-2)/3*3+2)>2?((crr-2)/3*3+2):2) );
    sprintf(s3,"第%d次测试",( ((crr-3)/3*3+3)>3?((crr-3)/3*3+3):3) );
    categories << s1 << s2 << s3;
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    ui->graphicsView->setChart(chart);

    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

}


void Widget::refresh2(){

    //    No static here!
        QBarSet *set0 = new QBarSet("HMFS");
        QBarSet *set1 = new QBarSet("EXT4 on RAMDisk");
        QBarSet *set2 = new QBarSet("EXT4 on SSD");

        *set0 << ranwrite[0][0] << ranwrite[1][0] << ranwrite[2][0];
        *set1 << ranwrite[0][1] << ranwrite[1][1] << ranwrite[2][1];
        *set2 << ranwrite[0][2] << ranwrite[1][2] << ranwrite[2][2];

    //    printf("drrr%f\n",ranread[0][0]);
        QBarSeries *series = new QBarSeries();
        series->append(set0);
        series->append(set1);
        series->append(set2);
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("随机写操作性能(mb/s)");
        chart->setAnimationOptions(QChart::SeriesAnimations);

        QStringList categories;
        char s1[20];
        char s2[20];
        char s3[20];
        sprintf(s1,"第%d次测试",( ((crw-1)/3*3+1)>1?((crw-1)/3*3+1):1) );
        sprintf(s2,"第%d次测试",( ((crw-2)/3*3+2)>2?((crw-2)/3*3+2):2) );
        sprintf(s3,"第%d次测试",( ((crw-3)/3*3+3)>3?((crw-3)/3*3+3):3) );
        categories << s1 << s2 << s3;
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *chartView = new QChartView(chart);

        chartView->setRenderHint(QPainter::Antialiasing);

        ui->graphicsView_2->setChart(chart);

        ui->graphicsView_2->setRenderHint(QPainter::Antialiasing);

}

void Widget::refresh3(){

//    No static here!
    QBarSet *set0 = new QBarSet("HMFS");
    QBarSet *set1 = new QBarSet("EXT4 on RAMDisk");
    QBarSet *set2 = new QBarSet("EXT4 on SSD");

    *set0 << seqread[0][0] << seqread[1][0] << seqread[2][0];
    *set1 << seqread[0][1] << seqread[1][1] << seqread[2][1];
    *set2 << seqread[0][2] << seqread[1][2] << seqread[2][2];

//    printf("drrr%f\n",ranread[0][0]);
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("顺序读操作性能(mb/s)");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    char s1[20];
    char s2[20];
    char s3[20];
    sprintf(s1,"第%d次测试",( ((csr-1)/3*3+1)>1?((csr-1)/3*3+1):1) );
    sprintf(s2,"第%d次测试",( ((csr-2)/3*3+2)>2?((csr-2)/3*3+2):2) );
    sprintf(s3,"第%d次测试",( ((csr-3)/3*3+3)>3?((csr-3)/3*3+3):3) );
    categories << s1 << s2 << s3;
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    ui->graphicsView_3->setChart(chart);

    ui->graphicsView_3->setRenderHint(QPainter::Antialiasing);

}


void Widget::refresh4(){

    //    No static here!
        QBarSet *set0 = new QBarSet("HMFS");
        QBarSet *set1 = new QBarSet("EXT4 on RAMDisk");
        QBarSet *set2 = new QBarSet("EXT4 on SSD");

        *set0 << seqwrite[0][0] << seqwrite[1][0] << seqwrite[2][0];
        *set1 << seqwrite[0][1] << seqwrite[1][1] << seqwrite[2][1];
        *set2 << seqwrite[0][2] << seqwrite[1][2] << seqwrite[2][2];

        QBarSeries *series = new QBarSeries();
        series->append(set0);
        series->append(set1);
        series->append(set2);
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("顺序写操作性能(mb/s)");
        chart->setAnimationOptions(QChart::SeriesAnimations);

        QStringList categories;
        char s1[20];
        char s2[20];
        char s3[20];
        sprintf(s1,"第%d次测试",( ((csw-1)/3*3+1)>1?((csw-1)/3*3+1):1) );
        sprintf(s2,"第%d次测试",( ((csw-2)/3*3+2)>2?((csw-2)/3*3+2):2) );
        sprintf(s3,"第%d次测试",( ((csw-3)/3*3+3)>3?((csw-3)/3*3+3):3) );
        categories << s1 << s2 << s3;
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);

        QChartView *chartView = new QChartView(chart);

        chartView->setRenderHint(QPainter::Antialiasing);

        ui->graphicsView_4->setChart(chart);

        ui->graphicsView_4->setRenderHint(QPainter::Antialiasing);

}


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
//    int i,j;
    ui->setupUi(this);
    init();
    refresh();
    refresh2();
    refresh3();
    refresh4();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::init(){
    int i,j;
    for(i=0;i<3;++i){
        for (j=0;j<3;++j){
            ranread[i][j]==0;
            ranwrite[i][j]==0;
            seqread[i][j]==0;
            seqwrite[i][j]==0;
        }
    }
    ui->progressBar->setRange(0,100);
    ui->progressBar_2->setRange(0,100);
    ui->progressBar_3->setRange(0,100);
    ui->progressBar_4->setRange(0,100);
    on_progressBar_valueChanged(0);
    on_progressBar_2_valueChanged(0);
    on_progressBar_3_valueChanged(0);
    on_progressBar_4_valueChanged(0);

    ctpath = "/home/venero/Downloads/chart_test";
}

void Widget::on_pushButton_clicked()
{
    Widget w;
    on_progressBar_valueChanged(10);
    double dd;
    char thiss[100]="";
    strcat(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomreadhmfs.sh");
    printf("aa %s\n",thiss);
    system(thiss);
    on_progressBar_valueChanged(20);
    dd=getans();
    printf("dd%f\n",dd);
    ranread[crr%3][0]=dd;
    on_progressBar_valueChanged(40);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomreadext4ram.sh");
    system(thiss);
    on_progressBar_valueChanged(50);
    dd=getans();
    printf("dd%f\n",dd);
    ranread[crr%3][1]=dd;
    on_progressBar_valueChanged(70);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomreadext4.sh");
    system(thiss);
    on_progressBar_valueChanged(80);
    dd=getans();
    printf("dd%f\n",dd);
    ranread[crr%3][2]=dd;
    on_progressBar_valueChanged(100);

    crr++;
    printf("crr%d\n",crr);

    refresh();
    ui->graphicsView->hide();
    ui->graphicsView->repaint();
    ui->graphicsView->show();
}



double Widget::getans(){
        char word[100];
        char speed[100];
        char string[100];
//        char ansd[100];
        char thiss[100]="";
        FILE *fp;
//        int i;
        int stage=0;
        double ans=0;
        int len=0;
        word[0]='\0';
        speed[0]='\0';
        strcat(&word[0],"Summary:\0");
        strcat(&speed[0],"mb/s\0");
        strcat(thiss,ctpath);
        strcat(thiss,"/shell/target.txt");
//        printf("aa %s\n",word);
        fp = fopen(thiss,"r");
//      printf("%s\n",word);
        while(!feof(fp)){
            fscanf(fp,"%s",string);
//            printf("ss %d %s %s\n",strcmp(string,&word[0]),word,string);
            if(!strcmp(string,&word[0])){
                printf("ss%s\n",string);
                stage=1;
            }
            if (stage==1){
                len = strlen(string);
                if(!strcmp(&string[len-4],&speed[0])){
                    string[len-4]='\0';
                    ans=atof(&string[0]);
//                    printf("ans:%f\n",ans);
                    break;
                }
            }
        }
        fclose(fp);
        return ans;
}

void Widget::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void Widget::on_pushButton_2_clicked()
{
    Widget w;
    on_progressBar_2_valueChanged(10);
    double dd;
    char thiss[100]="";
    strcat(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomwritehmfs.sh");
    printf("aa %s\n",thiss);
    system(thiss);
    on_progressBar_2_valueChanged(20);
    dd=getans();
    printf("dd%f\n",dd);
    ranwrite[crw%3][0]=dd;
    on_progressBar_2_valueChanged(40);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomwriteext4ram.sh");
    system(thiss);
    on_progressBar_2_valueChanged(50);
    dd=getans();
    printf("dd%f\n",dd);
    ranwrite[crw%3][1]=dd;
    on_progressBar_2_valueChanged(70);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/randomwriteext4.sh");
    system(thiss);
    on_progressBar_2_valueChanged(80);
    dd=getans();
    printf("dd%f\n",dd);
    ranwrite[crw%3][2]=dd;
    on_progressBar_2_valueChanged(100);

    crw++;
    printf("crw%d\n",crw);

    refresh2();
    ui->graphicsView_2->hide();
    ui->graphicsView_2->repaint();
    ui->graphicsView_2->show();
}

void Widget::on_progressBar_2_valueChanged(int value)
{
    ui->progressBar_2->setValue(value);
}

void Widget::on_pushButton_3_clicked()
{
    Widget w;
    on_progressBar_3_valueChanged(10);
    double dd;
    char thiss[100]="";
    strcat(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqreadhmfs.sh");
    printf("aa %s\n",thiss);
    system(thiss);
    on_progressBar_3_valueChanged(20);
    dd=getans();
    printf("dd%f\n",dd);
    seqread[csr%3][0]=dd;
    on_progressBar_3_valueChanged(40);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqreadext4ram.sh");
    system(thiss);
    on_progressBar_3_valueChanged(50);
    dd=getans();
    printf("dd%f\n",dd);
    seqread[csr%3][1]=dd;
    on_progressBar_3_valueChanged(70);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqreadext4.sh");
    system(thiss);
    on_progressBar_3_valueChanged(80);
    dd=getans();
    printf("dd%f\n",dd);
    seqread[csr%3][2]=dd;
    on_progressBar_3_valueChanged(100);

    csr++;
    printf("csr%d\n",csr);

    refresh3();
    ui->graphicsView_3->hide();
    ui->graphicsView_3->repaint();
    ui->graphicsView_3->show();
}

void Widget::on_progressBar_3_valueChanged(int value)
{
    ui->progressBar_3->setValue(value);
}

void Widget::on_pushButton_4_clicked()
{
    Widget w;
    on_progressBar_4_valueChanged(10);
    double dd;
    char thiss[100]="";
    strcat(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqwritehmfs.sh");
    printf("aa %s\n",thiss);
    system(thiss);
    on_progressBar_4_valueChanged(20);
    dd=getans();
    printf("dd%f\n",dd);
    seqwrite[csw%3][0]=dd;
    on_progressBar_4_valueChanged(40);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqwriteext4ram.sh");
    system(thiss);
    on_progressBar_4_valueChanged(50);
    dd=getans();
    printf("dd%f\n",dd);
    seqwrite[csw%3][1]=dd;
    on_progressBar_4_valueChanged(70);

    strcpy(thiss,"sh ");
    strcat(thiss,ctpath);
    strcat(thiss,"/shell/seqwriteext4.sh");
    system(thiss);
    on_progressBar_4_valueChanged(80);
    dd=getans();
    printf("dd%f\n",dd);
    seqwrite[csw%3][2]=dd;
    on_progressBar_4_valueChanged(100);

    csw++;
    printf("csw%d\n",csw);

    refresh4();
    ui->graphicsView_4->hide();
    ui->graphicsView_4->repaint();
    ui->graphicsView_4->show();
}

void Widget::on_progressBar_4_valueChanged(int value)
{
    ui->progressBar_4->setValue(value);
}
