/********************************************************************************
** Form generated from reading UI file 'ipaddwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPADDWINDOW_H
#define UI_IPADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IpAddWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *IpLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *OkPushButton;
    QPushButton *CancelPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IpAddWindow)
    {
        if (IpAddWindow->objectName().isEmpty())
            IpAddWindow->setObjectName(QString::fromUtf8("IpAddWindow"));
        IpAddWindow->resize(216, 117);
        centralwidget = new QWidget(IpAddWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        IpLineEdit = new QLineEdit(centralwidget);
        IpLineEdit->setObjectName(QString::fromUtf8("IpLineEdit"));
        QFont font;
        font.setPointSize(12);
        IpLineEdit->setFont(font);

        verticalLayout->addWidget(IpLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OkPushButton = new QPushButton(centralwidget);
        OkPushButton->setObjectName(QString::fromUtf8("OkPushButton"));

        horizontalLayout->addWidget(OkPushButton);

        CancelPushButton = new QPushButton(centralwidget);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));

        horizontalLayout->addWidget(CancelPushButton);


        verticalLayout->addLayout(horizontalLayout);

        IpAddWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IpAddWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 216, 21));
        IpAddWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(IpAddWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        IpAddWindow->setStatusBar(statusbar);

        retranslateUi(IpAddWindow);

        QMetaObject::connectSlotsByName(IpAddWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IpAddWindow)
    {
        IpAddWindow->setWindowTitle(QApplication::translate("IpAddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 IP \320\260\320\264\321\200\320\265\321\201", nullptr));
        OkPushButton->setText(QApplication::translate("IpAddWindow", "\320\236\320\232", nullptr));
        CancelPushButton->setText(QApplication::translate("IpAddWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IpAddWindow: public Ui_IpAddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPADDWINDOW_H
