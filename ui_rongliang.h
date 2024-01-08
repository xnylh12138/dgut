/********************************************************************************
** Form generated from reading UI file 'rongliang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
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
        rongliang->setStyleSheet(QString::fromUtf8("*{\n"
"font:15px \"\345\256\213\344\275\223\";\n"
"color: rgb(250, 250, 250);\n"
"selection-background-color: rgb(255, 255, 255);/*\351\200\211\344\270\255\346\226\207\346\234\254*/\n"
"selection-color: rgb(0, 0, 0);\n"
"outline:none;/*\347\204\246\347\202\271\346\241\206*/\n"
"}\n"
"#centralWidget{\n"
"background-color: rgb(80, 80, 80);\n"
"border-bottom:5px solid rgb(20, 20, 20);\n"
"}\n"
"/*\345\205\266\344\273\226(\346\216\247\344\273\266\345\205\254\345\205\261\346\240\267\345\274\217\345\234\250\346\234\200\345\220\216)*/\n"
"\n"
"/*tab 1\344\270\255\346\214\211\351\222\256\347\244\272\344\276\213*/\n"
"#btnHoverOrange{\n"
"border-color:rgb(255, 170, 0);\n"
"}\n"
"#btnPressOrange{\n"
"color:black;\n"
"border-color: rgb(128, 128, 128);\n"
"background-color:rgb(255, 170, 0);\n"
"}\n"
"#btnHoverBlue{\n"
"border-color:rgb(0, 170, 255);\n"
"}\n"
"#btnPressBlue{\n"
"color:black;\n"
"border-color: rgb(128, 128, 128);\n"
"background-color:rgb(0, 170, 255);\n"
"}\n"
"/*tab 1\344\270\255\345\213\276\351\200\211\346"
                        "\241\206\347\244\272\344\276\213*/\n"
"#checkHoverOrange{\n"
"color: rgb(255, 170, 0);\n"
"}\n"
"#checkHoverOrange::indicator{\n"
"border-image: url(:/img/check_orange.png);\n"
"}\n"
"#checkCheckOrange::indicator{\n"
"border-image: url(:/img/checked_orange.png);\n"
"}\n"
"#checkHoverBlue{\n"
"color: rgb(0, 170, 255);\n"
"}\n"
"#checkHoverBlue::indicator{\n"
"border-image: url(:/img/check_blue.png);\n"
"}\n"
"#checkCheckBlue::indicator{\n"
"border-image: url(:/img/checked_blue.png);\n"
"}\n"
"#checkHoverGreen{\n"
"color: rgb(0, 255, 127);\n"
"}\n"
"#checkHoverGreen::indicator{\n"
"border-image: url(:/img/check_green.png);\n"
"}\n"
"#checkCheckGreen::indicator{\n"
"border-image: url(:/img/checked_green.png);\n"
"}\n"
"/*tab1 \344\270\213\346\213\211\346\241\206\347\244\272\344\276\213*/\n"
"#comboHover{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"#comboHover::down-arrow{\n"
"border-image: url(:/img/down_orange.png);\n"
"}\n"
"/*tab 1\347\274\226\350\276\221\346\241\206\347\244\272\344\276\213*/\n"
"#editHov"
                        "er{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"/*tab 1\346\225\260\345\255\227\346\241\206\347\244\272\344\276\213*/\n"
"#spinHoverOrange{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"#spinHoverOrange::up-button{\n"
"border-image: url(:/img/up_orange.png);\n"
"}\n"
"#spinHoverBlue{\n"
"border:1px solid rgb(0, 170, 255);\n"
"}\n"
"#spinHoverBlue::up-button{\n"
"border-image: url(:/img/up_blue.png);\n"
"}\n"
"/*\350\207\252\345\256\232\344\271\211\346\214\211\351\222\256\346\240\217*/\n"
"#toolBar{\n"
"background-color: rgb(20, 20, 20);\n"
"border-bottom:2px solid rgb(0, 170, 255);\n"
"}\n"
"#toolBar QPushButton{\n"
"color: rgb(250, 250, 250);\n"
"border:0;\n"
"border-radius:0;\n"
"background-color: transparent;\n"
"}\n"
"#toolBar QPushButton:hover{\n"
"color:rgb(255, 170, 0);\n"
"background-color: rgba(255, 255, 255, 50);\n"
"}\n"
"#toolBar QPushButton:pressed{\n"
"background-color: rgba(255, 255, 255, 80);\n"
"}\n"
"QPushButton#btnSet{\n"
"background-image: url(:/img/set_gray.png);\n"
"background-rep"
                        "eat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton#btnSet:hover{\n"
