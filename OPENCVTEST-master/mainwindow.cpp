#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include<time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    count =0;
    ui->setupUi(this);



     ui->setupUi(this);
     timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(updateGUIShark()));
      timer2->start(20);

}

void MainWindow::updateGUIShark(){
    newWorld = new world(10,10,25,50);

    qDebug() << count;
count++;

QPixmap currentFrame = newWorld->showWorld();
ui->label->setPixmap(currentFrame.scaled(400,400, Qt::IgnoreAspectRatio, Qt::FastTransformation));

QThread::msleep(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
