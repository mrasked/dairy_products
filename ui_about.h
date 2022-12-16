/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(526, 353);
        about->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuIcons/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        about->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));"));
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 411, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Lobster"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"border: 1px solod #555;\n"
"border-top-left-radius: 11px;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #126e9d, stop: 0.9 #333333,\n"
"stop: 0.01 #717171, stop: 0.4 #308dbd,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);\n"
"}"));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 10, 75, 31));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #ff0000;\n"
"border: 1px solid #555;\n"
"padding: 5px;\n"
"/* border-top-left-radius: 11px; */\n"
"border-top-right-radius: 11px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"}"));
        groupBox = new QGroupBox(about);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 501, 291));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: grey;\n"
"color: #333;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(100, 199, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(319, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid #000000;\n"
"border-radius: 5px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #dedede, stop: 0.5 #434343,\n"
"stop: 0.51 #000000, stop: 1 #656a6d);\n"
"color: #FFFFFF;\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #cfcccc, stop: 0.5 #333232,\n"
"stop: 0.51 #000000, stop: 1 #585c5f);\n"
"color: #00cc00;\n"
"}\n"
"\n"
"QPushButton:hower{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #cfcccc, stop: 0.5 #333232,\n"
"stop: 0.51 #000000, stop: 1 #585c5f);\n"
"color: #00cc00;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"border: none;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lobster"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QApplication::translate("about", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        label->setText(QApplication::translate("about", "      \320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        pushButton->setText(QApplication::translate("about", "X", nullptr));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("about", "\320\237\320\276\320\275\321\217\321\202\320\275\320\276", nullptr));
        label_2->setText(QApplication::translate("about", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">\320\222\320\276\321\200\320\276\320\275\320\265\320\266\321\201\320\272\320\270\320\271 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \321\202\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\203\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202</span></p><p><span style=\" font-size:10pt; color:#ffffff;\">\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202: \320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\321\213\321\205 \321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\271 \320\270</span></p><p><span style=\" font-size:10pt; color:#ffffff;\">\320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\275\320\276\320\271 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276"
                        "\321\201\321\202\320\270</span></p><p><span style=\" font-size:10pt; color:#ffffff;\">\320\232\320\260\321\204\320\265\320\264\321\200\320\260: \320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\275\321\213\321\205 \320\270\320\275\321\202\320\265\320\273\320\273\320\265\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\321\205 </span></p><p><span style=\" font-size:10pt; color:#ffffff;\">\321\202\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\271 \320\277\321\200\320\276\320\265\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217</span></p><p><span style=\" font-size:10pt; color:#ffffff;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\273 \320\232\321\203\320\274\320\265\320\275\320\272\320\276 \320\237\320\260\320\262\320\265\320\273 \320\240\320\276\320\274\320\260\320\275\320\276\320\262\320\270\321\207</span></p><p>"
                        "<span style=\" font-size:10pt; color:#ffffff;\">\320\235\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \321\203\321\207\320\265\320\261\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\265\320\272\321\202\320\260 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270 &quot;\320\234\320\236\320\233\320\222\320\225\320\241\320\242&quot;</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
