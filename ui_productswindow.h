/********************************************************************************
** Form generated from reading UI file 'productswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSWINDOW_H
#define UI_PRODUCTSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productsWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *iImportPushButton;
    QPushButton *exportPushButton;
    QPushButton *importFromDBPushButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *insertPushButton;
    QPushButton *changePushButton;
    QPushButton *deletePushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *OkPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *productsWindow)
    {
        if (productsWindow->objectName().isEmpty())
            productsWindow->setObjectName(QString::fromUtf8("productsWindow"));
        productsWindow->resize(640, 480);
        centralwidget = new QWidget(productsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        iImportPushButton = new QPushButton(centralwidget);
        iImportPushButton->setObjectName(QString::fromUtf8("iImportPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuIcons/icons/mainIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        iImportPushButton->setIcon(icon);

        verticalLayout->addWidget(iImportPushButton);

        exportPushButton = new QPushButton(centralwidget);
        exportPushButton->setObjectName(QString::fromUtf8("exportPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportPushButton->setIcon(icon1);

        verticalLayout->addWidget(exportPushButton);

        importFromDBPushButton = new QPushButton(centralwidget);
        importFromDBPushButton->setObjectName(QString::fromUtf8("importFromDBPushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/dataBase.png"), QSize(), QIcon::Normal, QIcon::Off);
        importFromDBPushButton->setIcon(icon2);

        verticalLayout->addWidget(importFromDBPushButton);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        insertPushButton = new QPushButton(centralwidget);
        insertPushButton->setObjectName(QString::fromUtf8("insertPushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menuIcons/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertPushButton->setIcon(icon3);

        horizontalLayout->addWidget(insertPushButton);

        changePushButton = new QPushButton(centralwidget);
        changePushButton->setObjectName(QString::fromUtf8("changePushButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menuIcons/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        changePushButton->setIcon(icon4);

        horizontalLayout->addWidget(changePushButton);

        deletePushButton = new QPushButton(centralwidget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menuIcons/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletePushButton->setIcon(icon5);

        horizontalLayout->addWidget(deletePushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        OkPushButton = new QPushButton(centralwidget);
        OkPushButton->setObjectName(QString::fromUtf8("OkPushButton"));

        horizontalLayout_3->addWidget(OkPushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 1);
        productsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(productsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        productsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(productsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        productsWindow->setStatusBar(statusbar);

        retranslateUi(productsWindow);

        QMetaObject::connectSlotsByName(productsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *productsWindow)
    {
        productsWindow->setWindowTitle(QApplication::translate("productsWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\277\321\200\320\276\320\264\321\203\320\272\321\206\320\270\320\270", nullptr));
        iImportPushButton->setText(QApplication::translate("productsWindow", "\320\230\320\274\320\277\320\276\321\200\321\202 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        exportPushButton->setText(QApplication::translate("productsWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        importFromDBPushButton->setText(QApplication::translate("productsWindow", "\320\230\320\274\320\277\320\276\321\200\321\202 \320\270\320\267 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        insertPushButton->setText(QApplication::translate("productsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        changePushButton->setText(QApplication::translate("productsWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        deletePushButton->setText(QApplication::translate("productsWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        OkPushButton->setText(QApplication::translate("productsWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productsWindow: public Ui_productsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSWINDOW_H
