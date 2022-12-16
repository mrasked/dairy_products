/********************************************************************************
** Form generated from reading UI file 'reportswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSWINDOW_H
#define UI_REPORTSWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportsWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTabWidget *ReportTypeTabWidget;
    QWidget *shiftTab;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_32;
    QComboBox *shiftTabCounterComboBox;
    QTableView *shiftTabTypeReportTableView;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_34;
    QComboBox *shiftTabShiftComboBox;
    QHBoxLayout *horizontalLayout_35;
    QDateEdit *ShiftTabFromDateEdit;
    QSpacerItem *horizontalSpacer_32;
    QWidget *dayTab;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_28;
    QComboBox *dayTabCounterComboBox;
    QTableView *dayTabTypeReportTableView;
    QLabel *label_29;
    QHBoxLayout *horizontalLayout_30;
    QHBoxLayout *horizontalLayout_31;
    QDateEdit *dayTabFromDateEdit;
    QSpacerItem *horizontalSpacer_28;
    QWidget *monthTab;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_24;
    QComboBox *monthTabCounterComboBox;
    QTableView *monthTabTypeReportTableView;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *monthTabMonthComboBox;
    QSpinBox *monthTabSpinBox;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_16;
    QWidget *quarterTab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_20;
    QComboBox *quarterTabCounterComboBox_5;
    QTableView *quarterTabTypeReportTableView;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_19;
    QComboBox *yearTabQuarterComboBox;
    QSpinBox *yearTabSpinBox_2;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_15;
    QWidget *yearTab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QComboBox *yearTabCounterComboBox;
    QTableView *yearTabTypeReportTableView;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *yearTabSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QWidget *periodTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *periodTabCounterComboBox;
    QTableView *periodTabTypeReportTableView;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *periodTabFromDateEdit;
    QSpacerItem *horizontalSpacer;
    QTimeEdit *periodTabFromTimeEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *periodTabToDateEdit;
    QSpacerItem *horizontalSpacer_2;
    QTimeEdit *periodTabToTimeEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QProgressBar *ReportProgressBar;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *SelectedGroupPushButton;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *pathExampleLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *CancelPushButton;
    QPushButton *CreatePushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReportsWindow)
    {
        if (ReportsWindow->objectName().isEmpty())
            ReportsWindow->setObjectName(QString::fromUtf8("ReportsWindow"));
        ReportsWindow->resize(532, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menuIcons/icons/reports.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReportsWindow->setWindowIcon(icon);
        centralwidget = new QWidget(ReportsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ReportTypeTabWidget = new QTabWidget(groupBox);
        ReportTypeTabWidget->setObjectName(QString::fromUtf8("ReportTypeTabWidget"));
        ReportTypeTabWidget->setTabBarAutoHide(false);
        shiftTab = new QWidget();
        shiftTab->setObjectName(QString::fromUtf8("shiftTab"));
        verticalLayout_10 = new QVBoxLayout(shiftTab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(0, -1, 0, -1);
        label_32 = new QLabel(shiftTab);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_37->addWidget(label_32);

        shiftTabCounterComboBox = new QComboBox(shiftTab);
        shiftTabCounterComboBox->setObjectName(QString::fromUtf8("shiftTabCounterComboBox"));

        horizontalLayout_37->addWidget(shiftTabCounterComboBox);

        horizontalLayout_37->setStretch(0, 3);
        horizontalLayout_37->setStretch(1, 12);

        verticalLayout_10->addLayout(horizontalLayout_37);

        shiftTabTypeReportTableView = new QTableView(shiftTab);
        shiftTabTypeReportTableView->setObjectName(QString::fromUtf8("shiftTabTypeReportTableView"));

        verticalLayout_10->addWidget(shiftTabTypeReportTableView);

        label_33 = new QLabel(shiftTab);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_10->addWidget(label_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, -1, -1, -1);
        shiftTabShiftComboBox = new QComboBox(shiftTab);
        shiftTabShiftComboBox->addItem(QString());
        shiftTabShiftComboBox->addItem(QString());
        shiftTabShiftComboBox->addItem(QString());
        shiftTabShiftComboBox->addItem(QString());
        shiftTabShiftComboBox->setObjectName(QString::fromUtf8("shiftTabShiftComboBox"));
        shiftTabShiftComboBox->setMinimumSize(QSize(40, 0));
        shiftTabShiftComboBox->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_34->addWidget(shiftTabShiftComboBox);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(0);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(0, -1, 20, -1);
        ShiftTabFromDateEdit = new QDateEdit(shiftTab);
        ShiftTabFromDateEdit->setObjectName(QString::fromUtf8("ShiftTabFromDateEdit"));
        ShiftTabFromDateEdit->setCalendarPopup(true);
        ShiftTabFromDateEdit->setDate(QDate(2012, 1, 1));

        horizontalLayout_35->addWidget(ShiftTabFromDateEdit);


        horizontalLayout_34->addLayout(horizontalLayout_35);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_32);


        verticalLayout_10->addLayout(horizontalLayout_34);

        ReportTypeTabWidget->addTab(shiftTab, QString());
        dayTab = new QWidget();
        dayTab->setObjectName(QString::fromUtf8("dayTab"));
        verticalLayout_9 = new QVBoxLayout(dayTab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, -1, 0, -1);
        label_28 = new QLabel(dayTab);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_33->addWidget(label_28);

        dayTabCounterComboBox = new QComboBox(dayTab);
        dayTabCounterComboBox->setObjectName(QString::fromUtf8("dayTabCounterComboBox"));

        horizontalLayout_33->addWidget(dayTabCounterComboBox);

        horizontalLayout_33->setStretch(0, 3);
        horizontalLayout_33->setStretch(1, 12);

        verticalLayout_9->addLayout(horizontalLayout_33);

        dayTabTypeReportTableView = new QTableView(dayTab);
        dayTabTypeReportTableView->setObjectName(QString::fromUtf8("dayTabTypeReportTableView"));

        verticalLayout_9->addWidget(dayTabTypeReportTableView);

        label_29 = new QLabel(dayTab);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_9->addWidget(label_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, -1, 20, -1);
        dayTabFromDateEdit = new QDateEdit(dayTab);
        dayTabFromDateEdit->setObjectName(QString::fromUtf8("dayTabFromDateEdit"));
        dayTabFromDateEdit->setCalendarPopup(true);
        dayTabFromDateEdit->setDate(QDate(2012, 1, 1));

        horizontalLayout_31->addWidget(dayTabFromDateEdit);


        horizontalLayout_30->addLayout(horizontalLayout_31);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_28);


        verticalLayout_9->addLayout(horizontalLayout_30);

        ReportTypeTabWidget->addTab(dayTab, QString());
        monthTab = new QWidget();
        monthTab->setObjectName(QString::fromUtf8("monthTab"));
        verticalLayout_8 = new QVBoxLayout(monthTab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(0, -1, 0, -1);
        label_24 = new QLabel(monthTab);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_29->addWidget(label_24);

        monthTabCounterComboBox = new QComboBox(monthTab);
        monthTabCounterComboBox->setObjectName(QString::fromUtf8("monthTabCounterComboBox"));

        horizontalLayout_29->addWidget(monthTabCounterComboBox);

        horizontalLayout_29->setStretch(0, 3);
        horizontalLayout_29->setStretch(1, 12);

        verticalLayout_8->addLayout(horizontalLayout_29);

        monthTabTypeReportTableView = new QTableView(monthTab);
        monthTabTypeReportTableView->setObjectName(QString::fromUtf8("monthTabTypeReportTableView"));

        verticalLayout_8->addWidget(monthTabTypeReportTableView);

        label_25 = new QLabel(monthTab);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_8->addWidget(label_25);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, -1, -1, -1);
        monthTabMonthComboBox = new QComboBox(monthTab);
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->addItem(QString());
        monthTabMonthComboBox->setObjectName(QString::fromUtf8("monthTabMonthComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(monthTabMonthComboBox->sizePolicy().hasHeightForWidth());
        monthTabMonthComboBox->setSizePolicy(sizePolicy);
        monthTabMonthComboBox->setMinimumSize(QSize(90, 0));
        monthTabMonthComboBox->setMaximumSize(QSize(40, 16777215));
        monthTabMonthComboBox->setToolTipDuration(-1);
        monthTabMonthComboBox->setMaxVisibleItems(6);
        monthTabMonthComboBox->setModelColumn(0);

        horizontalLayout_20->addWidget(monthTabMonthComboBox);

        monthTabSpinBox = new QSpinBox(monthTab);
        monthTabSpinBox->setObjectName(QString::fromUtf8("monthTabSpinBox"));
        monthTabSpinBox->setMinimum(2000);
        monthTabSpinBox->setMaximum(2050);
        monthTabSpinBox->setValue(2012);

        horizontalLayout_20->addWidget(monthTabSpinBox);

        label_15 = new QLabel(monthTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_20->addWidget(label_15);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_16);


        verticalLayout_8->addLayout(horizontalLayout_20);

        ReportTypeTabWidget->addTab(monthTab, QString());
        quarterTab = new QWidget();
        quarterTab->setObjectName(QString::fromUtf8("quarterTab"));
        verticalLayout_7 = new QVBoxLayout(quarterTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, -1, 0, -1);
        label_20 = new QLabel(quarterTab);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_25->addWidget(label_20);

        quarterTabCounterComboBox_5 = new QComboBox(quarterTab);
        quarterTabCounterComboBox_5->setObjectName(QString::fromUtf8("quarterTabCounterComboBox_5"));

        horizontalLayout_25->addWidget(quarterTabCounterComboBox_5);

        horizontalLayout_25->setStretch(0, 3);
        horizontalLayout_25->setStretch(1, 12);

        verticalLayout_7->addLayout(horizontalLayout_25);

        quarterTabTypeReportTableView = new QTableView(quarterTab);
        quarterTabTypeReportTableView->setObjectName(QString::fromUtf8("quarterTabTypeReportTableView"));

        verticalLayout_7->addWidget(quarterTabTypeReportTableView);

        label_21 = new QLabel(quarterTab);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_7->addWidget(label_21);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, -1, -1, -1);
        yearTabQuarterComboBox = new QComboBox(quarterTab);
        yearTabQuarterComboBox->addItem(QString());
        yearTabQuarterComboBox->addItem(QString());
        yearTabQuarterComboBox->addItem(QString());
        yearTabQuarterComboBox->addItem(QString());
        yearTabQuarterComboBox->setObjectName(QString::fromUtf8("yearTabQuarterComboBox"));
        sizePolicy.setHeightForWidth(yearTabQuarterComboBox->sizePolicy().hasHeightForWidth());
        yearTabQuarterComboBox->setSizePolicy(sizePolicy);
        yearTabQuarterComboBox->setMinimumSize(QSize(40, 0));
        yearTabQuarterComboBox->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_19->addWidget(yearTabQuarterComboBox);

        yearTabSpinBox_2 = new QSpinBox(quarterTab);
        yearTabSpinBox_2->setObjectName(QString::fromUtf8("yearTabSpinBox_2"));
        yearTabSpinBox_2->setMinimum(2000);
        yearTabSpinBox_2->setMaximum(2050);
        yearTabSpinBox_2->setValue(2012);

        horizontalLayout_19->addWidget(yearTabSpinBox_2);

        label_14 = new QLabel(quarterTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_19->addWidget(label_14);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_15);


        verticalLayout_7->addLayout(horizontalLayout_19);

        ReportTypeTabWidget->addTab(quarterTab, QString());
        yearTab = new QWidget();
        yearTab->setObjectName(QString::fromUtf8("yearTab"));
        verticalLayout_6 = new QVBoxLayout(yearTab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, -1, 0, -1);
        label_16 = new QLabel(yearTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_21->addWidget(label_16);

        yearTabCounterComboBox = new QComboBox(yearTab);
        yearTabCounterComboBox->setObjectName(QString::fromUtf8("yearTabCounterComboBox"));

        horizontalLayout_21->addWidget(yearTabCounterComboBox);

        horizontalLayout_21->setStretch(0, 3);
        horizontalLayout_21->setStretch(1, 12);

        verticalLayout_6->addLayout(horizontalLayout_21);

        yearTabTypeReportTableView = new QTableView(yearTab);
        yearTabTypeReportTableView->setObjectName(QString::fromUtf8("yearTabTypeReportTableView"));

        verticalLayout_6->addWidget(yearTabTypeReportTableView);

        label_17 = new QLabel(yearTab);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_6->addWidget(label_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, -1, -1, -1);
        yearTabSpinBox = new QSpinBox(yearTab);
        yearTabSpinBox->setObjectName(QString::fromUtf8("yearTabSpinBox"));
        yearTabSpinBox->setMinimum(2000);
        yearTabSpinBox->setMaximum(2050);
        yearTabSpinBox->setValue(2012);

        horizontalLayout_18->addWidget(yearTabSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_14);


        verticalLayout_6->addLayout(horizontalLayout_18);

        ReportTypeTabWidget->addTab(yearTab, QString());
        periodTab = new QWidget();
        periodTab->setObjectName(QString::fromUtf8("periodTab"));
        verticalLayout_3 = new QVBoxLayout(periodTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        label = new QLabel(periodTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        periodTabCounterComboBox = new QComboBox(periodTab);
        periodTabCounterComboBox->setObjectName(QString::fromUtf8("periodTabCounterComboBox"));

        horizontalLayout->addWidget(periodTabCounterComboBox);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 12);

        verticalLayout_3->addLayout(horizontalLayout);

        periodTabTypeReportTableView = new QTableView(periodTab);
        periodTabTypeReportTableView->setObjectName(QString::fromUtf8("periodTabTypeReportTableView"));

        verticalLayout_3->addWidget(periodTabTypeReportTableView);

        label_5 = new QLabel(periodTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(30, -1, -1, -1);
        label_4 = new QLabel(periodTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        periodTabFromDateEdit = new QDateEdit(periodTab);
        periodTabFromDateEdit->setObjectName(QString::fromUtf8("periodTabFromDateEdit"));
        periodTabFromDateEdit->setCalendarPopup(true);
        periodTabFromDateEdit->setDate(QDate(2012, 1, 1));

        horizontalLayout_3->addWidget(periodTabFromDateEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        periodTabFromTimeEdit = new QTimeEdit(periodTab);
        periodTabFromTimeEdit->setObjectName(QString::fromUtf8("periodTabFromTimeEdit"));
        periodTabFromTimeEdit->setCalendarPopup(false);

        horizontalLayout_3->addWidget(periodTabFromTimeEdit);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        label_3 = new QLabel(periodTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, 20, -1);
        periodTabToDateEdit = new QDateEdit(periodTab);
        periodTabToDateEdit->setObjectName(QString::fromUtf8("periodTabToDateEdit"));
        periodTabToDateEdit->setCalendarPopup(true);
        periodTabToDateEdit->setDate(QDate(2012, 1, 1));

        horizontalLayout_4->addWidget(periodTabToDateEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        periodTabToTimeEdit = new QTimeEdit(periodTab);
        periodTabToTimeEdit->setObjectName(QString::fromUtf8("periodTabToTimeEdit"));
        periodTabToTimeEdit->setTime(QTime(23, 59, 0));

        horizontalLayout_4->addWidget(periodTabToTimeEdit);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_6->setStretch(1, 10);
        horizontalLayout_6->setStretch(3, 1);
        horizontalLayout_6->setStretch(5, 10);

        verticalLayout_3->addLayout(horizontalLayout_6);

        ReportTypeTabWidget->addTab(periodTab, QString());

        verticalLayout->addWidget(ReportTypeTabWidget);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        ReportProgressBar = new QProgressBar(groupBox_2);
        ReportProgressBar->setObjectName(QString::fromUtf8("ReportProgressBar"));
        ReportProgressBar->setValue(24);
        ReportProgressBar->setTextVisible(false);
        ReportProgressBar->setInvertedAppearance(false);
        ReportProgressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_4->addWidget(ReportProgressBar);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(30, -1, 30, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        SelectedGroupPushButton = new QPushButton(groupBox);
        SelectedGroupPushButton->setObjectName(QString::fromUtf8("SelectedGroupPushButton"));

        horizontalLayout_8->addWidget(SelectedGroupPushButton);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        horizontalLayout_8->setStretch(0, 5);
        horizontalLayout_8->setStretch(1, 1);

        horizontalLayout_7->addLayout(horizontalLayout_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pathExampleLineEdit = new QLineEdit(groupBox);
        pathExampleLineEdit->setObjectName(QString::fromUtf8("pathExampleLineEdit"));
        pathExampleLineEdit->setEnabled(false);
        pathExampleLineEdit->setMaximumSize(QSize(25, 25));

        horizontalLayout_7->addWidget(pathExampleLineEdit);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        CancelPushButton = new QPushButton(groupBox);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));

        horizontalLayout_9->addWidget(CancelPushButton);

        CreatePushButton = new QPushButton(groupBox);
        CreatePushButton->setObjectName(QString::fromUtf8("CreatePushButton"));

        horizontalLayout_9->addWidget(CreatePushButton);


        horizontalLayout_7->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(groupBox);

        ReportsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReportsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 532, 21));
        ReportsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ReportsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ReportsWindow->setStatusBar(statusbar);

        retranslateUi(ReportsWindow);

        ReportTypeTabWidget->setCurrentIndex(0);
        monthTabMonthComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReportsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReportsWindow)
    {
        ReportsWindow->setWindowTitle(QApplication::translate("ReportsWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\276\321\202\321\207\321\221\321\202\320\276\320\262", nullptr));
        groupBox->setTitle(QString());
        label_32->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_33->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \321\201\320\274\320\265\320\275\321\203:", nullptr));
        shiftTabShiftComboBox->setItemText(0, QApplication::translate("ReportsWindow", "\320\243\321\202\321\200\320\265\320\275\320\275\321\217\321\217", nullptr));
        shiftTabShiftComboBox->setItemText(1, QApplication::translate("ReportsWindow", "\320\224\320\275\320\265\320\262\320\275\320\260\321\217", nullptr));
        shiftTabShiftComboBox->setItemText(2, QApplication::translate("ReportsWindow", "\320\222\320\265\321\207\320\265\321\200\320\275\321\217\321\217", nullptr));
        shiftTabShiftComboBox->setItemText(3, QApplication::translate("ReportsWindow", "\320\235\320\276\321\207\320\275\320\260\321\217", nullptr));

        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(shiftTab), QApplication::translate("ReportsWindow", "\320\241\320\274\320\265\320\275\320\260", nullptr));
        label_28->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_29->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \321\201\321\203\321\202\320\272\320\270:", nullptr));
        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(dayTab), QApplication::translate("ReportsWindow", "\320\241\321\203\321\202\320\272\320\270", nullptr));
        label_24->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_25->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \320\274\320\265\321\201\321\217\321\206:", nullptr));
        monthTabMonthComboBox->setItemText(0, QApplication::translate("ReportsWindow", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        monthTabMonthComboBox->setItemText(1, QApplication::translate("ReportsWindow", "\320\244\320\265\320\262\321\200\320\260\320\273\321\214", nullptr));
        monthTabMonthComboBox->setItemText(2, QApplication::translate("ReportsWindow", "\320\234\320\260\321\200\321\202", nullptr));
        monthTabMonthComboBox->setItemText(3, QApplication::translate("ReportsWindow", "\320\220\320\277\321\200\320\265\320\273\321\214", nullptr));
        monthTabMonthComboBox->setItemText(4, QApplication::translate("ReportsWindow", "\320\234\320\260\320\271", nullptr));
        monthTabMonthComboBox->setItemText(5, QApplication::translate("ReportsWindow", "\320\230\321\216\320\275\321\214", nullptr));
        monthTabMonthComboBox->setItemText(6, QApplication::translate("ReportsWindow", "\320\230\321\216\320\273\321\214", nullptr));
        monthTabMonthComboBox->setItemText(7, QApplication::translate("ReportsWindow", "\320\220\320\262\320\263\321\203\321\201\321\202", nullptr));
        monthTabMonthComboBox->setItemText(8, QApplication::translate("ReportsWindow", "\320\241\320\265\320\275\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthTabMonthComboBox->setItemText(9, QApplication::translate("ReportsWindow", "\320\236\320\272\321\202\321\217\320\261\321\200\321\214", nullptr));
        monthTabMonthComboBox->setItemText(10, QApplication::translate("ReportsWindow", "\320\235\320\276\321\217\320\261\321\200\321\214", nullptr));
        monthTabMonthComboBox->setItemText(11, QApplication::translate("ReportsWindow", "\320\224\320\265\320\272\320\260\320\261\321\200\321\214", nullptr));

#ifndef QT_NO_ACCESSIBILITY
        monthTabMonthComboBox->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        monthTabMonthComboBox->setCurrentText(QApplication::translate("ReportsWindow", "\320\257\320\275\320\262\320\260\321\200\321\214", nullptr));
        label_15->setText(QApplication::translate("ReportsWindow", "\320\263\320\276\320\264\320\260", nullptr));
        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(monthTab), QApplication::translate("ReportsWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        label_20->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_21->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \320\272\320\262\320\260\321\200\321\202\320\260\320\273:", nullptr));
        yearTabQuarterComboBox->setItemText(0, QApplication::translate("ReportsWindow", "I", nullptr));
        yearTabQuarterComboBox->setItemText(1, QApplication::translate("ReportsWindow", "II", nullptr));
        yearTabQuarterComboBox->setItemText(2, QApplication::translate("ReportsWindow", "III", nullptr));
        yearTabQuarterComboBox->setItemText(3, QApplication::translate("ReportsWindow", "IV", nullptr));

        yearTabQuarterComboBox->setCurrentText(QApplication::translate("ReportsWindow", "I", nullptr));
        label_14->setText(QApplication::translate("ReportsWindow", "\320\263\320\276\320\264\320\260", nullptr));
        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(quarterTab), QApplication::translate("ReportsWindow", "\320\232\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        label_16->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_17->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \320\263\320\276\320\264:", nullptr));
        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(yearTab), QApplication::translate("ReportsWindow", "\320\223\320\276\320\264", nullptr));
        label->setText(QApplication::translate("ReportsWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272:", nullptr));
        label_5->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202 \320\267\320\260 \320\277\320\265\321\200\320\270\320\276\320\264:", nullptr));
        label_4->setText(QApplication::translate("ReportsWindow", "\320\236\321\202", nullptr));
        periodTabFromTimeEdit->setDisplayFormat(QApplication::translate("ReportsWindow", "h:mm", nullptr));
        label_3->setText(QApplication::translate("ReportsWindow", "\320\264\320\276", nullptr));
        periodTabToTimeEdit->setDisplayFormat(QApplication::translate("ReportsWindow", "h:mm", nullptr));
        ReportTypeTabWidget->setTabText(ReportTypeTabWidget->indexOf(periodTab), QApplication::translate("ReportsWindow", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("ReportsWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276:", nullptr));
        SelectedGroupPushButton->setText(QApplication::translate("ReportsWindow", "\320\223\321\200\321\203\320\277\320\277\320\260 - \320\262\321\213\320\261\321\200\320\260\320\275\320\276 (0)", nullptr));
        pushButton->setText(QApplication::translate("ReportsWindow", "PDF", nullptr));
        CancelPushButton->setText(QApplication::translate("ReportsWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        CreatePushButton->setText(QApplication::translate("ReportsWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportsWindow: public Ui_ReportsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSWINDOW_H
