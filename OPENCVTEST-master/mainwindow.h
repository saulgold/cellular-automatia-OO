#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTime>

#include"world.h"
#include"block.h"
#include <QDebug>
#include<QThread>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

   world *newWorld;
   int count;
    ~MainWindow();

private:
    void updateGUIShark();
    Ui::MainWindow *ui;
 QTimer *timer2;};

#endif // MAINWINDOW_H
