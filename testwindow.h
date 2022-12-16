#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>

//#include <QSqlError>
#include "login.h"
#include "ui_login.h"

namespace Ui {
class testWindow;
}

class testWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit testWindow(QWidget *parent = nullptr);
    ~testWindow();

    QMessageBox* mes;
    login* logwin;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

signals:
    void testButton();

private:
    Ui::testWindow *ui;
    QSqlDatabase db;
    QSqlQueryModel* model;
};

#endif // TESTWINDOW_H
