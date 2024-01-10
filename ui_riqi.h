/********************************************************************************
** Form generated from reading UI file 'riqi.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIQI_H
#define UI_RIQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_riqi
{
public:
    QWidget *centralWidget;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDateEdit *dateEdit_3;
    QSpinBox *spinBox;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_13;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QWidget *riqi)
    {
        if (riqi->objectName().isEmpty())
            riqi->setObjectName("riqi");
        riqi->resize(408, 548);
        riqi->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        riqi->setFont(font);
        riqi->setStyleSheet(QString::fromUtf8("font-size:15px;"));
        centralWidget = new QWidget(riqi);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, -20, 411, 571));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(20, 90, 110, 22));
        dateEdit_2 = new QDateEdit(centralWidget);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(150, 90, 110, 22));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 90, 111, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 121, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 50, 54, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 218, 121, 16));
        dateEdit_3 = new QDateEdit(centralWidget);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(20, 298, 110, 22));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(20, 338, 42, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 338, 21, 21));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(100, 338, 42, 22));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 338, 21, 21));
        spinBox_3 = new QSpinBox(centralWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(190, 338, 42, 22));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(250, 338, 21, 21));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 258, 89, 16));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(80, 258, 89, 16));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 390, 54, 20));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 428, 131, 51));

        retranslateUi(riqi);

        QMetaObject::connectSlotsByName(riqi);
    } // setupUi

    void retranslateUi(QWidget *riqi)
    {
        riqi->setWindowTitle(QCoreApplication::translate("riqi", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("riqi", "0\345\244\251", nullptr));
        label_2->setText(QCoreApplication::translate("riqi", "\346\227\245\346\234\237\344\271\213\351\227\264\347\233\270\351\232\224\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("riqi", "\345\267\256\345\200\274", nullptr));
        label_4->setText(QCoreApplication::translate("riqi", "\346\267\273\345\212\240\346\210\226\345\207\217\345\216\273\345\244\251\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("riqi", "\345\271\264", nullptr));
        label_6->setText(QCoreApplication::translate("riqi", "\346\234\210", nullptr));
        label_13->setText(QCoreApplication::translate("riqi", "\346\227\245", nullptr));
        radioButton->setText(QCoreApplication::translate("riqi", "\346\267\273\345\212\240", nullptr));
        radioButton_2->setText(QCoreApplication::translate("riqi", "\345\207\217\345\216\273", nullptr));
        label_14->setText(QCoreApplication::translate("riqi", "\346\227\245\346\234\237", nullptr));
        label_15->setText(QCoreApplication::translate("riqi", "2000-1-1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class riqi: public Ui_riqi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIQI_H
