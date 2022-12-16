#ifndef NETWINDOW_H
#define NETWINDOW_H

#include <QMainWindow>
#include "commondatatypes.h"

namespace Ui {
class netWindow;
}

class netWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit netWindow(netSettings *netStruct, QWidget *parent = nullptr);
    ~netWindow();

private slots:
    void on_anyIPCheckBox_stateChanged();

    void on_Close_clicked();

    void on_OK_clicked();

    void on_startServerPushButton_clicked();

    void on_stopServerPushButton_clicked();

    void on_deleteIPPushButton_clicked();

    void on_addIPPushButton_clicked();

    void addNewIp(QString ip);

signals:
    void netSettingChanged();

private:
    Ui::netWindow *ui;
    netSettings *netStruct;
};

#endif // NETWINDOW_H
