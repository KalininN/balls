#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cstdio>

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_startB_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
