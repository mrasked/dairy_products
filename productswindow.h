#ifndef PRODUCTSWINDOW_H
#define PRODUCTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class productsWindow;
}

class productsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit productsWindow(QWidget *parent = nullptr);
    ~productsWindow();

private slots:
    void on_OkPushButton_clicked();

private:
    Ui::productsWindow *ui;
};

#endif // PRODUCTSWINDOW_H
