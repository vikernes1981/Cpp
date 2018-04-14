#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sum_clicked()
{
    QString num1 = ui->input1->text();
    QString num2 = ui->input2->text();
    int total = num1.toInt() + num2.toInt();
    ui->label1->setText(QString::number(total));
}

void MainWindow::on_mult_clicked()
{
    QString num1 = ui->input1->text();
    QString num2 = ui->input2->text();
    int total = num1.toInt() * num2.toInt();
    ui->label1->setText(QString::number(total));
}

void MainWindow::on_divide_clicked()
{
    QString num1 = ui->input1->text();
    QString num2 = ui->input2->text();
    int total = num1.toInt() / num2.toInt();
    ui->label1->setText(QString::number(total));
}

void MainWindow::on_sub_clicked()
{
    QString num1 = ui->input1->text();
    QString num2 = ui->input2->text();
    int total = num1.toInt() - num2.toInt();
    ui->label1->setText(QString::number(total));
}
