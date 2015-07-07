#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#define PLAYER1 "Dan"
#define PLAYER2 "Divya"
#define PLAYER3 "Diana"
#define PLAYER4 "Jack"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::StrongFocus);
    qDebug() << "Launching SpyClub Quiz Engine";
    gameWinner = "";
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
        gameWinner = "TBC";

    switch(event->key())
    {
        case Qt::Key_Up:
            qDebug() << PLAYER1;
            if(gameWinner == "TBC") gameWinner = PLAYER1;
            break;
        case Qt::Key_Right:
            qDebug() << PLAYER2;
            if(gameWinner == "TBC") gameWinner = PLAYER2;
            break;
        case Qt::Key_Down:
            qDebug() << PLAYER3;
            if(gameWinner == "TBC") gameWinner = PLAYER3;
            break;
        case Qt::Key_Left:
            qDebug() << PLAYER4;
            if(gameWinner == "TBC") gameWinner = PLAYER4;
            break;
        case Qt::Key_Space:
            qDebug() << "Game Reset!";
            gameWinner = "";
            break;
    }

    if(gameWinner != "") ui->status->setText(gameWinner);
    else ui->status->setText("No Winner Yet...");
}

void MainWindow::on_reset_clicked()
{
    qDebug() << "Game Reset!";
    gameWinner = "";
    ui->status->setText("No Winner Yet...");
}
