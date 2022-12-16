#include "reportswindow.h"
#include "ui_reportswindow.h"

ReportsWindow::ReportsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReportsWindow)
{
    ui->setupUi(this);
    int tabWidth =  81;
    ui->ReportTypeTabWidget->setStyleSheet( ui->ReportTypeTabWidget->styleSheet() +
                                    "QTabBar::tab {"
                                    "width: " + QString::number(tabWidth) + "px; }" );

    ui->ReportProgressBar->setValue(0);
    ui->pathExampleLineEdit->setText("C:/Qt_projects/dairy_products/result.html");
    ui->pathExampleLineEdit->setVisible(false);

    model = new QSqlQueryModel();
    model -> setQuery("SELECT * FROM workingCopyF");

    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->shiftTabTypeReportTableView ->setModel(model);
    ui->shiftTabTypeReportTableView ->resizeColumnsToContents();
    ui->shiftTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(15);
    ui->dayTabTypeReportTableView ->setModel(model);
    ui->dayTabTypeReportTableView ->resizeColumnsToContents();
    ui->dayTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(35);
    ui->monthTabTypeReportTableView ->setModel(model);
    ui->monthTabTypeReportTableView ->resizeColumnsToContents();
    ui->monthTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(55);
    ui->quarterTabTypeReportTableView ->setModel(model);
    ui->quarterTabTypeReportTableView ->resizeColumnsToContents();
    ui->quarterTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(75);
    ui->yearTabTypeReportTableView ->setModel(model);
    ui->yearTabTypeReportTableView ->resizeColumnsToContents();
    ui->yearTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(90);
    ui->periodTabTypeReportTableView ->setModel(model);
    ui->periodTabTypeReportTableView ->resizeColumnsToContents();
    ui->periodTabTypeReportTableView ->show();
    ui->ReportProgressBar->setValue(100);

}


ReportsWindow::~ReportsWindow()
{
    delete ui;
}

void ReportsWindow::on_CreatePushButton_clicked()
{
    ui->dayTabFromDateEdit->setCalendarPopup(true);

    QFile* file = new QFile();
    file->setFileName(ui->pathExampleLineEdit->text()); //связали объект с файлом
    file->open(QIODevice::WriteOnly); //открыли на только запись

    QTextStream in(file); //всё что кидаем в ин, оно должно переправляться в объект file

    in<<"<html><head></head><body><center>"+QString("Отчет");
    in<<"<table border=1><tr>";
    in<<"<td>"+QString("ид")+"</td>";
    in<<"<td>"+QString("дата")+"</td>";
    in<<"<td>"+QString("время")+"</td>";
    in<<"<td>"+QString("кол-во")+"</td>";
    in<<"<td>"+QString("код")+"</td>";
    in<<"<td>"+QString("ключ")+"</td>";
    in<<"<td>"+QString("доп")+"</td></tr>";

    QSqlQuery* query = new QSqlQuery();

    if(ui->ReportTypeTabWidget->currentIndex()==0){
        //Смена
    if(smenaInd==1){
        query->exec("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '06:00' AND '11:59' ");
    } else if (smenaInd==2){
        query->exec("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '12:00' AND '17:59' ");
    } else if (smenaInd==3){
        query->exec("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '18:00' AND '23:59' ");
    } else if (smenaInd==4){
        query->exec("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '00:00' AND '05:59' ");
    }}
    if(ui->ReportTypeTabWidget->currentIndex()==1){
        //День
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date = '"+ui->dayTabFromDateEdit->text()+"' ");

    }

    if(ui->ReportTypeTabWidget->currentIndex()==2){
        //Месяц
        if (monthInd==1 or monthInd==3 or monthInd==5 or monthInd==7 or monthInd==8 or monthInd==10 or monthInd==12){
            //31
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '31-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        }
        else if (monthInd==4 or monthInd==6 or monthInd==9 or monthInd==11){
            //30
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '30-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        } else if (monthInd==2){
            //28
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '28-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        }
    }

    if(ui->ReportTypeTabWidget->currentIndex()==3){
        //Квартал
        if(quarterInd==1){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-03-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==2){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-03-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-06-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==3){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-07-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-09-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==4){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-10-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-12-"+ui->yearTabSpinBox_2->text()+"' ");
        }
    }

    if(ui->ReportTypeTabWidget->currentIndex()==4){
        //Год
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox->text()+"' AND '"
                    "01-01-"+ui->yearTabSpinBox->text()+"' ");

    }
    if(ui->ReportTypeTabWidget->currentIndex()==5){
        //Период
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date = '"+ui->periodTabFromDateEdit->text()+"' AND time BETWEEN '"+ui->periodTabFromTimeEdit->text()+"' AND '23:59' "
                      " OR date BETWEEN dateadd(d,1,'"+ui->periodTabFromDateEdit->text()+"') AND dateadd(d,-1,'"+ui->periodTabToDateEdit->text()+"') "
                      " OR date = '"+ui->periodTabToDateEdit->text()+"' AND time BETWEEN '00:00' AND '"+ui->periodTabToTimeEdit->text()+"' ");

    }

    while (query->next())
    {
        in<<"<tr><td>";
        in<<query->value(0).toString();
        in<<"</td><td>";
        in<<query->value(1).toString();
        in<<"</td><td>";
        in<<query->value(2).toString();
        in<<"</td><td>";
        in<<query->value(3).toString();
        in<<"</td><td>";
        in<<query->value(4).toString();
        in<<"</td><td>";
        in<<query->value(5).toString();
        in<<"</td><td>";
        in<<query->value(6).toString();
        in<<"</td></tr>";
    }
    in<<"</table></center></body></html>";
    file->close();

    QAxObject* word = new QAxObject("Word.Application",this);
    word->setProperty("DisplayAlerts", false);
    word->setProperty("Visible", true);
    QAxObject* doc = word->querySubObject("Documents");
    doc->dynamicCall("Open(QVariant)", ui->pathExampleLineEdit->text());
}


