/********************************************************************************
** Form generated from reading UI file 'netwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWINDOW_H
#define UI_NETWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *startServerPushButton;
    QPushButton *stopServerPushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *portNumberLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *anyIPCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *allowedIPListWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addIPPushButton;
    QPushButton *deleteIPPushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *addedIPListWidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *testIPPushButton;
    QPushButton *statisticIPPushButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK;
    QPushButton *Close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *netWindow)
    {
        if (netWindow->objectName().isEmpty())
            netWindow->setObjectName(QString::fromUtf8("netWindow"));
        netWindow->resize(480, 640);
        netWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(netWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startServerPushButton = new QPushButton(groupBox);
        startServerPushButton->setObjectName(QString::fromUtf8("startServerPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuIcons/icons/active.png"), QSize(), QIcon::Normal, QIcon::Off);
        startServerPushButton->setIcon(icon);
        startServerPushButton->setCheckable(true);
        startServerPushButton->setChecked(true);

        horizontalLayout->addWidget(startServerPushButton);

        stopServerPushButton = new QPushButton(groupBox);
        stopServerPushButton->setObjectName(QString::fromUtf8("stopServerPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menuIcons/icons/stopped.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopServerPushButton->setIcon(icon1);
        stopServerPushButton->setCheckable(true);

        horizontalLayout->addWidget(stopServerPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        portNumberLineEdit = new QLineEdit(groupBox_3);
        portNumberLineEdit->setObjectName(QString::fromUtf8("portNumberLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portNumberLineEdit->sizePolicy().hasHeightForWidth());
        portNumberLineEdit->setSizePolicy(sizePolicy);
        portNumberLineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(portNumberLineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        anyIPCheckBox = new QCheckBox(groupBox_3);
        anyIPCheckBox->setObjectName(QString::fromUtf8("anyIPCheckBox"));

        verticalLayout_4->addWidget(anyIPCheckBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        allowedIPListWidget = new QListWidget(groupBox_3);
        allowedIPListWidget->setObjectName(QString::fromUtf8("allowedIPListWidget"));

        horizontalLayout_4->addWidget(allowedIPListWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addIPPushButton = new QPushButton(groupBox_3);
        addIPPushButton->setObjectName(QString::fromUtf8("addIPPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/menuIcons/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addIPPushButton->setIcon(icon2);

        verticalLayout_3->addWidget(addIPPushButton);

        deleteIPPushButton = new QPushButton(groupBox_3);
        deleteIPPushButton->setObjectName(QString::fromUtf8("deleteIPPushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menuIcons/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteIPPushButton->setIcon(icon3);

        verticalLayout_3->addWidget(deleteIPPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_3);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(30);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, -1, 5, -1);
        addedIPListWidget = new QListWidget(groupBox_2);
        addedIPListWidget->setObjectName(QString::fromUtf8("addedIPListWidget"));

        horizontalLayout_5->addWidget(addedIPListWidget);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        testIPPushButton = new QPushButton(groupBox_2);
        testIPPushButton->setObjectName(QString::fromUtf8("testIPPushButton"));
        sizePolicy.setHeightForWidth(testIPPushButton->sizePolicy().hasHeightForWidth());
        testIPPushButton->setSizePolicy(sizePolicy);
        testIPPushButton->setMinimumSize(QSize(165, 0));
        testIPPushButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_5->addWidget(testIPPushButton);

        statisticIPPushButton = new QPushButton(groupBox_2);
        statisticIPPushButton->setObjectName(QString::fromUtf8("statisticIPPushButton"));
        sizePolicy.setHeightForWidth(statisticIPPushButton->sizePolicy().hasHeightForWidth());
        statisticIPPushButton->setSizePolicy(sizePolicy);
        statisticIPPushButton->setMinimumSize(QSize(165, 0));
        statisticIPPushButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout_5->addWidget(statisticIPPushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        OK = new QPushButton(centralwidget);
        OK->setObjectName(QString::fromUtf8("OK"));

        horizontalLayout_2->addWidget(OK);

        Close = new QPushButton(centralwidget);
        Close->setObjectName(QString::fromUtf8("Close"));

        horizontalLayout_2->addWidget(Close);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 1);
        netWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(netWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 21));
        netWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(netWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        netWindow->setStatusBar(statusbar);

        retranslateUi(netWindow);

        QMetaObject::connectSlotsByName(netWindow);
    } // setupUi

    void retranslateUi(QMainWindow *netWindow)
    {
        netWindow->setWindowTitle(QApplication::translate("netWindow", "\320\241\320\265\321\202\320\265\320\262\320\276\320\265 \320\262\320\267\320\260\320\270\320\274\320\276\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \321\201 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265\320\274", nullptr));
        groupBox->setTitle(QApplication::translate("netWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\276\320\274", nullptr));
        startServerPushButton->setText(QApplication::translate("netWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\276\320\277\321\200\320\276\321\201 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        stopServerPushButton->setText(QApplication::translate("netWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\276\320\277\321\200\320\276\321\201 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        groupBox_3->setTitle(QApplication::translate("netWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label->setText(QApplication::translate("netWindow", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\321\200\321\202\320\260:    ", nullptr));
        portNumberLineEdit->setText(QApplication::translate("netWindow", "7777", nullptr));
        anyIPCheckBox->setText(QApplication::translate("netWindow", "\320\240\320\260\320\267\321\200\320\265\321\210\320\270\321\202\321\214 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262 \321\201 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\321\213\320\274 \320\260\320\264\321\200\320\265\321\201\320\276\320\274", nullptr));
        addIPPushButton->setText(QApplication::translate("netWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 IP \320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200\320\260", nullptr));
        deleteIPPushButton->setText(QApplication::translate("netWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 IP \320\272\320\276\320\275\321\202\321\200\320\276\320\273\320\273\320\265\321\200\320\260", nullptr));
        groupBox_2->setTitle(QApplication::translate("netWindow", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\270 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        testIPPushButton->setText(QApplication::translate("netWindow", "\320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        statisticIPPushButton->setText(QApplication::translate("netWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\320\270\320\272\320\260 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        OK->setText(QApplication::translate("netWindow", "\320\236\320\232", nullptr));
        Close->setText(QApplication::translate("netWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class netWindow: public Ui_netWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H
