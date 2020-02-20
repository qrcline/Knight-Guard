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
    QProgressBar *proxBar_Right;
    QProgressBar *proxBar_left;
    QProgressBar *proxBar_Front;
    QProgressBar *proxBar_Rear;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *textInput_Serial_Port;
    QLineEdit *textInput_Serial_Speed;
    QGridLayout *gridLayout;
    QPushButton *Button_SerialConnection;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *commandTable;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *textIntput_Command;
    QPushButton *Button_CommandSend;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *line;
    QGridLayout *gridLayout_4;
    QLabel *statusLight_Power;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *statusLight_Motor1;
    QLabel *label_14;
    QLabel *statusLight_Motor2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *statusLight_ObstacleAvoid;
    QLabel *statusLight_Network;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *textInput_Network_Adress;
    QLineEdit *textInput_Network_Port;
    QGridLayout *gridLayout_2;
    QPushButton *Button_NetworkConnect;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_Move_Forward;
    QPushButton *Button_Move_Reverse;
    QPushButton *Button_Move_Right;
    QPushButton *Button_Move_Right_2;
    QPushButton *Button_Move_Reverse_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1057, 614);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        proxBar_Right = new QProgressBar(centralwidget);
        proxBar_Right->setObjectName(QString::fromUtf8("proxBar_Right"));
        proxBar_Right->setGeometry(QRect(930, 400, 118, 23));
        proxBar_Right->setValue(50);
        proxBar_Right->setTextVisible(true);
        proxBar_left = new QProgressBar(centralwidget);
        proxBar_left->setObjectName(QString::fromUtf8("proxBar_left"));
        proxBar_left->setGeometry(QRect(800, 400, 118, 23));
        proxBar_left->setLayoutDirection(Qt::RightToLeft);
        proxBar_left->setValue(50);
        proxBar_left->setTextVisible(true);
        proxBar_Front = new QProgressBar(centralwidget);
        proxBar_Front->setObjectName(QString::fromUtf8("proxBar_Front"));
        proxBar_Front->setGeometry(QRect(910, 270, 23, 118));
        proxBar_Front->setLayoutDirection(Qt::RightToLeft);
        proxBar_Front->setValue(50);
        proxBar_Front->setTextVisible(true);
        proxBar_Front->setOrientation(Qt::Vertical);
        proxBar_Rear = new QProgressBar(centralwidget);
        proxBar_Rear->setObjectName(QString::fromUtf8("proxBar_Rear"));
        proxBar_Rear->setGeometry(QRect(910, 430, 23, 118));
        proxBar_Rear->setLayoutDirection(Qt::RightToLeft);
        proxBar_Rear->setValue(50);
        proxBar_Rear->setTextVisible(true);
        proxBar_Rear->setOrientation(Qt::Vertical);
        proxBar_Rear->setInvertedAppearance(true);
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

        textInput_Serial_Port = new QLineEdit(verticalLayoutWidget);
        textInput_Serial_Port->setObjectName(QString::fromUtf8("textInput_Serial_Port"));

        verticalLayout->addWidget(textInput_Serial_Port);

        textInput_Serial_Speed = new QLineEdit(verticalLayoutWidget);
        textInput_Serial_Speed->setObjectName(QString::fromUtf8("textInput_Serial_Speed"));

        verticalLayout->addWidget(textInput_Serial_Speed);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button_SerialConnection = new QPushButton(verticalLayoutWidget);
        Button_SerialConnection->setObjectName(QString::fromUtf8("Button_SerialConnection"));

        gridLayout->addWidget(Button_SerialConnection, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        commandTable = new QTextBrowser(centralwidget);
        commandTable->setObjectName(QString::fromUtf8("commandTable"));
        commandTable->setGeometry(QRect(30, 160, 371, 371));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 530, 371, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textIntput_Command = new QLineEdit(horizontalLayoutWidget);
        textIntput_Command->setObjectName(QString::fromUtf8("textIntput_Command"));

        horizontalLayout->addWidget(textIntput_Command);

        Button_CommandSend = new QPushButton(horizontalLayoutWidget);
        Button_CommandSend->setObjectName(QString::fromUtf8("Button_CommandSend"));

        horizontalLayout->addWidget(Button_CommandSend);

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
        statusLight_Power = new QLabel(verticalLayoutWidget_2);
        statusLight_Power->setObjectName(QString::fromUtf8("statusLight_Power"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusLight_Power->sizePolicy().hasHeightForWidth());
        statusLight_Power->setSizePolicy(sizePolicy);
        statusLight_Power->setMinimumSize(QSize(20, 20));
        statusLight_Power->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(statusLight_Power, 0, 1, 1, 1);

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

        statusLight_Motor1 = new QLabel(verticalLayoutWidget_2);
        statusLight_Motor1->setObjectName(QString::fromUtf8("statusLight_Motor1"));
        sizePolicy.setHeightForWidth(statusLight_Motor1->sizePolicy().hasHeightForWidth());
        statusLight_Motor1->setSizePolicy(sizePolicy);
        statusLight_Motor1->setMinimumSize(QSize(20, 20));
        statusLight_Motor1->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(statusLight_Motor1, 1, 1, 1, 1);

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

        statusLight_Motor2 = new QLabel(verticalLayoutWidget_2);
        statusLight_Motor2->setObjectName(QString::fromUtf8("statusLight_Motor2"));
        sizePolicy.setHeightForWidth(statusLight_Motor2->sizePolicy().hasHeightForWidth());
        statusLight_Motor2->setSizePolicy(sizePolicy);
        statusLight_Motor2->setMinimumSize(QSize(20, 20));
        statusLight_Motor2->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(statusLight_Motor2, 2, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        statusLight_ObstacleAvoid = new QLabel(verticalLayoutWidget_2);
        statusLight_ObstacleAvoid->setObjectName(QString::fromUtf8("statusLight_ObstacleAvoid"));
        sizePolicy.setHeightForWidth(statusLight_ObstacleAvoid->sizePolicy().hasHeightForWidth());
        statusLight_ObstacleAvoid->setSizePolicy(sizePolicy);
        statusLight_ObstacleAvoid->setMinimumSize(QSize(20, 20));
        statusLight_ObstacleAvoid->setStyleSheet(QString::fromUtf8(" border-radius: 10px; \n"
"background: red;\n"
" color: #4A0C46;\n"
"height:24;\n"
"width:24;"));

        gridLayout_4->addWidget(statusLight_ObstacleAvoid, 3, 1, 1, 1);

        statusLight_Network = new QLabel(verticalLayoutWidget_2);
        statusLight_Network->setObjectName(QString::fromUtf8("statusLight_Network"));
        statusLight_Network->setFont(font);

        gridLayout_4->addWidget(statusLight_Network, 4, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(200, 30, 160, 104));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        textInput_Network_Adress = new QLineEdit(verticalLayoutWidget_3);
        textInput_Network_Adress->setObjectName(QString::fromUtf8("textInput_Network_Adress"));

        verticalLayout_3->addWidget(textInput_Network_Adress);

        textInput_Network_Port = new QLineEdit(verticalLayoutWidget_3);
        textInput_Network_Port->setObjectName(QString::fromUtf8("textInput_Network_Port"));

        verticalLayout_3->addWidget(textInput_Network_Port);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Button_NetworkConnect = new QPushButton(verticalLayoutWidget_3);
        Button_NetworkConnect->setObjectName(QString::fromUtf8("Button_NetworkConnect"));

        gridLayout_2->addWidget(Button_NetworkConnect, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        Button_Move_Forward = new QPushButton(centralwidget);
        Button_Move_Forward->setObjectName(QString::fromUtf8("Button_Move_Forward"));
        Button_Move_Forward->setGeometry(QRect(580, 430, 80, 21));
        Button_Move_Reverse = new QPushButton(centralwidget);
        Button_Move_Reverse->setObjectName(QString::fromUtf8("Button_Move_Reverse"));
        Button_Move_Reverse->setGeometry(QRect(580, 510, 80, 21));
        Button_Move_Right = new QPushButton(centralwidget);
        Button_Move_Right->setObjectName(QString::fromUtf8("Button_Move_Right"));
        Button_Move_Right->setGeometry(QRect(680, 470, 80, 21));
        Button_Move_Right_2 = new QPushButton(centralwidget);
        Button_Move_Right_2->setObjectName(QString::fromUtf8("Button_Move_Right_2"));
        Button_Move_Right_2->setGeometry(QRect(480, 470, 80, 21));
        Button_Move_Reverse_2 = new QPushButton(centralwidget);
        Button_Move_Reverse_2->setObjectName(QString::fromUtf8("Button_Move_Reverse_2"));
        Button_Move_Reverse_2->setGeometry(QRect(570, 460, 91, 41));
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
        proxBar_Right->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        proxBar_left->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        proxBar_Front->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        proxBar_Rear->setFormat(QApplication::translate("MainWindow", "%p", nullptr));
        label->setText(QApplication::translate("MainWindow", "Serial Connection", nullptr));
        textInput_Serial_Port->setPlaceholderText(QApplication::translate("MainWindow", "COM Port", nullptr));
        textInput_Serial_Speed->setPlaceholderText(QApplication::translate("MainWindow", "Speed", nullptr));
        Button_SerialConnection->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        Button_CommandSend->setText(QApplication::translate("MainWindow", "Send", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Status", nullptr));
        statusLight_Power->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Obstacle Avoidance", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Motor 2", nullptr));
        statusLight_Motor1->setText(QString());
        label_14->setText(QString());
        statusLight_Motor2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Power", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Motor 1", nullptr));
        statusLight_ObstacleAvoid->setText(QString());
        statusLight_Network->setText(QApplication::translate("MainWindow", "Network Connection", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Netowrk Connection", nullptr));
        textInput_Network_Adress->setPlaceholderText(QApplication::translate("MainWindow", "Adress", nullptr));
        textInput_Network_Port->setPlaceholderText(QApplication::translate("MainWindow", "Port", nullptr));
        Button_NetworkConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        Button_Move_Forward->setText(QApplication::translate("MainWindow", "Forward", nullptr));
        Button_Move_Reverse->setText(QApplication::translate("MainWindow", "Reverse", nullptr));
        Button_Move_Right->setText(QApplication::translate("MainWindow", "90 Right", nullptr));
        Button_Move_Right_2->setText(QApplication::translate("MainWindow", "90 Left", nullptr));
        Button_Move_Reverse_2->setText(QApplication::translate("MainWindow", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
