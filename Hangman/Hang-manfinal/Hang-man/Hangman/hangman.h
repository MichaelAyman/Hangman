#ifndef HANGMAN_H
#define HANGMAN_H
#include <QGraphicsScene>
#include <QDialog>
#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <QtGui>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui { class Hangman; }
QT_END_NAMESPACE

class Hangman : public QDialog
{
    Q_OBJECT

public:
    Hangman(QWidget *parent = nullptr);
    ~Hangman();
    void complete();
        int check(QString y, int& x, QString& word);
        int getr();
        void lose();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

private:
    Ui::Hangman *ui;
protected:
    QGraphicsScene* scene;
    QGraphicsRectItem* rectangle,* rectangle2,* rectangle3, * rectangle4,* rectangle5,* rectangle6,* rectangle7,* rectangle8;
    QGraphicsEllipseItem* ellipse;
    QGraphicsLineItem* line, *line2,*line3, *line4,*line5, *line6,*line7, *line8;
    QString word, b;
    int x;
    int z;
    int u = 0, r = 0;
    int ran;
    QString y, w;
    
};

#endif // HANGMAN_H
