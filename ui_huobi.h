/********************************************************************************
** Form generated from reading UI file 'huobi.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUOBI_H
#define UI_HUOBI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_huobi
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox_2;
    QLabel *label_4;

    void setupUi(QWidget *huobi)
    {
        if (huobi->objectName().isEmpty())
            huobi->setObjectName("huobi");
        huobi->resize(408, 548);
        huobi->setMaximumSize(QSize(1000, 10000));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setBold(false);
        font.setItalic(false);
        huobi->setFont(font);
        huobi->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        centralWidget = new QWidget(huobi);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, -20, 411, 571));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 140, 291, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 340, 381, 21));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(20, 61, 291, 51));
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setMaximum(999999999.990000009536743);
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(20, 190, 291, 51));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"font:50px \"\345\256\213\344\275\223\";\n"
"\n"
"\n"
"}"));
        doubleSpinBox_2->setReadOnly(true);
        doubleSpinBox_2->setMaximum(999999999.990000009536743);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(20, 270, 291, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 370, 381, 21));

        retranslateUi(huobi);

        QMetaObject::connectSlotsByName(huobi);
    } // setupUi

    void retranslateUi(QWidget *huobi)
    {
        huobi->setWindowTitle(QCoreApplication::translate("huobi", "\346\213\211\350\203\257\350\256\241\347\256\227\345\231\250", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("huobi", "CNY", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("huobi", "EUR", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("huobi", "GBP", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("huobi", "JPY", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("huobi", "CAD", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("huobi", "USR", nullptr));

        label_3->setText(QCoreApplication::translate("huobi", "1 CNY = 0.1572 USD", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("huobi", "CNY", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("huobi", "EUR", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("huobi", "GBP", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("huobi", "JPY", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("huobi", "CAD", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("huobi", "USR", nullptr));

        label_4->setText(QCoreApplication::translate("huobi", "1 CNY = 0.1572 USD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class huobi: public Ui_huobi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUOBI_H
