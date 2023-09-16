#include "hangman.h"
#include "ui_hangman.h"

Hangman::Hangman(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Hangman)
{
    srand(time(0));
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QBrush blueBrush(Qt::blue);
       QPen blackpen(Qt::black);
       blackpen.setWidth(5);
    ran = rand() % 5;
        if (ran == 0){
            word = "DOG";
        }
        else if (ran == 1){
            word = "WORD";
        }
        else if (ran == 2){
            word = "DOOR";
        }
        else if (ran == 3){
            word = "WORK";
        }
        else if (ran == 4){
            word = "PIXEL";
        }
    b = word;
    x = word.length();
    z = word.length();
    for (int i = 0; i < word.length(); i++){
        w = w + "_";
    }
}

Hangman::~Hangman()
{
    delete ui;
}

int Hangman::check(QString y, int& x, QString& word){

    for (int i = 0; i < x; i++){
        if (y == word[i]){
            w[i] = word[i];
            i = x;

             return 1;
        }
    }

        return 2;
}

void Hangman::complete(){
    int a = check(y, x, word);
    if ( a == 1){
        for (int j = 0; j < x; j++){
        if (word[j] == y){
            word[j] = ' ';
            z--;
            j = x;
        }
    }
  }
}

void Hangman::lose(){
    QBrush blueBrush(Qt::blue);
       QPen blackpen(Qt::black);
       blackpen.setWidth(5);
    if (r == 5){
        ui->lineEdit->setText("Game Over, the word was: " + b);
        ui->lineEdit_2->setText("No Gusses Left");
        line6=scene->addLine(110,210,150,150,blackpen);//edo ymen
            line7=scene->addLine(110,210,70,150,blackpen);//edo shemal
    }
    if (r == 4){
        ui->lineEdit_2->setText("Gusses Left: 1");
        line4=scene->addLine(110,280,150,350,blackpen);//reglo ymen
        line5=scene->addLine(110,280,70,350,blackpen);//reglo shemal
    }
    if (r == 3){
        ui->lineEdit_2->setText("Gusses Left: 2");
        line8=scene->addLine(110,150,110,275,blackpen);
    }
    if (r == 2){
        ui->lineEdit_2->setText("Gusses Left: 3");
        ellipse=scene->addEllipse(75,75,75,75,blackpen,blueBrush);
    }
    if (r == 1){
        ui->lineEdit_2->setText("Gusses Left: 4");
        line=scene->addLine(0,0,0,400,blackpen);// 3amod
           line2=scene->addLine(0,0,110,0,blackpen);// horizontal 3amod
           line3=scene->addLine(110,0,110,70,blackpen);// down 3amod
    }
}

void Hangman::on_pushButton_clicked()
{
    y = ui->pushButton->text();
    if (check(y, x, word) == 1){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        r++;
        ui->pushButton->setText("");
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }

}

void Hangman::on_pushButton_15_clicked()
{
    y = ui->pushButton_15->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_15->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_20_clicked()
{
    y = ui->pushButton_20->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_20->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");

                u++;
   }
}

void Hangman::on_pushButton_21_clicked()
{
    y = ui->pushButton_21->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_21->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_26_clicked()
{
    y = ui->pushButton_26->text();
  if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_26->setText("");
        r++;
        lose();
    }
  if (z == 0){
      x = 0;
  }
  if (x == 0 && u == 0 && r < 5){
      ui->lineEdit->setText(ui->lineEdit->text() + " you won");
      ui->lineEdit_2->setText("Congratulations");
               u++;
  }
}

void Hangman::on_pushButton_2_clicked()
{
    y = ui->pushButton_2->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_2->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_11_clicked()
{
    y = ui->pushButton_11->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_11->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_19_clicked()
{
    y = ui->pushButton_19->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_19->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_22_clicked()
{
    y = ui->pushButton_22->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_22->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_27_clicked()
{
    y = ui->pushButton_27->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_27->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_3_clicked()
{
    y = ui->pushButton_3->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_3->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_14_clicked()
{
    y = ui->pushButton_14->text();

    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_14->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_18_clicked()
{
    y = ui->pushButton_18->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_18->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
            u++;
   }
}

void Hangman::on_pushButton_23_clicked()
{
    y = ui->pushButton_23->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_23->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_28_clicked()
{
    y = ui->pushButton_28->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_28->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_4_clicked()
{
    y = ui->pushButton_4->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_4->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
                u++;
   }
}

void Hangman::on_pushButton_13_clicked()
{
    y = ui->pushButton_13->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_13->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_16_clicked()
{
    y = ui->pushButton_16->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_16->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_24_clicked()
{
    y = ui->pushButton_24->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_24->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_29_clicked()
{
    y = ui->pushButton_29->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_29->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
                 u++;
    }
}

void Hangman::on_pushButton_5_clicked()
{
    y = ui->pushButton_5->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_5->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
        u++;
    }
}

void Hangman::on_pushButton_12_clicked()
{
    y = ui->pushButton_12->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_12->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
    u++;
   }
}

void Hangman::on_pushButton_17_clicked()
{
    y = ui->pushButton_17->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_17->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
         u++;
    }
}

void Hangman::on_pushButton_25_clicked()
{
    y = ui->pushButton_25->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_25->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
        u++;
   }
}

void Hangman::on_pushButton_30_clicked()
{
    y = ui->pushButton_30->text();
    if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5 && y != ""){
        ui->pushButton_30->setText("");
        r++;
        lose();
    }
    if (z == 0){
        x = 0;
    }
    if (x == 0 && u == 0 && r < 5){
        ui->lineEdit->setText(ui->lineEdit->text() + " you won");
        ui->lineEdit_2->setText("Congratulations");
         u++;
    }
}

void Hangman::on_pushButton_31_clicked()
{
    y = ui->pushButton_31->text();
   if (check(y, x, word) == 1 && r < 5){
        complete();
        ui->lineEdit->setText(w);
    }
    else if (check(y, x, word) == 2 && u == 0 && r < 5){
        ui->pushButton_31->setText("");
        r++;
        lose();
    }
   if (z == 0){
       x = 0;
   }
   if (x == 0 && u == 0 && r < 5){
       ui->lineEdit->setText(ui->lineEdit->text() + " you won");
       ui->lineEdit_2->setText("Congratulations");
    u++;
   }
}

