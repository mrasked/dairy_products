#include "testwindow.h"
#include "ui_testwindow.h"
//#include <QtSql/QSqlDatabase>
//#include <qsqlquery.h>
//#include <QSqlQueryModel>

#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>


testWindow::testWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testWindow)
{
    ui->setupUi(this);
}

testWindow::~testWindow()
{
    delete ui;
}

void testWindow::on_pushButton_clicked()
{
    logwin = new login();
    logwin->show();
}


void testWindow::on_pushButton_2_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-FCG28LF\\SQLEXPRESS;DATABASE=dayiry;");
    db.setUserName("dp");
    db.setPassword("123");
    mes = new QMessageBox();
    if(db.open()){
        mes->setText("Соеденилось");
    } else {
        mes->setText("Соеденение НЕ установлено");
    }

    mes->show();

//        db = QSqlDatabase::addDatabase("QODBC");
//        db.setHostName("127.0.0.1");
//        db.setDatabaseName("dayiry_prod");//workingCopy.dbf
//        db.setUserName("sa");
//        db.setPassword("12345");
//        if(!db.open()){
//            qDebug() << db.lastError().text();
//        }else{
//            qDebug() << "Success!";
//        }


//    // подключение через QMYSQL дайрвер
//    db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("127.0.0.1");
//    db.setDatabaseName("dayiry_prod");//workingCopy.dbf
//    db.setUserName("root");
//    db.setPassword("12345");
//    if(!db.open()){
//        qDebug() << db.lastError().text();
//    }else{
//        qDebug() << "Success!";
//    }

    // //////////////////////////////////////////////////////
    // подключение через QODBC драйвер
//    QString serverName = "LOCALHOST\\SQLEXPRESS";
//    //QString dbName = "dayiry_prod";
//    QString dbName = "dp"; //pas = "123";

//    db = QSqlDatabase::addDatabase("QODBC");
//    db.setConnectOptions();

//    QString dsn = QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(serverName).arg(dbName);
//    db.setDatabaseName(dsn);

//    if(db.open()){
//        qDebug() << "opened";

//        QSqlQueryModel *sqlModel = new QSqlQueryModel();
//        QSqlQuery *sqlQuery = new QSqlQuery(db);
//        //sqlQuery->prepare("select * from ProdctTable1");
//        sqlQuery->prepare("SELECT workingCopy.DATE, workingCopy.TIME, products.name FROM workingCopy JOIN products ON workingCopy.KOD = products.KOD WHERE workingCopy.DATE >= '2012-01-01' and workingCopy.DATE <= '2012-01-03'");
//        sqlQuery->exec();
//        sqlModel ->setQuery(*sqlQuery);
//        ui->tableView->setModel(sqlModel);

//        //db.close();
//     }else{
//        qDebug() << "error : " + db.lastError().text();
//    }
}


void testWindow::on_pushButton_3_clicked()
{
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
}

