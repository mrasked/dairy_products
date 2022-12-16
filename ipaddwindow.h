#ifndef IPADDWINDOW_H
#define IPADDWINDOW_H

#include <QMainWindow>

namespace Ui {
class IpAddWindow;
}

class IpAddWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit IpAddWindow(QWidget *parent = nullptr);
    ~IpAddWindow();

private slots:
    void on_CancelPushButton_clicked();
    void on_OkPushButton_clicked();

signals:
    void addIp (QString ipString);

private:
    Ui::IpAddWindow *ui;
};

#endif // IPADDWINDOW_H
