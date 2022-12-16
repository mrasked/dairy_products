#include "schedulewindow.h"
#include "ui_schedulewindow.h"

scheduleWindow::scheduleWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::scheduleWindow)
{
    ui->setupUi(this);

    int tabWidth =  230;
    ui->deviceTypeTabWidget->setStyleSheet( ui->deviceTypeTabWidget->styleSheet() +
                                    "QTabBar::tab {"
                                    "width: " + QString::number(tabWidth) + "px; }" );
}

scheduleWindow::~scheduleWindow()
{
    delete ui;
}

void scheduleWindow::on_closePushButton_clicked()
{
    close();
}

