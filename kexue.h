#ifndef KEXUE_H
#define KEXUE_H

#include <QWidget>
#include <QJSEngine>

namespace Ui {
class kexue;
}

class kexue : public QWidget
{
    Q_OBJECT

public:
    explicit kexue(QWidget *parent = nullptr);
    ~kexue();

private slots:

    void on_pushButton_36_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_textBrowser_textChanged();

    void on_pushButton_22_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_28_clicked();

private:
    Ui::kexue *ui;

    void input(QString num);

    void shuangMu(QString fuhao);

    QString str= "";
    bool isFinish = false;
};

#endif // KEXUE_H
