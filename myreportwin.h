#ifndef MYREPORTWIN_H
#define MYREPORTWIN_H

#include <QWidget>

#include <QPrinter>
#include <QTextDocument>

#include <QAxObject>
#include <QSqlQuery>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QSqlQueryModel>

#include "qcustomplot.h"

namespace Ui {
class myReportWin;
}

class myReportWin : public QWidget
{
    Q_OBJECT

public:
    explicit myReportWin(QWidget *parent = nullptr);
    ~myReportWin();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void slotRangeChanged (const QCPRange &newRange);

private:
    Ui::myReportWin *ui;
    QSqlQueryModel* model;
    QCustomPlot *customPlot;
    QCPGraph *graphic;
};

#endif // MYREPORTWIN_H
