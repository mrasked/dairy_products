/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testWindow)
    {
        if (testWindow->objectName().isEmpty())
            testWindow->setObjectName(QString::fromUtf8("testWindow"));
        testWindow->resize(762, 550);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuIcons/icons/dataBase.png"), QSize(), QIcon::Normal, QIcon::Off);
        testWindow->setWindowIcon(icon);
        centralwidget = new QWidget(testWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        testWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 762, 21));
        testWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(testWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        testWindow->setStatusBar(statusbar);

        retranslateUi(testWindow);

        QMetaObject::connectSlotsByName(testWindow);
    } // setupUi

    void retranslateUi(QMainWindow *testWindow)
    {
        testWindow->setWindowTitle(QApplication::translate("testWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\261\320\264", nullptr));
        pushButton->setText(QApplication::translate("testWindow", "\320\224\321\200\321\203\320\263\320\276\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QApplication::translate("testWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton_2->setText(QApplication::translate("testWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\201\321\217 \320\272 \320\221\320\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testWindow: public Ui_testWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
