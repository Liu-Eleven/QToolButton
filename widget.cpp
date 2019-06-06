#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QIcon>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pix;
    ui->toolButton->setIconSize(QSize(58, 58));
    pix.load(":/res/auto_color_auto_start.png");
    ui->toolButton->setIcon(QIcon(pix));
    ui->toolButton->setStyleSheet("QToolButton{font:13pt;color:white;background-color:transparent;border:none;border-radius:0px;}");


    ui->pushButton->setIconSize(QSize(58, 58));
    pix.load(":/res/dst_direction_1.png");
    ui->pushButton->setIcon(QIcon(pix));
    ui->pushButton->setStyleSheet("QToolButton{font:13pt;color:white;background-color:blue;border:none;border-radius:0px;}");


}

Widget::~Widget()
{
    delete ui;
}
