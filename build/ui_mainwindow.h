/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *status;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *steal;
    QGridLayout *gridLayout;
    QScrollBar *sliderp1;
    QLCDNumber *pcdp3;
    QLCDNumber *lcdp4;
    QScrollBar *sliderp3;
    QLabel *label_4;
    QScrollBar *sliderp2;
    QScrollBar *sliderp4;
    QLCDNumber *lcdp2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdp1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *reset;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnGameReset;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1374, 517);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1046, 488));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        sizePolicy.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy);
        status->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(120);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        status->setFont(font);
        status->setLayoutDirection(Qt::LeftToRight);
        status->setScaledContents(true);
        status->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(status);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        steal = new QLabel(frame);
        steal->setObjectName(QStringLiteral("steal"));
        QFont font1;
        font1.setPointSize(60);
        steal->setFont(font1);
        steal->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(steal);


        verticalLayout->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sliderp1 = new QScrollBar(centralWidget);
        sliderp1->setObjectName(QStringLiteral("sliderp1"));
        sliderp1->setMinimumSize(QSize(0, 50));
        sliderp1->setMaximum(5);
        sliderp1->setPageStep(1);
        sliderp1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderp1, 2, 0, 1, 1);

        pcdp3 = new QLCDNumber(centralWidget);
        pcdp3->setObjectName(QStringLiteral("pcdp3"));
        pcdp3->setCursor(QCursor(Qt::ForbiddenCursor));
        pcdp3->setDigitCount(1);
        pcdp3->setMode(QLCDNumber::Dec);

        gridLayout->addWidget(pcdp3, 3, 2, 1, 1);

        lcdp4 = new QLCDNumber(centralWidget);
        lcdp4->setObjectName(QStringLiteral("lcdp4"));
        lcdp4->setCursor(QCursor(Qt::ForbiddenCursor));
        lcdp4->setDigitCount(1);
        lcdp4->setMode(QLCDNumber::Dec);

        gridLayout->addWidget(lcdp4, 3, 3, 1, 1);

        sliderp3 = new QScrollBar(centralWidget);
        sliderp3->setObjectName(QStringLiteral("sliderp3"));
        sliderp3->setMinimumSize(QSize(0, 50));
        sliderp3->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setPointSize(8);
        sliderp3->setFont(font2);
        sliderp3->setMaximum(5);
        sliderp3->setPageStep(1);
        sliderp3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderp3, 2, 2, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setPointSize(14);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        sliderp2 = new QScrollBar(centralWidget);
        sliderp2->setObjectName(QStringLiteral("sliderp2"));
        sliderp2->setMinimumSize(QSize(0, 50));
        sliderp2->setBaseSize(QSize(0, 0));
        sliderp2->setFont(font2);
        sliderp2->setMaximum(5);
        sliderp2->setPageStep(1);
        sliderp2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderp2, 2, 1, 1, 1);

        sliderp4 = new QScrollBar(centralWidget);
        sliderp4->setObjectName(QStringLiteral("sliderp4"));
        sliderp4->setMinimumSize(QSize(0, 50));
        sliderp4->setBaseSize(QSize(0, 0));
        sliderp4->setFont(font2);
        sliderp4->setMaximum(5);
        sliderp4->setPageStep(1);
        sliderp4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderp4, 2, 3, 1, 1);

        lcdp2 = new QLCDNumber(centralWidget);
        lcdp2->setObjectName(QStringLiteral("lcdp2"));
        lcdp2->setCursor(QCursor(Qt::ForbiddenCursor));
        lcdp2->setDigitCount(1);
        lcdp2->setMode(QLCDNumber::Dec);

        gridLayout->addWidget(lcdp2, 3, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        lcdp1 = new QLCDNumber(centralWidget);
        lcdp1->setObjectName(QStringLiteral("lcdp1"));
        lcdp1->setCursor(QCursor(Qt::ForbiddenCursor));
        lcdp1->setDigitCount(1);

        gridLayout->addWidget(lcdp1, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QStringLiteral("reset"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reset->sizePolicy().hasHeightForWidth());
        reset->setSizePolicy(sizePolicy1);
        reset->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(reset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnGameReset = new QPushButton(centralWidget);
        btnGameReset->setObjectName(QStringLiteral("btnGameReset"));
        btnGameReset->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(btnGameReset);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        status->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 1374, 21));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy2);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(sliderp1, SIGNAL(valueChanged(int)), lcdp1, SLOT(display(int)));
        QObject::connect(sliderp2, SIGNAL(valueChanged(int)), lcdp2, SLOT(display(int)));
        QObject::connect(sliderp3, SIGNAL(valueChanged(int)), pcdp3, SLOT(display(int)));
        QObject::connect(sliderp4, SIGNAL(valueChanged(int)), lcdp4, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Quiz Engine", 0));
        status->setText(QApplication::translate("MainWindow", "No Winner Yet...", 0));
        steal->setText(QApplication::translate("MainWindow", "No Steal Yet...", 0));
        label_4->setText(QApplication::translate("MainWindow", "Player 3", 0));
        label_3->setText(QApplication::translate("MainWindow", "Player 4", 0));
        label->setText(QApplication::translate("MainWindow", "Player 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "Player 2", 0));
        reset->setText(QApplication::translate("MainWindow", "New Round", 0));
        btnGameReset->setText(QApplication::translate("MainWindow", "Game Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
