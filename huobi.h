#ifndef HUOBI_H
#define HUOBI_H

#include <QWidget>
#include <QNetworkReply>


namespace Ui {
class huobi;
}

class huobi : public QWidget {
    Q_OBJECT

public:
    explicit huobi(QWidget *parent = nullptr);
    ~huobi();

private slots:
    void on_doubleSpinBox_valueChanged(const QString &arg1);
    void on_comboBox_currentIndexChanged(int index);
    void on_comboBox_2_currentIndexChanged(int index);


    void on_doubleSpinBox_textChanged(const QString &arg1);


    void on_comboBox_activated(int index);


    void on_comboBox_2_activated(int index);

private:
    Ui::huobi *ui;
    double calc();
    void updateExchangeRates();

    QMap<QString, double> exchangeRates; // Store exchange rates

};
#endif // HUOBI_H
