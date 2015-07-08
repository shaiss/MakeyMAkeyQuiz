#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui/QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event);
    
private slots:
    void on_reset_clicked();

    void on_btnGameReset_clicked();



private:
    Ui::MainWindow *ui;
    QString gameWinner;
    QString runnerUp;
};

#endif // MAINWINDOW_H
