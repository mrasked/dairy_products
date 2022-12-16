#include "about.h"
#include "ui_about.h"
#include <QtGui>

about::about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);

//    this->setWindowFlags(Qt::FramelessWindowHint); //скрытие шапки формы
//    this->setAttribute(Qt::WA_TranslucentBackground); //задний фон формы прозрачный
}

about::~about()
{
    delete ui;
}

void about::on_pushButton_clicked()
{
    close();
}


void about::on_pushButton_2_clicked()
{
    close();
}

//если указатель мыши переместился при нажати ЛКМ
void about::mouseMoveEvent(QMouseEvent *e)
{
    if (myPos.x() >=0 && e->buttons() && Qt::LeftButton)
    {
        QPoint diff = e->pos() - myPos;
        QPoint newpos = this->pos() + diff;
        this->move(newpos);
    }
}

void about::mousePressEvent(QMouseEvent *e)
{
    myPos = e->pos();
}

void about::mouseReleaseEvent(QMouseEvent *)
{
    myPos = QPoint(-1,1);
}
