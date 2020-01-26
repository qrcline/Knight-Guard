/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *serialLine;
    QLineEdit *serialSpeed;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1057, 614);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(930, 400, 118, 23));
        progressBar->setValue(50);
        progressBar->setTextVisible(true);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(800, 400, 118, 23));
        progressBar_2->setLayoutDirection(Qt::RightToLeft);
        progressBar_2->setValue(50);
        progressBar_2->setTextVisible(true);
        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setGeometry(QRect(910, 270, 23, 118));
        progressBar_3->setLayoutDirection(Qt::RightToLeft);
        progressBar_3->setValue(50);
        progressBar_3->setTextVisible(true);
        progressBar_3->setOrientation(Qt::Vertical);
        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setGeometry(QRect(910, 430, 23, 118));
        progressBar_4->setLayoutDirection(Qt::RightToLeft);
        progressBar_4->setValue(50);
        progressBar_4->setTextVisible(true);
        progressBar_4->setOrientation(Qt::Vertical);
        progressBar_4->setInvertedAppearance(true);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 160, 104));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        serialLine = new QLineEdit(verticalLayoutWidget);
        serialLine->setObjectName(QString::fromUtf8("serialLine"));

        verticalLayout->addWidget(serialLine);

        serialSpeed = new QLineEdit(verticalLayoutWidget);
        serialSpeed->setObjectName(QString::fromUtf8("serialSpeed"));

        verticalLayout->addWidget(serialSpeed);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 160, 371, 371));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 530, 371, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(820, 10, 160, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: red;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        line = new QFrame(verticalLayoutWidget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(10);
        label_11->setFont(font);

        gridLayout_4->addWidget(label_11, 3, 0, 1, 1);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_4->addWidget(label_9, 2, 0, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(20, 20));
        label_8->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(label_8, 1, 1, 1, 1);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(20, 20));
        label_14->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(label_14, 4, 1, 1, 1);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(20, 20));
        label_10->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(label_10, 2, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(20, 20));
        label_12->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(label_12, 3, 1, 1, 1);

        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        gridLayout_4->addWidget(label_13, 4, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1057, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        progressBar->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        progressBar_2->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        progressBar_3->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        progressBar_4->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        label->setText(QApplication::translate("MainWindow", "Serial Connection", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Send", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Status", nullptr));
        label_4->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Obstacle Avoidance", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Motor 2", nullptr));
        label_8->setText(QString());
        label_14->setText(QString());
        label_10->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Power", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Motor 1", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Wifi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
