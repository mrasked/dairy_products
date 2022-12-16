/********************************************************************************
** Form generated from reading UI file 'schedulewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEWINDOW_H
#define UI_SCHEDULEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scheduleWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *deviceTypeTabWidget;
    QWidget *server;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *allowedIPListWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QWidget *controller;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *scheduleWindow)
    {
        if (scheduleWindow->objectName().isEmpty())
            scheduleWindow->setObjectName(QString::fromUtf8("scheduleWindow"));
        scheduleWindow->resize(480, 640);
        centralwidget = new QWidget(scheduleWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        deviceTypeTabWidget = new QTabWidget(centralwidget);
        deviceTypeTabWidget->setObjectName(QString::fromUtf8("deviceTypeTabWidget"));
        server = new QWidget();
        server->setObjectName(QString::fromUtf8("server"));
        verticalLayout_2 = new QVBoxLayout(server);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(server);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        allowedIPListWidget = new QListWidget(groupBox);
        allowedIPListWidget->setObjectName(QString::fromUtf8("allowedIPListWidget"));
        allowedIPListWidget->setEnabled(false);

        horizontalLayout_4->addWidget(allowedIPListWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout_3->addWidget(radioButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(server);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 7);
        deviceTypeTabWidget->addTab(server, QString());
        controller = new QWidget();
        controller->setObjectName(QString::fromUtf8("controller"));
        deviceTypeTabWidget->addTab(controller, QString());

        verticalLayout->addWidget(deviceTypeTabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closePushButton = new QPushButton(centralwidget);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout->addLayout(horizontalLayout);

        scheduleWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(scheduleWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 21));
        scheduleWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(scheduleWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        scheduleWindow->setStatusBar(statusbar);

        retranslateUi(scheduleWindow);

        deviceTypeTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(scheduleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *scheduleWindow)
    {
        scheduleWindow->setWindowTitle(QApplication::translate("scheduleWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        groupBox->setTitle(QApplication::translate("scheduleWindow", "\320\222\321\213\320\261\320\276\321\200 \320\276\320\277\321\200\320\260\321\210\320\270\320\262\320\260\320\265\320\274\320\276\320\263\320\276 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200\320\260", nullptr));
        radioButton->setText(QApplication::translate("scheduleWindow", "\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        radioButton_2->setText(QApplication::translate("scheduleWindow", "\320\225\320\264\320\270\320\275\320\276\320\265 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        groupBox_2->setTitle(QApplication::translate("scheduleWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\321\217", nullptr));
        deviceTypeTabWidget->setTabText(deviceTypeTabWidget->indexOf(server), QApplication::translate("scheduleWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        deviceTypeTabWidget->setTabText(deviceTypeTabWidget->indexOf(controller), QApplication::translate("scheduleWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200\320\276\320\262", nullptr));
        closePushButton->setText(QApplication::translate("scheduleWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduleWindow: public Ui_scheduleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEWINDOW_H
