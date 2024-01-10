#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJSEngine>
#include<QLabel>
#include "biaozhun.h"
#include "kexue.h"
#include "riqi.h"
#include "rongliang.h"
#include "huobi.h"
#include "chengxuyuan.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   QLabel* createTabLabel(const QString& text);

private:
    Ui::MainWindow *ui;

    bool tabsHidden;
    biaozhun *biaozhunView;
    kexue *kexueView;
};

#endif // MAINWINDOW_H