void ReportsWindow::on_CancelPushButton_clicked()
{
    close();}


void ReportsWindow::on_SelectedGroupPushButton_clicked()
{
    ui->ReportProgressBar->setValue(1); // ==============================================
    // ЗАПРОС ЗА СМЕНУ
    model = new QSqlQueryModel();
    if(smenaInd==1){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '06:00' AND '11:59' ");
    } else if (smenaInd==2){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '12:00' AND '17:59' ");
    } else if (smenaInd==3){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '18:00' AND '23:59' ");
    } else if (smenaInd==4){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                            "time BETWEEN '00:00' AND '05:59' ");
    }
    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->shiftTabTypeReportTableView ->setModel(model);
    ui->shiftTabTypeReportTableView ->resizeColumnsToContents();
    ui->shiftTabTypeReportTableView ->show();
    // ВЫБОРКА

    ui->ReportProgressBar->setValue(24); //================================================
    // ЗАПРОС ЗА ДЕНЬ
    model = new QSqlQueryModel();
    model -> setQuery("SELECT * FROM workingCopyF "
                      "WHERE date = '"+ui->dayTabFromDateEdit->text()+"' ");

    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->dayTabTypeReportTableView ->setModel(model);
    ui->dayTabTypeReportTableView ->resizeColumnsToContents();
    ui->dayTabTypeReportTableView ->show();
    // ВЫБОРКА

    ui->ReportProgressBar->setValue(37); //====================================================
    // ЗАПРОС ЗА МЕСЯЦ
    model = new QSqlQueryModel();
    if (monthInd==1 or monthInd==3 or monthInd==5 or monthInd==7 or monthInd==8 or monthInd==10 or monthInd==12){
        //31
        model -> setQuery("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                           "AND '31-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
    }
    else if (monthInd==4 or monthInd==6 or monthInd==9 or monthInd==11){
        //30
        model -> setQuery("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                           "AND '30-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
    } else if (monthInd==2){
        //28
        model -> setQuery("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                           "AND '28-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
    }
    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->monthTabTypeReportTableView ->setModel(model);
    ui->monthTabTypeReportTableView ->resizeColumnsToContents();
    ui->monthTabTypeReportTableView ->show();
    // ВЫБОРКА

    ui->ReportProgressBar->setValue(59); //====================================================
    // ЗАПРОС ЗА КВАРТАЛ
    model = new QSqlQueryModel();
    if(quarterInd==1){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-03-"+ui->yearTabSpinBox_2->text()+"' ");
    }else if (quarterInd==2){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date BETWEEN '01-03-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-06-"+ui->yearTabSpinBox_2->text()+"' ");
    }else if (quarterInd==3){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date BETWEEN '01-07-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-09-"+ui->yearTabSpinBox_2->text()+"' ");
    }else if (quarterInd==4){
        model -> setQuery("SELECT * FROM workingCopyF "
                          "WHERE date BETWEEN '01-10-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-12-"+ui->yearTabSpinBox_2->text()+"' ");
    }
    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->quarterTabTypeReportTableView ->setModel(model);
    ui->quarterTabTypeReportTableView ->resizeColumnsToContents();
    ui->quarterTabTypeReportTableView ->show();
    // ВЫБОРКА

    ui->ReportProgressBar->setValue(79); //=================================================
    // ЗАПРОС ЗА ГОД
    model = new QSqlQueryModel();
    model -> setQuery("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox->text()+"' AND '"
                      "01-01-"+ui->yearTabSpinBox->text()+"' ");

    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->yearTabTypeReportTableView ->setModel(model);
    ui->yearTabTypeReportTableView ->resizeColumnsToContents();
    ui->yearTabTypeReportTableView ->show();
    // ВЫБОРКА

    ui->ReportProgressBar->setValue(89); //=======================================================
    // ЗАПРОС ЗА ПЕРИОД
    model = new QSqlQueryModel();
    model -> setQuery("SELECT * FROM workingCopyF "
                      "WHERE date = '"+ui->periodTabFromDateEdit->text()+"' AND time BETWEEN '"+ui->periodTabFromTimeEdit->text()+"' AND '23:59' "
                        " OR date BETWEEN dateadd(d,1,'"+ui->periodTabFromDateEdit->text()+"') AND dateadd(d,-1,'"+ui->periodTabToDateEdit->text()+"') "
                        " OR date = '"+ui->periodTabToDateEdit->text()+"' AND time BETWEEN '00:00' AND '"+ui->periodTabToTimeEdit->text()+"' ");

    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->periodTabTypeReportTableView ->setModel(model);
    ui->periodTabTypeReportTableView ->resizeColumnsToContents();
    ui->periodTabTypeReportTableView ->show();
    // ВЫБОРКА
    ui->ReportProgressBar->setValue(100); //========================================================
}

//Проработка месяцев в ComboBox за месяц
void ReportsWindow::on_monthTabMonthComboBox_currentIndexChanged(int index)
{
    monthInd=index+1;
}

//Проработка месяцев в ComboBox за квартал
void ReportsWindow::on_yearTabQuarterComboBox_currentIndexChanged(int index)
{
    quarterInd=index+1;
}


void ReportsWindow::on_shiftTabShiftComboBox_currentIndexChanged(int index)
{
    smenaInd=index+1;
}


void ReportsWindow::on_pushButton_clicked()
{
    QString str;

    str.append("<html><head></head><body><center>"+QString("Отчет PDF"));
    str.append("<table border=1><tr>");
    str.append("<td>"+QString("ид")+"</td>");
    str.append("<td>"+QString("дата")+"</td>");
    str.append("<td>"+QString("время")+"</td>");
    str.append("<td>"+QString("кол-во")+"</td>");
    str.append("<td>"+QString("код")+"</td>");
    str.append("<td>"+QString("ключ")+"</td>");
    str.append("<td>"+QString("доп")+"</td></tr>");

    QSqlQuery* query = new QSqlQuery();

    if(ui->ReportTypeTabWidget->currentIndex()==0)
    //Смена
    {
        if(smenaInd==1){
            query->exec("SELECT * FROM workingCopyF "
                              "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                                "time BETWEEN '06:00' AND '11:59' ");
        } else if (smenaInd==2){
            query->exec("SELECT * FROM workingCopyF "
                              "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                                "time BETWEEN '12:00' AND '17:59' ");
        } else if (smenaInd==3){
            query->exec("SELECT * FROM workingCopyF "
                              "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                                "time BETWEEN '18:00' AND '23:59' ");
        } else if (smenaInd==4){
            query->exec("SELECT * FROM workingCopyF "
                              "WHERE date = '"+ui->ShiftTabFromDateEdit->text()+"' AND "
                                "time BETWEEN '00:00' AND '05:59' ");
        }
    }
    if(ui->ReportTypeTabWidget->currentIndex()==1)
    //День
    {
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date = '"+ui->dayTabFromDateEdit->text()+"' ");
    }
    if(ui->ReportTypeTabWidget->currentIndex()==2)
    //Месяц
    {
        if (monthInd==1 or monthInd==3 or monthInd==5 or monthInd==7 or monthInd==8 or monthInd==10 or monthInd==12){
            //31
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '31-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        }
        else if (monthInd==4 or monthInd==6 or monthInd==9 or monthInd==11){
            //30
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '30-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        } else if (monthInd==2){
            //28
            query->exec("SELECT * FROM workingCopyF WHERE date BETWEEN '01-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' "
                               "AND '28-"+QString::number(monthInd)+"-"+ui->monthTabSpinBox->text()+"' ");
        }
    }
    if(ui->ReportTypeTabWidget->currentIndex()==3)
    //Квартал
    {
        if(quarterInd==1){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-03-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==2){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-03-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-06-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==3){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-07-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-09-"+ui->yearTabSpinBox_2->text()+"' ");
        }else if (quarterInd==4){
            query->exec("SELECT * FROM workingCopyF "
                      "WHERE date BETWEEN '01-10-"+ui->yearTabSpinBox_2->text()+"' "
                        "AND '01-12-"+ui->yearTabSpinBox_2->text()+"' ");
        }
    }
    if(ui->ReportTypeTabWidget->currentIndex()==4)
    //Год
    {
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date BETWEEN '01-01-"+ui->yearTabSpinBox->text()+"' AND '"
                    "01-01-"+ui->yearTabSpinBox->text()+"' ");
    }
    if(ui->ReportTypeTabWidget->currentIndex()==5)
    //Период
    {
        query->exec("SELECT * FROM workingCopyF "
                    "WHERE date = '"+ui->periodTabFromDateEdit->text()+"' AND time BETWEEN '"+ui->periodTabFromTimeEdit->text()+"' AND '23:59' "
                      " OR date BETWEEN dateadd(d,1,'"+ui->periodTabFromDateEdit->text()+"') AND dateadd(d,-1,'"+ui->periodTabToDateEdit->text()+"') "
                      " OR date = '"+ui->periodTabToDateEdit->text()+"' AND time BETWEEN '00:00' AND '"+ui->periodTabToTimeEdit->text()+"' ");
    }

    while (query->next())
    {
        str.append("<tr><td>");
        str.append(query->value(0).toString());
        str.append("</td><td>");
        str.append(query->value(1).toString());
        str.append("</td><td>");
        str.append(query->value(2).toString());
        str.append("</td><td>");
        str.append(query->value(3).toString());
        str.append("</td><td>");
        str.append(query->value(4).toString());
        str.append("</td><td>");
        str.append(query->value(5).toString());
        str.append("</td><td>");
        str.append(query->value(6).toString());
        str.append("</td></tr>");
    }

    str.append("</table></center></body></html>");

    QPrinter printer;
    printer.setOrientation(QPrinter::Portrait);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);

    QString path = QFileDialog::getSaveFileName(NULL,"Сохранить в PDF", "Отчёт", "PDF(*.pdf)");
    if(path.isEmpty()) return;

    printer.setOutputFileName(path);

    QTextDocument doc;
    doc.setHtml(str);
    doc.print(&printer);

    mes = new QMessageBox();
    mes->setText("Отчёт успешно сохранён");
    mes->show();
}

