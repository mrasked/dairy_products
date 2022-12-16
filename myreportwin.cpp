#include "myreportwin.h"
#include "ui_myreportwin.h"

myReportWin::myReportWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myReportWin)
{
    ui->setupUi(this);
    ui->lineEdit->setText("C:/Qt_projects/dairy_products/result.html");

    model = new QSqlQueryModel();
    model -> setQuery("SELECT * FROM workingCopyF");
    //QSqlTableModel
    //    model -> setTable("primer");
    //    model -> select();
    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();

//    ui->widget->plotLayout()->insertRow(0);
//    ui->widget->plotLayout()->addElement(0,0,new QCPPlotTitle(ui->widget, "График поступлений"));
}

myReportWin::~myReportWin()
{
    delete ui;
}

void myReportWin::on_toolButton_clicked()
{
    ui->lineEdit->setText(QFileDialog::getOpenFileName(0, "Выберите файл", "./", "*.html"));

}


void myReportWin::on_pushButton_clicked()
{
    model -> setQuery("SELECT * FROM workingCopy1 WHERE date BETWEEN '"+ui->dateEdit->text()+"' AND '"+ui->dateEdit_2->text()+"' "
                        "AND time BETWEEN '"+ui->timeEdit->text()+"' AND '"+ui->timeEdit_2->text()+"' ");

    model ->setHeaderData(0,Qt::Horizontal,"ид");
    model ->setHeaderData(1,Qt::Horizontal,"дата");
    model ->setHeaderData(2,Qt::Horizontal,"время");
    model ->setHeaderData(3,Qt::Horizontal,"количество");
    model ->setHeaderData(4,Qt::Horizontal,"код продукта");
    model ->setHeaderData(5,Qt::Horizontal,"ключ");
    model ->setHeaderData(6,Qt::Horizontal,"описание");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}


void myReportWin::on_pushButton_2_clicked()
{
    QFile* file = new QFile();
    file->setFileName(ui->lineEdit->text()); //связали объект с файлом
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
    query->exec("SELECT * FROM workingCopy1 WHERE date BETWEEN '"+ui->dateEdit->text()+"' AND '"+ui->dateEdit_2->text()+"' "
                    "AND time BETWEEN '"+ui->timeEdit->text()+"' AND '"+ui->timeEdit_2->text()+"' ");

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
    doc->dynamicCall("Open(QVariant)", ui->lineEdit->text());
}


void myReportWin::on_pushButton_3_clicked()
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
    query->exec("SELECT * FROM workingCopy1 WHERE date BETWEEN '"+ui->dateEdit->text()+"' AND '"+ui->dateEdit_2->text()+"' "
                 "AND time BETWEEN '"+ui->timeEdit->text()+"' AND '"+ui->timeEdit_2->text()+"' ");

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
}


void myReportWin::on_pushButton_4_clicked()
{
    customPlot = new QCustomPlot();
    ui->gridLayout->addWidget(customPlot,0,0,1,1);

    customPlot->setInteraction(QCP::iRangeZoom,true);
    customPlot->setInteraction(QCP::iRangeDrag,true);
    customPlot->axisRect()->setRangeDrag(Qt::Horizontal);
    customPlot->axisRect()->setRangeZoom(Qt::Horizontal);
    customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
    customPlot->xAxis->setDateTimeFormat("hh:mm");

    // Настраиваем шрифт по осям координат
    customPlot->xAxis->setTickLabelFont(QFont(QFont().family(), 8));
    customPlot->yAxis->setTickLabelFont(QFont(QFont().family(), 8));

    // Автоматическое масштабирование тиков по Оси X
    customPlot->xAxis->setAutoTickStep(true);

    // Делаем видимыми оси X и Y по верхней и правой границам графика,
    // но отключаем на них тики иподписи координат
    customPlot->xAxis2->setVisible(true);
    customPlot->yAxis2->setVisible(true);
    customPlot->xAxis2->setTicks(false);
    customPlot->yAxis2->setTicks(false);
    customPlot->xAxis2->setTickLabels(false);
    customPlot->yAxis2->setTickLabels(false);

    customPlot->yAxis->setTickLabelColor(QColor(Qt::red));// Красный цвет подписей тиков по Оси Y
    customPlot->legend->setVisible(true);// Включаем Легенду графика
    // Устанавливаем Легенду в левый верхний угол графика
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);

    // Инициализируем график и привязываем его к Осям
    graphic = new QCPGraph(customPlot->xAxis, customPlot->yAxis);
    customPlot->addPlottable(graphic); // Устанавливаем график на полотно
    graphic->setName("Доход, Р");      // Устанавливаем
    graphic->setPen(QPen(QColor(Qt::red))); // Устанавливаем цвет графика
    graphic->setAntialiased(false);    // Отключаем сглаживание, по ум. вкл
    graphic->setLineStyle(QCPGraph::lsImpulse);

    // Подключаем сигнал от Оси X об изменении видимого диапазона координат
    // к СЛОТу для переустановки формата времени оси
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)),
            this, SLOT(slotRangeChanged(QCPRange)));

    //Будем строить график с сегодняшнего дни и текущей секунды в будущее
    double now = QDateTime::currentDateTimeUtc().toTime_t();
    //Объявляем вектора времени и доходов
    QVector <double> time(400), income(400);

    srand(15); // Инициализируем генератор псевдослучайных чисел

    //Заполняем график значениями
    for (int i=0; i<400; i++)
    {
        time[i] = now + 3600*i;
        income[i] = qFabs(income[i-1]) + (i/50.0+1)*(rand()/(double)RAND_MAX-0.5);
    }

    graphic->setData(time, income); //Устанавливаем данные
    customPlot->rescaleAxes();      //Масштабируем график по данным
    customPlot->replot();           //Отрисовываем график
}

void myReportWin::slotRangeChanged (const QCPRange &newRange)
{
    customPlot->xAxis->setDateTimeFormat((newRange.size()<=86400)? "hh:mm" : "dd MMM yy");
}
