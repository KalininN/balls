#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_startB_clicked()
{
    QPixmap pixmap(this->ui->renderL->size());
    QPainter painter(&pixmap);
    painter.setBrush(QBrush(QColor(255, 0, 0)));
    painter.drawEllipse(QRect(QPoint(0, 0), pixmap.size()));
    this->ui->renderL->setPixmap(pixmap);
}