"background-image: url(:/img/set_orange.png);\n"
"}\n"
"QPushButton#btnMin{\n"
"background-image: url(:/img/min_gray.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton#btnMin:hover{\n"
"background-image: url(:/img/min_orange.png);\n"
"}\n"
"QPushButton#btnMax{\n"
"background-image: url(:/img/max_gray.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton#btnMax:hover{\n"
"background-image: url(:/img/max_orange.png);\n"
"}\n"
"QPushButton#btnClose{\n"
"background-image: url(:/img/close_gray.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton#btnClose:hover{\n"
"background-image: url(:/img/close_red.png);\n"
"}\n"
"\n"
"/*ToolBox*/\n"
"QToolBox{\n"
"background-color: rgb(80, 80, 80);/*\350\203\214\346\231\257\350\211\262-\347\251\272\351\232\231\351\242\234\350\211\262*/\n"
"border"
                        ":1px solid rgb(128, 128, 128);\n"
"}\n"
"QToolBox QWidget{/*tab\351\241\265*/\n"
"background-color: rgb(80, 80, 80);\n"
"}\n"
"QToolBox>QAbstractButton{/*\346\240\207\351\242\230\346\240\217*/\n"
"min-height:30px;\n"
"}\n"
"QToolBox::tab{\n"
"background-color:rgb(40, 40, 40);\n"
"}\n"
"QToolBox::tab:hover{\n"
"color:black;\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"QToolBox::tab:selected{\n"
"color:rgb(255, 170, 0);\n"
"}\n"
"QToolBox::tab:selected:hover{\n"
"color:black;\n"
"}\n"
"/*\345\210\206\350\243\202\345\231\250*/\n"
"QSplitter::handle{\n"
"background-color: rgb(60, 60, 60);\n"
"margin:2px;\n"
"}\n"
"/*\346\273\232\345\212\250\345\214\272\345\237\237*/\n"
"QScrollArea{\n"
"border:0;\n"
"background-color: transparent;\n"
"}\n"
"/*\346\273\232\345\212\250\346\235\241 */\n"
"QScrollBar:vertical{/*\347\253\226\345\220\221*/\n"
"width:20px;\n"
"padding:0 3px;\n"
"margin:0;\n"
"background-color:transparent;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{\n"
"background-color: tr"
                        "ansparent;\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"width:10px;\n"
"min-height:20px;\n"
"margin:20px 0;\n"
"background-color:rgb(100, 100, 100);\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"QScrollBar::add-line:vertical{\n"
"height:20px;\n"
"width:20px;\n"
"subcontrol-position:bottom;\n"
"border-image: url(:/img/down2_white.png);\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"height:20px;\n"
"width:20px;\n"
"subcontrol-position:top;\n"
"border-image: url(:/img/up2_white.png);\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"border-image: url(:/img/up2_orange.png);\n"
"}\n"
"QScrollBar::add-line:vertical:hover{\n"
"border-image: url(:/img/down2_orange.png);\n"
"}\n"
"QScrollBar:horizontal{/*\346\250\252\345\220\221*/\n"
"height:20px;\n"
"padding:3px;\n"
"margin:0;\n"
"background-color:transparent;\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal{\n"
"background-color: transparent;\n"
"}\n"
"QScrollBar::handle:horizontal{\n"
"height:10"
                        "px;\n"
"min-width:20px;\n"
"margin:0 20px;\n"
"background-color:rgb(100, 100, 100);\n"
"}\n"
"QScrollBar::handle:horizontal:hover{\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"QScrollBar::add-line:horizontal{\n"
"height:20px;\n"
"width:20px;\n"
"subcontrol-position:right;\n"
"border-image: url(:/img/right2_white.png);\n"
"}\n"
"QScrollBar::sub-line:horizontal{\n"
"height:20px;\n"
"width:20px;\n"
"subcontrol-position:left;\n"
"border-image: url(:/img/left2_white.png);\n"
"}\n"
"QScrollBar::add-line:horizontal:hover{\n"
"border-image: url(:/img/right2_orange.png);\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover{\n"
"border-image: url(:/img/left2_orange.png);\n"
"}\n"
"/*TabWidget*/\n"
"QTabWidget{\n"
"}\n"
"QTabWidget>QWidget>QWidget{/*tab\351\241\265*/\n"
"background-color: rgb(80, 80, 80);\n"
"}\n"
"QTabWidget::tab-bar{\n"
"alignment:left;/*tab\344\275\215\347\275\256*/\n"
"}\n"
"QTabWidget::pane { /*\345\206\205\345\256\271\345\214\272\345\237\237*/\n"
"background-color: rgb(80, 80, 80);/*\350\203\214\346"
                        "\231\257\350\211\262-\347\251\272\351\232\231\351\242\234\350\211\262*/\n"
"border:1px solid rgb(128, 128, 128);\n"
"}\n"
"QTabBar{\n"
"color:white;\n"
"background-color:transparent;\n"
"}\n"
"QTabBar::tab{/*\351\241\265\347\255\276*/\n"
"min-height:30px;\n"
"width:120px;\n"
"border-top-left-radius:20px;\n"
"border-bottom-right-radius:20px;\n"
"margin-right:1px;\n"
"margin-bottom:1px;\n"
"background-color:rgb(40, 40, 40);\n"
"}\n"
"QTabBar::tab:hover{\n"
"color:black;\n"
"background-color: rgb(255, 170, 0);\n"
"border-bottom-right-radius:0px;\n"
"}\n"
"QTabBar::tab:selected{\n"
"color:rgb(255, 170, 0);\n"
"border-bottom-right-radius:0px;\n"
"}\n"
"QTabBar::tab:selected:hover{\n"
"color:black;\n"
"}\n"
"QTabBar::tear{/*\351\200\211\351\241\271\350\277\207\345\244\232\346\227\266\347\232\204\343\200\202\343\200\202\343\200\202*/\n"
"imag:;\n"
"}\n"
"QTabBar::scroller{\n"
"width:60px;\n"
"}\n"
"/*\346\226\207\346\234\254\346\241\206*/\n"
"QTextEdit{\n"
"color:white;\n"
"border:1px solid rgb(128, 128, 128);\n"
"ba"
                        "ckground-color: rgb(90, 90, 90);\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"color:white;\n"
"border:1px solid rgb(128, 128, 128);\n"
"background-color: rgb(90, 90, 90);\n"
"}\n"
"\n"
"QDateEdit{\n"
"color:white;\n"
"border:1px solid rgb(128, 128, 128);\n"
"background-color: rgb(90, 90, 90);\n"
"}\n"
"\n"
"/*\346\214\211\351\222\256*/\n"
"QPushButton{\n"
"color:rgb(250, 250, 250);\n"
"border:1px solid rgb(128, 128, 128);\n"
"background-color: rgb(40 ,40 ,40);\n"
"border-radius:4px;\n"
"}\n"
"QPushButton:hover{\n"
"border-color:rgb(255, 170, 0);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 170, 0);\n"
"border-color: rgb(128, 128, 128);\n"
"color:black;\n"
"}\n"
"QPushButton:checked{\n"
"color: rgb(0, 255, 127);\n"
"border-color: rgb(0, 255, 127);\n"
"background-image: url(:/img/right3_green.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center left;\n"
"}\n"
"QPushButton:disabled{\n"
"color: rgb(230, 230, 230);\n"
"background-color: rgb(150, 150, 150);\n"
"}\n"
"QPushButton:checked:press"
                        "ed{\n"
"color:black;\n"
"}\n"
"QPushButton:checked:disabled{\n"
"color: rgb(230, 230, 230);\n"
"border-color: rgb(128, 128, 128);\n"
"background-color: rgb(150, 150, 150);\n"
"background-image: url(:/img/right3_white.png);\n"
"}\n"
"/*\345\213\276\351\200\211\346\241\206*/\n"
"QCheckBox{\n"
"margin-left:5px;\n"
"spacing:3px;/*\347\202\271\345\207\273\346\241\206\344\270\216\346\226\207\345\255\227\350\267\235\347\246\273*/\n"
"color: rgb(250, 250, 250);\n"
"}\n"
"QCheckBox:hover{\n"
"color: rgb(0, 255, 127);\n"
"}\n"
"QCheckBox:disabled{\n"
"color: rgb(230, 230, 230);\n"
"}\n"
"QCheckBox::indicator{/*\347\202\271\345\207\273\346\241\206*/\n"
"width:20px;\n"
"height:20px;\n"
"}\n"
"QCheckBox::indicator:unchecked{/*\345\217\257\346\267\273\345\212\240\346\234\252\347\202\271\345\207\273\346\227\266\347\202\271\345\207\273\345\214\272\345\237\237\345\233\276\347\211\207*/\n"
"border-image: url(:/img/check_white.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:hover{\n"
"border-image: url(:/img/check_green.png);\n"
""
                        "}\n"
"QCheckBox::indicator:unchecked:disabled{\n"
"border-image: url(:/img/check_white.png);\n"
"}\n"
"QCheckBox::indicator:checked{/*\347\202\271\345\207\273\346\227\266\345\214\272\345\237\237\346\240\267\345\274\217*/\n"
"border-image: url(:/img/checked_green.png);\n"
"}\n"
"QCheckBox::indicator:checked:hover{\n"
"border-image: url(:/img/checked_green.png);\n"
"}\n"
"QCheckBox::indicator:checked:disabled{\n"
"border-image: url(:/img/checked_white.png);\n"
"}\n"
"QCheckBox::indicator:indeterminate{/*\345\215\212\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"}\n"
"/*\344\270\213\346\213\211\345\210\227\350\241\250*/\n"
"QComboBox{\n"
"padding-left: 5px;\n"
"padding-right: 2px;\n"
"color:rgb(250 ,250 ,250);\n"
"border:1px solid rgb(128, 128, 128);\n"
"background-color:  rgb(100 ,100 ,100);\n"
"}\n"
"QComboBox:hover{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"QComboBox:disabled{\n"
"color: rgb(230, 230, 230);\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"QComboBox:editable{\n"
"background-col"
                        "or:rgb(100, 100, 100);\n"
"}\n"
"QComboBox:editable:disabled{\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"QComboBox QAbstractItemView{\n"
"background-color:rgb(110, 110, 110);\n"
"}\n"
"QComboBox QAbstractItemView::item{/*\351\234\200\350\246\201\344\273\243\347\240\201\344\270\255-&gt;setView(new QListView(this));*/\n"
"height:26px;\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"}\n"
"QComboBox QAbstractItemView::item:hover{\n"
"color:black;\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"QComboBox QAbstractItemView::item:selected{\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"QComboBox::drop-down {\n"
"width:20px;\n"
"height:20px;\n"
"subcontrol-position: center right;\n"
"right:2px;\n"
"border:0;\n"
"background-color:transparent;\n"
"}\n"
"QComboBox::down-arrow {/*\346\233\277\346\215\242\344\270\211\350\247\222\345\260\217\345\233\276\346\240\207*/\n"
"width:20px;\n"
"height:20px;\n"
"border-image: url(:/img/down_white.png);\n"
"}\n"
"QComboBox::down-arrow:hover {\n"
"border-image: url(:/img"
                        "/down_orange.png);\n"
"}\n"
"QComboBox::down-arrow:disabled {\n"
"border-image: url(:/img/down2_white.png);\n"
"}\n"
"/*\347\274\226\350\276\221\346\241\206*/\n"
"QLineEdit{\n"
"padding: 0 5px;\n"
"color: rgb(250 ,250 ,250);\n"
"background-color: rgb(100, 100, 100);\n"
"border:1px solid rgb(128, 128, 128);\n"
"}\n"
"QLineEdit:hover{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"QLineEdit[readOnly=true],QLineEdit:disabled{\n"
"color: rgb(230, 230, 230);\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"/*\346\225\264\346\225\260\346\241\206*/\n"
"QSpinBox{\n"
"padding:0 5px;\n"
"color: rgb(250, 250, 250);\n"
"background-color:  rgb(100, 100, 100);\n"
"border:1px solid rgb(128, 128, 128);\n"
"}\n"
"QSpinBox:hover{\n"
"border:1px solid rgb(255, 170, 0);\n"
"}\n"
"QSpinBox:disabled{\n"
"color: rgb(230, 230, 230);\n"
"background-color:rgb(150, 150, 150);\n"
"}\n"
"QSpinBox[buttonSymbols=\"0\"]::up-button{/*\346\230\276\347\244\272\346\214\211\351\222\256=0*/\n"
"width:20px;\n"
"height:14px;\n"
"subcontrol-origi"
                        "n:border;\n"
"subcontrol-position:top right;\n"
"right:2px;\n"
"top:2px;\n"
"border-image: url(:/img/up_white.png);\n"
"}\n"
"QSpinBox::up-button:hover{\n"
"border-image: url(:/img/up_orange.png);\n"
"}\n"
"QSpinBox::up-button:pressed{\n"
"}\n"
"QSpinBox[buttonSymbols=\"0\"]::down-button{\n"
"width:20px;\n"
"height:14px;\n"
"subcontrol-origin:border;\n"
"subcontrol-position:bottom right;\n"
"right:2px;\n"
"bottom:2px;\n"
"border-image: url(:/img/down_white.png);\n"
"}\n"
"QSpinBox::down-button:hover{\n"
"border-image: url(:/img/down_orange.png);\n"
"}\n"
"QSpinBox::down-button:pressed{\n"
"}\n"
"QSpinBox::up-button:disabled{\n"
"border-image: url(:/img/up2_white.png);\n"
"}\n"
"QSpinBox::down-button:disabled{\n"
"border-image: url(:/img/down2_white.png);\n"
"}\n"
"/*\350\241\250\345\244\264*/\n"
"QHeaderView{\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"color:rgb(240, 240, 240);\n"
"background-color: rgb(80, 80, 80);\n"
"}\n"
"QHeaderView::section:horizontal{/*\346\250\252\350\241\250\345\244\264*/\n"
"min"
                        "-height:30px;\n"
"border:0;\n"
"border-bottom:1px solid rgb(0, 170, 255);\n"
"background-color: rgb(60,60,60);\n"
"}\n"
"QHeaderView::section:vertical{/*\347\253\226\350\241\250\345\244\264*/\n"
"min-width:60px;\n"
"padding-left:15px;\n"
"border:1px solid rgb(128, 128, 128);\n"
"border-top:0;\n"
"border-left:0;\n"
"background-color: rgb(60, 60, 60);\n"
"}\n"
"QHeaderView::section{\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"text-align:center;\n"
"}\n"
"QHeaderView::section:hover{\n"
"color:black;\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"QHeaderView::section:checked{/*\344\270\215\345\217\226\346\266\210\351\253\230\344\272\256*/\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"font-weight:normal;\n"
"color: rgb(255, 170, 0);\n"
"}\n"
"QHeaderView::section:selected{\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"font-weight:normal;\n"
"color: red;\n"
"}\n"
"QHeaderView::section:checked:hover{\n"
"font-weight:normal;\n"
"color: rgb(240, 240, 240);\n"
"}\n"
"QHeaderView::section:first{/*\350\241\250"
                        "\345\244\264\347\254\254\344\270\200\344\270\252\344\275\215\347\275\256*/\n"
"}\n"
"QHeaderView::down-arrow{/*\345\233\276\346\240\207\347\224\250\346\235\245\346\216\222\345\272\217\347\232\204*/\n"
"}\n"
"QHeaderView::up-arrow{\n"
"}\n"
"/*\350\241\250\346\240\274*/\n"
"QTableView{/*\345\257\271\351\275\220\346\226\271\345\274\217\344\273\243\347\240\201\350\256\276\347\275\256*/\n"
"border:1px solid rgb(128, 128, 128);\n"
"gridline-color: rgb(128, 128, 128);/*\347\275\221\346\240\274\347\272\277\351\242\234\350\211\262*/\n"
"background-color: rgb(80, 80, 80);\n"
"}\n"
"QTableView QTableCornerButton::section{/*\350\241\250\345\244\264\345\267\246\344\270\212*/\n"
"background-color: rgb(60,60,60);\n"
"border:0;\n"
"border-bottom:1px solid rgb(0, 170, 255);\n"
"}\n"
"QTableView::item{/*\350\241\250\345\206\205\345\256\271*/\n"
"font: 15px \"\345\256\213\344\275\223\";\n"
"color: rgb(250, 250, 250);\n"
"background-color: rgb(80, 80, 80);\n"
"}\n"
"QTableView::item:selected{\n"
"color:black;\n"
"background-colo"
                        "r: rgb(255, 170, 0);\n"
"}\n"
"QTableView::indicator{\n"
"width: 20px;\n"
"height: 20px;\n"
"}\n"
"QTableView::indicator:enabled:checked{\n"
"image: ;\n"
"}\n"
"QTableView::indicator:enabled:unchecked{\n"
"image: ;\n"
"}\n"
"/*\350\217\234\345\215\225*/\n"
"QPushButton::menu-indicator{/*setmenu*/\n"
"image:none;\n"
"}\n"
"QMenu{\n"
"border:1px solid rgb(128, 128, 128);\n"
"background-color:rgb(70, 70, 70);\n"
"margin:0px;\n"
"padding:0px;\n"
"}\n"
"QMenu::item {\n"
"margin:0px;\n"
"padding:0 20 0 10px;\n"
"font:15px \"\345\256\213\344\275\223\";\n"
"min-height:26px;\n"
"max-height:28px;\n"
"color:rgb(240, 240, 240);\n"
"background-color:rgb(70, 70, 70);\n"
"}\n"
"QSpacerItem{\n"
"background-color: rgb(0, 255, 0);\n"
"}\n"
"QMenu::item:disabled{\n"
"color:rgb(240, 240, 240);\n"
"background-color:rgb(110, 110, 110);\n"
"}\n"
"QMenu::item:selected {\n"
"color:black;\n"
"background-color: rgb(255, 170, 0);\n"
"}\n"
"QMenu::item:selected:disabled{\n"
"color:rgb(240, 240, 240);\n"
"background-color:rgb(110, 110, 110"
                        ");\n"
"}\n"
"QMenu::separator {/*\345\210\206\345\211\262\347\272\277*/\n"
"height: 1px;\n"
"background: transparent;\n"
"}"));
        centralWidget = new QWidget(rongliang);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setGeometry(QRect(0, -20, 411, 571));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(20, 199, 291, 51));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("*{\n"
"font:50px \"\345\256\213\344\275\223\";\n"
"color: rgb(250, 250, 250);\n"
"selection-background-color: rgb(255, 255, 255);/*\351\200\211\344\270\255\346\226\207\346\234\254*/\n"
"selection-color: rgb(0, 0, 0);\n"
"outline:none;/*\347\204\246\347\202\271\346\241\206*/\n"
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
        comboBox->setGeometry(QRect(20, 149, 131, 22));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(20, 70, 291, 51));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("*{\n"
"font:50px \"\345\256\213\344\275\223\";\n"
"color: rgb(250, 250, 250);\n"
"selection-background-color: rgb(255, 255, 255);/*\351\200\211\344\270\255\346\226\207\346\234\254*/\n"
"selection-color: rgb(0, 0, 0);\n"
"outline:none;/*\347\204\246\347\202\271\346\241\206*/\n"
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
        comboBox_2->setGeometry(QRect(20, 280, 131, 22));
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
