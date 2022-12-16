/********************************************************************************
** Form generated from reading UI file 'myreportwin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYREPORTWIN_H
#define UI_MYREPORTWIN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myReportWin
{
public:
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QLabel *label;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QTimeEdit *timeEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *myReportWin)
    {
        if (myReportWin->objectName().isEmpty())
            myReportWin->setObjectName(QString::fromUtf8("myReportWin"));
        myReportWin->resize(662, 679);
        gridLayout_2 = new QGridLayout(myReportWin);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(myReportWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 6);

        label = new QLabel(myReportWin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        dateEdit = new QDateEdit(myReportWin);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2012, 1, 1));

        gridLayout_2->addWidget(dateEdit, 1, 1, 1, 1);

        timeEdit = new QTimeEdit(myReportWin);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setFont(font);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(false);
        timeEdit->setMaximumTime(QTime(23, 59, 59));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setCalendarPopup(false);

        gridLayout_2->addWidget(timeEdit, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(myReportWin);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 1, 5, 1, 1);

        label_2 = new QLabel(myReportWin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        dateEdit_2 = new QDateEdit(myReportWin);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setFont(font);
        dateEdit_2->setAlignment(Qt::AlignCenter);
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2012, 1, 1));

        gridLayout_2->addWidget(dateEdit_2, 2, 1, 1, 1);

        timeEdit_2 = new QTimeEdit(myReportWin);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setFont(font);
        timeEdit_2->setAlignment(Qt::AlignCenter);
        timeEdit_2->setCalendarPopup(false);
        timeEdit_2->setTime(QTime(23, 59, 0));

        gridLayout_2->addWidget(timeEdit_2, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(myReportWin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 2, 5, 1, 1);

        pushButton = new QPushButton(myReportWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 3, 1, 1, 2);

        lineEdit = new QLineEdit(myReportWin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setFont(font);

        gridLayout_2->addWidget(lineEdit, 3, 3, 1, 1);

        toolButton = new QToolButton(myReportWin);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setEnabled(false);

        gridLayout_2->addWidget(toolButton, 3, 4, 1, 1);

        pushButton_2 = new QPushButton(myReportWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 3, 5, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 4, 0, 1, 6);


        retranslateUi(myReportWin);

        QMetaObject::connectSlotsByName(myReportWin);
    } // setupUi

    void retranslateUi(QWidget *myReportWin)
    {
        myReportWin->setWindowTitle(QApplication::translate("myReportWin", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\321\202\321\207\320\265\321\202\320\260", nullptr));
        label->setText(QApplication::translate("myReportWin", "\320\236\321\202", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("myReportWin", "HH:mm", nullptr));
        pushButton_4->setText(QApplication::translate("myReportWin", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_2->setText(QApplication::translate("myReportWin", "\320\224\320\276", nullptr));
        timeEdit_2->setDisplayFormat(QApplication::translate("myReportWin", "HH:mm", nullptr));
        pushButton_3->setText(QApplication::translate("myReportWin", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 PDF", nullptr));
        pushButton->setText(QApplication::translate("myReportWin", "\320\223\321\200\321\203\320\277\320\277\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        toolButton->setText(QApplication::translate("myReportWin", "...", nullptr));
        pushButton_2->setText(QApplication::translate("myReportWin", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myReportWin: public Ui_myReportWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYREPORTWIN_H
