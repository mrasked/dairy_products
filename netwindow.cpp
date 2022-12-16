#include "netwindow.h"
#include "ui_netwindow.h"
#include "ipaddwindow.h"

#include <qdebug.h>
#include <cstdlib>

netWindow::netWindow(netSettings *netStruct, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::netWindow)
{
    ui->setupUi(this);
    this->netStruct = netStruct;

    QString portNumber = QString::number(netStruct->portNumber);
    ui->portNumberLineEdit->setText(portNumber);

    ui->anyIPCheckBox->setChecked(netStruct->anyIPAddr);
    netWindow::on_anyIPCheckBox_stateChanged();

    for (QString &str : netStruct->ipList)
    {
        ui->allowedIPListWidget->addItem(str);
    }

    ui->allowedIPListWidget->setSelectionMode(QAbstractItemView::MultiSelection);

}

netWindow::~netWindow()
{
    delete ui;
}

//запрос
//SELECT * FROM workingCopy1
//WHERE date BETWEEN '03-01-2012' AND '03-01-2012'
//AND time BETWEEN '00:00' AND '01:05'

void netWindow::on_startServerPushButton_clicked()
{
    ui->startServerPushButton->setChecked(true);
    ui->stopServerPushButton->setChecked(false);
}

void netWindow::on_stopServerPushButton_clicked()
{
    ui->startServerPushButton->setChecked(false);
    ui->stopServerPushButton->setChecked(true);
}


void netWindow::on_anyIPCheckBox_stateChanged()
{
    if (ui->anyIPCheckBox->isChecked())
    {
        ui->addIPPushButton->setEnabled(false);
        ui->deleteIPPushButton->setEnabled(false);
        ui->allowedIPListWidget->setEnabled(false);

    }
    else
    {
        ui->addIPPushButton->setEnabled(true);
        ui->deleteIPPushButton->setEnabled(true);
        ui->allowedIPListWidget->setEnabled(true);
    }
}




void netWindow::on_OK_clicked()
{
    bool netSettingsChanged = false;

    if (ui->portNumberLineEdit->text() != QString::number(netStruct->portNumber))
    {
        netSettingsChanged = true;
        //qDebug() << ui->portNumberLineEdit->text() << QString::number(netStruct->portNumber) << netSettingsChanged;
    }


    if (ui->anyIPCheckBox->isChecked() != netStruct->anyIPAddr)
    {
        netSettingsChanged = true;
        //qDebug() << ui->anyIPCheckBox->isChecked() << netStruct->anyIPAddr << netSettingsChanged;
    }


    QStringList tempStrList;
    for(int i = 0; i < ui->allowedIPListWidget->count(); ++i)
    {
        QListWidgetItem* item = ui->allowedIPListWidget->item(i);
        tempStrList.append(item->text());
    }

    tempStrList.sort();

    if (tempStrList.count() != netStruct->ipList.count())
    {
        //qDebug() << tempStrList.count()  << netStruct->ipList.count() << netSettingsChanged;
        netSettingsChanged = true;
    }
    else
    {
        for (int i=0; i<tempStrList.count(); i++)
        {
            if (tempStrList[i] != netStruct->ipList[i])
            {
                netSettingsChanged = true;
                //qDebug() << tempStrList[i] << netStruct->ipList[i] << netSettingsChanged;
                break;
            }
        }

    }


    if (netSettingsChanged)
    {
        netStruct->portNumber = ui->portNumberLineEdit->text().toInt();
        netStruct->anyIPAddr = ui->anyIPCheckBox->isChecked();
        netStruct->ipList = tempStrList;
        emit netSettingChanged();
    }

    close();
}


void netWindow::on_Close_clicked()
{
    close();
}



void netWindow::on_deleteIPPushButton_clicked()
{
    ui->allowedIPListWidget->setUpdatesEnabled(false);
    QModelIndexList indexes = ui->allowedIPListWidget->selectionModel()->selectedIndexes();
   // qSort(indexes);
    for (int i = indexes.count() - 1; i > -1; --i)
      ui->allowedIPListWidget->model()->removeRow(indexes.at(i).row());
    ui->allowedIPListWidget->setUpdatesEnabled(true);
}



void netWindow::on_addIPPushButton_clicked()
{
    IpAddWindow *ipaddwin = new IpAddWindow();
    ipaddwin->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    ipaddwin->statusBar()->setSizeGripEnabled(false);
    ipaddwin->show();
    connect(ipaddwin, &IpAddWindow::addIp, this, &netWindow::addNewIp);
}


void netWindow::addNewIp(QString ip)
{
    //qDebug() << ip;
    ui->allowedIPListWidget->addItem(ip);
}

