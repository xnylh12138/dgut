#include "huobi.h"
#include "ui_huobi.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

#include "huobi.h"
#include "ui_huobi.h"
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

huobi::huobi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::huobi)
{
    ui->setupUi(this);

    exchangeRates = {
        {"CNY", 1.0}, // Adding CNY as the base currency
        {"USD", 0.1572},
        {"EUR", 0.1325},
        {"GBP", 0.1200},
        {"JPY", 17.23},
        {"CAD", 0.2000}
        // Add more currencies and their rates
    };

    connect(ui->doubleSpinBox, SIGNAL(valueChanged(const QString&)), this, SLOT(on_doubleSpinBox_valueChanged(const QString&)));
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_currentIndexChanged(int)));
    connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_2_currentIndexChanged(int)));

    updateExchangeRates();
}

huobi::~huobi()
{
    delete ui;
}

void huobi::on_doubleSpinBox_valueChanged(const QString & /*arg1*/)
{
    ui->doubleSpinBox_2->setValue(calc());
}

void huobi::on_comboBox_currentIndexChanged(int /*index*/)
{
    ui->doubleSpinBox_2->setValue(calc());
}

void huobi::on_comboBox_2_currentIndexChanged(int /*index*/)
{
    ui->doubleSpinBox_2->setValue(calc());
}

double huobi::calc() {
    QString currencyFrom = ui->comboBox->currentText();
    QString currencyTo = ui->comboBox_2->currentText();
    double amount = ui->doubleSpinBox->value();

    if (exchangeRates.contains(currencyFrom) && exchangeRates.contains(currencyTo)) {
        double rateFrom = exchangeRates[currencyFrom];
        double rateTo = exchangeRates[currencyTo];

        double convertedAmount = (amount / rateFrom) * rateTo;

        ui->label_3->setText("1 " + currencyFrom + " = " + QString::number(rateFrom, 'f', 4) + " CNY");
        ui->label_4->setText("1 " + currencyTo + " = " + QString::number(rateTo, 'f', 4) + " CNY");

        return convertedAmount;
    }

    return 0.0;
}

void huobi::updateExchangeRates() {
    // This function should update exchange rates from an API or another source
    // Here, we have static rates for demonstration
    // In a real application, you'd update the exchangeRates map dynamically
}



void huobi::on_doubleSpinBox_textChanged(const QString &arg1)
{
    ui->doubleSpinBox_2->setValue(calc());
}

