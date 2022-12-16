#include "ipaddwindow.h"
#include "ui_ipaddwindow.h"
#include <qvalidator.h>

IpAddWindow::IpAddWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IpAddWindow)
{
    ui->setupUi(this);

    QString ipRange = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])";
    QRegExp ipRegex ("^" + ipRange
                         + "\\." + ipRange
                         + "\\." + ipRange
                         + "\\." + ipRange + "$");
    QRegExpValidator *ipValidator = new QRegExpValidator(ipRegex, this);
    ui->IpLineEdit->setValidator(ipValidator);
}

IpAddWindow::~IpAddWindow()
{
    delete ui;
}

void IpAddWindow::on_CancelPushButton_clicked()
{
    close();
}


void IpAddWindow::on_OkPushButton_clicked()
{
    addIp(ui->IpLineEdit->text());
    close();
}

