#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class about;
}

class about : public QWidget
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::about *ui;
    QPoint myPos;
};

#endif // ABOUT_H
