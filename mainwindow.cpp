#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#define PLAYER1 "Player 1"
#define PLAYER2 "Player 2"
#define PLAYER3 "Player 3"
#define PLAYER4 "Player 4"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::StrongFocus);
    qDebug() << "Launching Quiz Engine";
    gameWinner = "";
    runnerUp = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(((event->key() == Qt::Key_Up) ||
        (event->key() == Qt::Key_Right) ||
        (event->key() == Qt::Key_Down) ||
        (event->key() == Qt::Key_Left)) &&
        (gameWinner == ""))
        {
            gameWinner = "TBC";
            runnerUp = "none";
        }

    switch(event->key())
    {
        case Qt::Key_Up:
            if(gameWinner == "TBC") gameWinner = PLAYER1;
            if(gameWinner != PLAYER1 && runnerUp == "none") runnerUp = PLAYER1;
            qDebug() << "Winner: " + gameWinner + "    Runner Up: " + runnerUp;
            break;
        case Qt::Key_Right:
            //qDebug() << PLAYER2;
            if(gameWinner == "TBC") gameWinner = PLAYER2;
            if(gameWinner != PLAYER2 && runnerUp == "none") runnerUp = PLAYER2;
            qDebug() << "Winner: " + gameWinner + "    Runner Up: " + runnerUp;
            break;
        case Qt::Key_Down:
            //qDebug() << PLAYER3;
            if(gameWinner == "TBC") gameWinner = PLAYER3;
            if(gameWinner != PLAYER3 && runnerUp == "none") runnerUp = PLAYER3;
            qDebug() << "Winner: " + gameWinner + "    Runner Up: " + runnerUp;
            break;
        case Qt::Key_Left:
            //qDebug() << PLAYER4;
            if(gameWinner == "TBC") gameWinner = PLAYER4;
            if(gameWinner != PLAYER4 && runnerUp == "none") runnerUp = PLAYER4;
            qDebug() << "Winner: " + gameWinner + "    Runner Up: " + runnerUp;
            break;
        case Qt::Key_Space:
            qDebug() << "Game Reset!";
            gameWinner = "";
            break;
    }

    //qDebug() << "Winner: " + gameWinner + "    Runner Up: " + runnerUp;
    if(gameWinner != "") {
           ui->status->setText("<font color='red'>" + gameWinner +"</font>");
    }
    else ui->status->setText("No Winner Yet...");
    if(runnerUp !="") ui->steal->setText(runnerUp);
    else ui->steal->setText("No Steal Yet...");
}

void MainWindow::on_reset_clicked()
{
    qDebug() << "Game Reset!";
    gameWinner = "";
    runnerUp = "";
    ui->status->setText("No Winner Yet...");
    ui->steal->setText("No Steal Yet...");
}
