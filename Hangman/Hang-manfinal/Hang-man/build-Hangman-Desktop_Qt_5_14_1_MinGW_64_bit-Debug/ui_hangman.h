/********************************************************************************
** Form generated from reading UI file 'hangman.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANGMAN_H
#define UI_HANGMAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hangman
{
public:
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_26;
    QFrame *line_20;
    QFrame *line_17;
    QPushButton *pushButton_16;
    QPushButton *pushButton_5;
    QPushButton *pushButton_21;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_29;
    QFrame *line_3;
    QFrame *line_10;
    QFrame *line_25;
    QPushButton *pushButton_23;
    QFrame *line_14;
    QPushButton *pushButton_24;
    QPushButton *pushButton_13;
    QFrame *line_11;
    QFrame *line_32;
    QFrame *line_38;
    QPushButton *pushButton_14;
    QPushButton *pushButton_22;
    QPushButton *pushButton_30;
    QFrame *line_23;
    QFrame *line_13;
    QPushButton *pushButton_18;
    QPushButton *pushButton;
    QFrame *line_19;
    QFrame *line;
    QFrame *line_21;
    QPushButton *pushButton_15;
    QPushButton *pushButton_4;
    QFrame *line_39;
    QPushButton *pushButton_11;
    QFrame *line_24;
    QPushButton *pushButton_12;
    QFrame *line_15;
    QPushButton *pushButton_20;
    QFrame *line_35;
    QFrame *line_18;
    QFrame *line_4;
    QFrame *line_31;
    QFrame *line_12;
    QFrame *line_40;
    QFrame *line_9;
    QPushButton *pushButton_17;
    QFrame *line_29;
    QFrame *line_33;
    QFrame *line_28;
    QFrame *line_37;
    QFrame *line_16;
    QFrame *line_26;
    QFrame *line_34;
    QPushButton *pushButton_3;
    QFrame *line_30;
    QPushButton *pushButton_27;
    QFrame *line_22;
    QFrame *line_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_25;
    QPushButton *pushButton_19;
    QFrame *line_36;
    QFrame *line_41;
    QFrame *line_42;
    QFrame *line_43;
    QFrame *line_44;
    QFrame *line_45;
    QPushButton *pushButton_31;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Hangman)
    {
        if (Hangman->objectName().isEmpty())
            Hangman->setObjectName(QString::fromUtf8("Hangman"));
        Hangman->resize(1318, 631);
        graphicsView = new QGraphicsView(Hangman);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 21, 351, 581));
        gridLayoutWidget = new QWidget(Hangman);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(359, 29, 951, 461));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_26 = new QPushButton(gridLayoutWidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        pushButton_26->setFont(font);

        gridLayout->addWidget(pushButton_26, 0, 8, 1, 1);

        line_20 = new QFrame(gridLayoutWidget);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_20, 3, 8, 1, 1);

        line_17 = new QFrame(gridLayoutWidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_17, 3, 2, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setFont(font);

        gridLayout->addWidget(pushButton_16, 6, 4, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 8, 0, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setFont(font);

        gridLayout->addWidget(pushButton_21, 0, 6, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);
        pushButton_29->setFont(font);

        gridLayout->addWidget(pushButton_29, 6, 8, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 7, 0, 1, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 7, 8, 1, 1);

        line_25 = new QFrame(gridLayoutWidget);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_25, 1, 8, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setFont(font);

        gridLayout->addWidget(pushButton_23, 4, 6, 1, 1);

        line_14 = new QFrame(gridLayoutWidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_14, 5, 6, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);
        pushButton_24->setFont(font);

        gridLayout->addWidget(pushButton_24, 6, 6, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font);

        gridLayout->addWidget(pushButton_13, 6, 2, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 5, 0, 1, 1);

        line_32 = new QFrame(gridLayoutWidget);
        line_32->setObjectName(QString::fromUtf8("line_32"));
        line_32->setFrameShape(QFrame::VLine);
        line_32->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_32, 4, 3, 1, 1);

        line_38 = new QFrame(gridLayoutWidget);
        line_38->setObjectName(QString::fromUtf8("line_38"));
        line_38->setFrameShape(QFrame::VLine);
        line_38->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_38, 4, 5, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setFont(font);

        gridLayout->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_22 = new QPushButton(gridLayoutWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setFont(font);

        gridLayout->addWidget(pushButton_22, 2, 6, 1, 1);

        pushButton_30 = new QPushButton(gridLayoutWidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);
        pushButton_30->setFont(font);

        gridLayout->addWidget(pushButton_30, 8, 8, 1, 1);

        line_23 = new QFrame(gridLayoutWidget);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_23, 1, 4, 1, 1);

        line_13 = new QFrame(gridLayoutWidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_13, 5, 4, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setFont(font);

        gridLayout->addWidget(pushButton_18, 4, 4, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        line_19 = new QFrame(gridLayoutWidget);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_19, 3, 6, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 9, 4, 1, 1);

        line_21 = new QFrame(gridLayoutWidget);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_21, 1, 0, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setFont(font);

        gridLayout->addWidget(pushButton_15, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 6, 0, 1, 1);

        line_39 = new QFrame(gridLayoutWidget);
        line_39->setObjectName(QString::fromUtf8("line_39"));
        line_39->setFrameShape(QFrame::VLine);
        line_39->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_39, 6, 5, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFont(font);

        gridLayout->addWidget(pushButton_11, 2, 2, 1, 1);

        line_24 = new QFrame(gridLayoutWidget);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_24, 1, 6, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font);

        gridLayout->addWidget(pushButton_12, 8, 2, 1, 1);

        line_15 = new QFrame(gridLayoutWidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_15, 5, 8, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setFont(font);

        gridLayout->addWidget(pushButton_20, 0, 4, 1, 1);

        line_35 = new QFrame(gridLayoutWidget);
        line_35->setObjectName(QString::fromUtf8("line_35"));
        line_35->setFrameShape(QFrame::VLine);
        line_35->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_35, 0, 3, 1, 1);

        line_18 = new QFrame(gridLayoutWidget);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_18, 3, 4, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 7, 4, 1, 1);

        line_31 = new QFrame(gridLayoutWidget);
        line_31->setObjectName(QString::fromUtf8("line_31"));
        line_31->setFrameShape(QFrame::VLine);
        line_31->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_31, 6, 3, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 5, 2, 1, 1);

        line_40 = new QFrame(gridLayoutWidget);
        line_40->setObjectName(QString::fromUtf8("line_40"));
        line_40->setFrameShape(QFrame::VLine);
        line_40->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_40, 8, 5, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 7, 6, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setFont(font);

        gridLayout->addWidget(pushButton_17, 8, 4, 1, 1);

        line_29 = new QFrame(gridLayoutWidget);
        line_29->setObjectName(QString::fromUtf8("line_29"));
        line_29->setFrameShape(QFrame::VLine);
        line_29->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_29, 2, 1, 1, 1);

        line_33 = new QFrame(gridLayoutWidget);
        line_33->setObjectName(QString::fromUtf8("line_33"));
        line_33->setFrameShape(QFrame::VLine);
        line_33->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_33, 8, 3, 1, 1);

        line_28 = new QFrame(gridLayoutWidget);
        line_28->setObjectName(QString::fromUtf8("line_28"));
        line_28->setFrameShape(QFrame::VLine);
        line_28->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_28, 4, 1, 1, 1);

        line_37 = new QFrame(gridLayoutWidget);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setFrameShape(QFrame::VLine);
        line_37->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_37, 2, 5, 1, 1);

        line_16 = new QFrame(gridLayoutWidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_16, 3, 0, 1, 1);

        line_26 = new QFrame(gridLayoutWidget);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setFrameShape(QFrame::VLine);
        line_26->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_26, 8, 1, 1, 1);

        line_34 = new QFrame(gridLayoutWidget);
        line_34->setObjectName(QString::fromUtf8("line_34"));
        line_34->setFrameShape(QFrame::VLine);
        line_34->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_34, 2, 3, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 4, 0, 1, 1);

        line_30 = new QFrame(gridLayoutWidget);
        line_30->setObjectName(QString::fromUtf8("line_30"));
        line_30->setFrameShape(QFrame::VLine);
        line_30->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_30, 0, 1, 1, 1);

        pushButton_27 = new QPushButton(gridLayoutWidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);
        pushButton_27->setFont(font);

        gridLayout->addWidget(pushButton_27, 2, 8, 1, 1);

        line_22 = new QFrame(gridLayoutWidget);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_22, 1, 2, 1, 1);

        line_27 = new QFrame(gridLayoutWidget);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_27, 6, 1, 1, 1);

        pushButton_28 = new QPushButton(gridLayoutWidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);
        pushButton_28->setFont(font);

        gridLayout->addWidget(pushButton_28, 4, 8, 1, 1);

        pushButton_25 = new QPushButton(gridLayoutWidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);
        pushButton_25->setFont(font);

        gridLayout->addWidget(pushButton_25, 8, 6, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setFont(font);

        gridLayout->addWidget(pushButton_19, 2, 4, 1, 1);

        line_36 = new QFrame(gridLayoutWidget);
        line_36->setObjectName(QString::fromUtf8("line_36"));
        line_36->setFrameShape(QFrame::VLine);
        line_36->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_36, 0, 5, 1, 1);

        line_41 = new QFrame(gridLayoutWidget);
        line_41->setObjectName(QString::fromUtf8("line_41"));
        line_41->setFrameShape(QFrame::VLine);
        line_41->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_41, 0, 7, 1, 1);

        line_42 = new QFrame(gridLayoutWidget);
        line_42->setObjectName(QString::fromUtf8("line_42"));
        line_42->setFrameShape(QFrame::VLine);
        line_42->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_42, 2, 7, 1, 1);

        line_43 = new QFrame(gridLayoutWidget);
        line_43->setObjectName(QString::fromUtf8("line_43"));
        line_43->setFrameShape(QFrame::VLine);
        line_43->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_43, 4, 7, 1, 1);

        line_44 = new QFrame(gridLayoutWidget);
        line_44->setObjectName(QString::fromUtf8("line_44"));
        line_44->setFrameShape(QFrame::VLine);
        line_44->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_44, 6, 7, 1, 1);

        line_45 = new QFrame(gridLayoutWidget);
        line_45->setObjectName(QString::fromUtf8("line_45"));
        line_45->setFrameShape(QFrame::VLine);
        line_45->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_45, 8, 7, 1, 1);

        pushButton_31 = new QPushButton(Hangman);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setGeometry(QRect(740, 490, 185, 87));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);
        pushButton_31->setFont(font);
        lineEdit = new QLineEdit(Hangman);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(362, 491, 371, 81));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(Hangman);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(932, 491, 371, 81));
        QFont font2;
        font2.setPointSize(20);
        lineEdit_2->setFont(font2);

        retranslateUi(Hangman);

        QMetaObject::connectSlotsByName(Hangman);
    } // setupUi

    void retranslateUi(QDialog *Hangman)
    {
        Hangman->setWindowTitle(QCoreApplication::translate("Hangman", "Hangman", nullptr));
        pushButton_26->setText(QCoreApplication::translate("Hangman", "E", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Hangman", "R", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Hangman", "U", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Hangman", "D", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Hangman", "F", nullptr));
        pushButton_29->setText(QCoreApplication::translate("Hangman", "T", nullptr));
        pushButton_23->setText(QCoreApplication::translate("Hangman", "N", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Hangman", "S", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Hangman", "Q", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Hangman", "L", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Hangman", "I", nullptr));
        pushButton_30->setText(QCoreApplication::translate("Hangman", "Y", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Hangman", "M", nullptr));
        pushButton->setText(QCoreApplication::translate("Hangman", "A", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Hangman", "B", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Hangman", "P", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Hangman", "G", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Hangman", "V", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Hangman", "C", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Hangman", "W", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Hangman", "K", nullptr));
        pushButton_27->setText(QCoreApplication::translate("Hangman", "J", nullptr));
        pushButton_28->setText(QCoreApplication::translate("Hangman", "O", nullptr));
        pushButton_25->setText(QCoreApplication::translate("Hangman", "X", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Hangman", "H", nullptr));
        pushButton_31->setText(QCoreApplication::translate("Hangman", "Z", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Hangman", "Gusses left: 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hangman: public Ui_Hangman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANGMAN_H
