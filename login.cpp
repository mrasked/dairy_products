#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit -> setText("DESKTOP-FCG28LF\\SQLEXPRESS");
    ui->lineEdit_2 -> setText("dayiry");
    ui->lineEdit_3 -> setText("dp");

    //скрытия пароля
    ui->lineEdit_4->setEchoMode(QLineEdit::Password); //прячет введеные символы
    mes = new QMessageBox();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";");
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());

    if(db.open()){
        mes->setText("Соеденилось");
    } else {
        mes->setText("Соеденение НЕ установлено");
    }

    mes->show();
}

