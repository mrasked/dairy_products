#include "productswindow.h"
#include "ui_productswindow.h"

productsWindow::productsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::productsWindow)
{
    ui->setupUi(this);
}

productsWindow::~productsWindow()
{
    delete ui;
}

void productsWindow::on_OkPushButton_clicked()
{
    close();
}

