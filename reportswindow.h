#ifndef REPORTSWINDOW_H
#define REPORTSWINDOW_H

#include <QMainWindow>

#include <QPrinter>
#include <QTextDocument>

#include <QAxObject>
#include <QSqlQuery>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QSqlQueryModel>

#include <QPrinter>
#include <QTextDocument>
#include <QMessageBox>

namespace Ui {
class ReportsWindow;
}

class ReportsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReportsWindow(QWidget *parent = nullptr);
    ~ReportsWindow();

    QMessageBox* mes;
    int monthInd = 1;
    int quarterInd = 1;
    int smenaInd = 1;

private slots:
    void on_CreatePushButton_clicked();

    void on_CancelPushButton_clicked();

    void on_SelectedGroupPushButton_clicked();

    void on_monthTabMonthComboBox_currentIndexChanged(int index);

    void on_yearTabQuarterComboBox_currentIndexChanged(int index);

    void on_shiftTabShiftComboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::ReportsWindow *ui;
    QSqlQueryModel* model;
};

#endif // REPORTSWINDOW_H
