#ifndef SCHEDULEWINDOW_H
#define SCHEDULEWINDOW_H

#include <QMainWindow>

namespace Ui {
class scheduleWindow;
}

class scheduleWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit scheduleWindow(QWidget *parent = nullptr);
    ~scheduleWindow();

private slots:
    void on_closePushButton_clicked();

private:
    Ui::scheduleWindow *ui;
};

#endif // SCHEDULEWINDOW_H
