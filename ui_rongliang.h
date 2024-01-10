/********************************************************************************
** Form generated from reading UI file 'rongliang.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RONGLIANG_H
#define UI_RONGLIANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rongliang
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_12;

    void setupUi(QWidget *rongliang)
    {
        if (rongliang->objectName().isEmpty())
            rongliang->setObjectName("rongliang");
        rongliang->resize(408, 548);
        rongliang->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        rongliang->setFont(font);
        rongliang->setStyleSheet(QString::fromUtf8("font-size:15px;"));
        centralWidget = new QWidget(rongliang);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, -10, 411, 571));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(20, 199, 291, 51));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"font:50px \"\345\256\213\344\275\223\";\n"
"color: black;\n"
"\n"
"}"));
        doubleSpinBox_2->setReadOnly(true);
        doubleSpinBox_2->setDecimals(8);
        doubleSpinBox_2->setMaximum(999999999.000000000000000);
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 130, 131, 22));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(20, 70, 291, 51));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("*{\n"
"font:50px \"\345\256\213\344\275\223\";\n"
"color: black;\n"
"\n"
"}"));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMaximum(999999999.000000000000000);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(20, 250, 131, 22));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(20, 500, 111, 51));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 380, 111, 51));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 440, 111, 51));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(140, 320, 111, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 440, 111, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(140, 380, 111, 51));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(260, 500, 111, 51));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 320, 111, 51));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(260, 320, 111, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 440, 111, 51));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 380, 111, 51));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(140, 500, 111, 51));

        retranslateUi(rongliang);

        QMetaObject::connectSlotsByName(rongliang);
    } // setupUi

    void retranslateUi(QWidget *rongliang)
    {
        rongliang->setWindowTitle(QCoreApplication::translate("rongliang", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("rongliang", "\346\257\253\345\215\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("rongliang", "\345\215\207", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\261\263", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\260\272", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\240\201", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("rongliang", "\345\223\201\350\204\261", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("rongliang", "\345\244\270\350\204\261", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("rongliang", "\345\212\240\344\273\221", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("rongliang", "\346\257\253\345\215\207", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("rongliang", "\345\215\207", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\261\263", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\350\213\261\345\260\272", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("rongliang", "\347\253\213\346\226\271\347\240\201", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("rongliang", "\345\223\201\350\204\261", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("rongliang", "\345\244\270\350\204\261", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("rongliang", "\345\212\240\344\273\221", nullptr));

        pushButton_16->setText(QCoreApplication::translate("rongliang", "<-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("rongliang", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("rongliang", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("rongliang", "8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rongliang", "2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("rongliang", "5", nullptr));
        pushButton_15->setText(QCoreApplication::translate("rongliang", "C", nullptr));
        pushButton_7->setText(QCoreApplication::translate("rongliang", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("rongliang", "9", nullptr));
        pushButton->setText(QCoreApplication::translate("rongliang", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rongliang", "4", nullptr));
        pushButton_12->setText(QCoreApplication::translate("rongliang", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rongliang: public Ui_rongliang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RONGLIANG_H
