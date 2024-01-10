#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QPushButton>
#include<QVBoxLayout>
#include<QLabel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());

    ui->tabWidget->addTab(new biaozhun, tr("标准"));
    ui->tabWidget->addTab(new kexue, tr("科学"));
    ui->tabWidget->addTab(new chengxuyuan,tr("程序员"));
    ui->tabWidget->addTab(new riqi(),tr("日期"));
    ui->tabWidget->addTab(new rongliang,tr("容量"));
    ui->tabWidget->addTab(new huobi,tr("货币"));


}
/*MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());

    // 创建一个垂直布局
    QVBoxLayout *tabsLayout = new QVBoxLayout();
    tabsLayout->addWidget(new QLabel("标准"));
    tabsLayout->addWidget(new biaozhun);
    tabsLayout->addWidget(new QLabel("科学"));
    tabsLayout->addWidget(new kexue);
    tabsLayout->addWidget(new QLabel("程序员"));
    tabsLayout->addWidget(new chengxuyuan);
    tabsLayout->addWidget(new QLabel("日期"));
    tabsLayout->addWidget(new riqi());
    tabsLayout->addWidget(new QLabel("容量"));
    tabsLayout->addWidget(new rongliang);
    tabsLayout->addWidget(new QLabel("货币"));
    tabsLayout->addWidget(new huobi);


    // 创建一个小部件，将垂直布局添加到其中
    QWidget *tabsWidget = new QWidget();
    tabsWidget->setLayout(tabsLayout);

    // 隐藏这个小部件，将其添加到主窗口中
    tabsWidget->setVisible(false);
    setCentralWidget(tabsWidget);

    // 创建整合按钮
    QPushButton *toggleButton = new QPushButton("整合按钮", this);
    toggleButton->setCheckable(true); // 设置为可切换状态
    connect(toggleButton, &QPushButton::clicked, this, [=]() {
        tabsWidget->setVisible(!tabsWidget->isVisible()); // 切换小部件的可见性
    });

    // 将整合按钮放置在窗口上方的合适位置
    toggleButton->move(10, 10);
}
// 辅助函数：创建带有文本的标签
QLabel* MainWindow::createTabLabel(const QString& text) {
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignCenter); // 设置标签文本居中显示
    label->setStyleSheet("font-weight: bold;"); // 设置标签文本加粗
    return label;
}*/
MainWindow::~MainWindow()
{
    delete ui;
}
