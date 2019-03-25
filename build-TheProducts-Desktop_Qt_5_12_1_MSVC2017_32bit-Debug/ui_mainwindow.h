/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *HOME;
    QFormLayout *formLayout;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *PRODUCTS;
    QGridLayout *gridLayout_4;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QPushButton *junglePurchase_2;
    QPushButton *urbanPurchase_2;
    QPushButton *desertPurchase_2;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *TESTIMONIALS;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *HELP;
    QGridLayout *gridLayout_2;
    QTextBrowser *textBrowser_2;
    QWidget *CUSTOMERLIST;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2618, 1093);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        HOME = new QWidget();
        HOME->setObjectName(QString::fromUtf8("HOME"));
        formLayout = new QFormLayout(HOME);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(HOME);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Stencil"));
        font.setPointSize(36);
        label_4->setFont(font);
        label_4->setScaledContents(false);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_4);

        textBrowser = new QTextBrowser(HOME);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, textBrowser);

        label_13 = new QLabel(HOME);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_13->setFont(font1);
        label_13->setScaledContents(true);
        label_13->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::SpanningRole, label_13);

        lineEdit_2 = new QLineEdit(HOME);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(74, 0));

        formLayout->setWidget(3, QFormLayout::LabelRole, lineEdit_2);

        pushButton_4 = new QPushButton(HOME);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_4->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        label_6 = new QLabel(HOME);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setScaledContents(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_14 = new QLabel(HOME);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font4;
        font4.setPointSize(14);
        label_14->setFont(font4);
        label_14->setScaledContents(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(HOME);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font4);
        label_15->setScaledContents(true);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(HOME);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font4);
        label_16->setScaledContents(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_16);

        tabWidget->addTab(HOME, QString());
        PRODUCTS = new QWidget();
        PRODUCTS->setObjectName(QString::fromUtf8("PRODUCTS"));
        gridLayout_4 = new QGridLayout(PRODUCTS);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_12 = new QLabel(PRODUCTS);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Jungle Bot.jpg")));
        label_12->setScaledContents(true);

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        label_11 = new QLabel(PRODUCTS);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Urban Bot.png")));
        label_11->setScaledContents(true);

        gridLayout_4->addWidget(label_11, 0, 1, 1, 1);

        label_7 = new QLabel(PRODUCTS);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Desert Bot.jpg")));
        label_7->setScaledContents(true);

        gridLayout_4->addWidget(label_7, 0, 2, 1, 1);

        label = new QLabel(PRODUCTS);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(PRODUCTS);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 1, 1, 1, 1);

        label_2 = new QLabel(PRODUCTS);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 2, 1, 1);

        textBrowser_6 = new QTextBrowser(PRODUCTS);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));

        gridLayout_4->addWidget(textBrowser_6, 2, 0, 1, 1);

        textBrowser_4 = new QTextBrowser(PRODUCTS);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));

        gridLayout_4->addWidget(textBrowser_4, 2, 1, 1, 1);

        textBrowser_5 = new QTextBrowser(PRODUCTS);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));

        gridLayout_4->addWidget(textBrowser_5, 2, 2, 1, 1);

        junglePurchase_2 = new QPushButton(PRODUCTS);
        junglePurchase_2->setObjectName(QString::fromUtf8("junglePurchase_2"));

        gridLayout_4->addWidget(junglePurchase_2, 3, 0, 1, 1);

        urbanPurchase_2 = new QPushButton(PRODUCTS);
        urbanPurchase_2->setObjectName(QString::fromUtf8("urbanPurchase_2"));

        gridLayout_4->addWidget(urbanPurchase_2, 3, 1, 1, 1);

        desertPurchase_2 = new QPushButton(PRODUCTS);
        desertPurchase_2->setObjectName(QString::fromUtf8("desertPurchase_2"));

        gridLayout_4->addWidget(desertPurchase_2, 3, 2, 1, 1);

        label_10 = new QLabel(PRODUCTS);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        label_10->setFont(font5);

        gridLayout_4->addWidget(label_10, 4, 0, 1, 1);

        label_8 = new QLabel(PRODUCTS);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font5);

        gridLayout_4->addWidget(label_8, 4, 1, 1, 1);

        label_9 = new QLabel(PRODUCTS);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font5);

        gridLayout_4->addWidget(label_9, 4, 2, 1, 1);

        tabWidget->addTab(PRODUCTS, QString());
        TESTIMONIALS = new QWidget();
        TESTIMONIALS->setObjectName(QString::fromUtf8("TESTIMONIALS"));
        gridLayout_3 = new QGridLayout(TESTIMONIALS);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textEdit = new QTextEdit(TESTIMONIALS);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_3->addWidget(textEdit, 2, 1, 1, 1);

        textBrowser_3 = new QTextBrowser(TESTIMONIALS);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        gridLayout_3->addWidget(textBrowser_3, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(TESTIMONIALS);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(TESTIMONIALS);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 2, 0, 2, 1);

        tabWidget->addTab(TESTIMONIALS, QString());
        HELP = new QWidget();
        HELP->setObjectName(QString::fromUtf8("HELP"));
        gridLayout_2 = new QGridLayout(HELP);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textBrowser_2 = new QTextBrowser(HELP);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        gridLayout_2->addWidget(textBrowser_2, 0, 0, 1, 1);

        tabWidget->addTab(HELP, QString());
        CUSTOMERLIST = new QWidget();
        CUSTOMERLIST->setObjectName(QString::fromUtf8("CUSTOMERLIST"));
        verticalLayout = new QVBoxLayout(CUSTOMERLIST);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(CUSTOMERLIST);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font6;
        font6.setPointSize(20);
        label_5->setFont(font6);

        verticalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(CUSTOMERLIST);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(CUSTOMERLIST);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font7;
        font7.setPointSize(10);
        pushButton->setFont(font7);

        verticalLayout->addWidget(pushButton);

        tabWidget->addTab(CUSTOMERLIST, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Anti-Terrorists", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><a name=\"docs-internal-guid-784521bc-7fff-e411-155f-be630abc3d81\"></a><span style=\" font-family:'Times New Roman'; font-size:12pt; color:#000000;\">I</span><span style=\" font-family:'Times New Roman'; font-size:12pt; color:#000000;\">t has become so difficult to find a reliable bomb detecting robot. Our company is here to provide a safe and affordable product to detect and diffuse bombs. Our products are truly unique due to the many options we provide for the different terrains all over the world. Ou"
                        "r robots are fully functional in the deserts of the middle east, the jungles in south America and the urban grounds in Europe. Not only are our products adaptable, they are also durable. Our products weight around 15 to 20 pounds depending on the selected model. They are 36 inches high. In case of a malfunction, we provide a great guarantee policy along with the purchase (more information can be found under the guarantee policy page). The product also comes with additional services for repairs and replacements listed in the maintenance plan. Our robots have been given a 4.5 rating by the national bomb defusal robot agency. Reviews from our returning customers can be found here.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Times New Roman'; font-size:12pt; color:#000000;\">So don\342\200\231t wait, Buy your bomb detecting robot today!</span></"
                        "p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Times New Roman'; font-size:12pt; color:#000000;\"><br /></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "To receive a copy of the pamphlet enter your company name and click request below", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "REQUEST", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Contact Info", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "1(800)-DIF-FUSE", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "95 Marguerite Pkwy, Mission Viejo, CA", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "AntiTerrorists@terroristwatch.org", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(HOME), QApplication::translate("MainWindow", "HOME", nullptr));
        label_12->setText(QString());
        label_11->setText(QString());
        label_7->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Jungle Bot", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Urban Bot", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Desert Bot", nullptr));
        textBrowser_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Dense jungle is among the toughest terrain to remotely navigate on wheels, which is why our jungle model walks on hydraulic spider legs. Allowing for three-dimmensional traversal of dense foliage, tree roots, and uneven terrain. This bot is light, and most importantly rain resistant. However be aware of weather patterns because prolonged submersion, in flood water for example, will cause malfunctions and possible destruction. Due to dense jungle cover this robot has no solar panels. But has the lognest batter life of our models--36 hours. The jungle is al"
                        "most untouched by technology but this robot will feel right at home. </p></body></html>", nullptr));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Due to the delicacy of urban bomb threats, this robot ditches all things flashy and needless in exchange for maneuvarevility, and practicality. It comes equipped with an adjustable camera, is small enough to fit through air vents, and doorways, and it's all terrain wheels and spring loaded hydraulics means that it can get over any obstacle from debris to stairways. For practicality this robot has no bomb handling capabilities, it is only to be used as a bomb defusor. It has a powerful liquid nitrogen hose that freezes circuits and stops chemical reactions"
                        " so that the bomb can be retrieved and safely taken care of by specialists. Because of its size the battery only lasts 12 hrs but can be recharged at a portable charging station.</p></body></html>", nullptr));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Perectly equipped for operations in hot and arid environments. Equipped with light, and heat resistant metal plating that greatly reduces the chance of overheating. In the event of overheating it comes equipped with a built in cooling system. The battery is solar powered and can last for 24 hours without solar energy. Regardless it can be chargee at a charging station as well.   </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style="
                        "\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        junglePurchase_2->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        urbanPurchase_2->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        desertPurchase_2->setText(QApplication::translate("MainWindow", "Buy", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Price: $40,550", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Price: $31,200", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Price: $37,450", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(PRODUCTS), QApplication::translate("MainWindow", "PRODUCTS", nullptr));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "View Testimonials", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Enter Testimonial(Enter Company Name and type on the next line)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TESTIMONIALS), QApplication::translate("MainWindow", "TESTIMONIALS", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">FAQ</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span st"
                        "yle=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">JUNGLE ROBOT:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">Q: How long will my robot last in the jungle under the worst conditions?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">A: Our robots were designed to outlast all of the worst conditions known on earth, \302\240\302\240\302\240 so it is nearly impossible for weather to damage our robot's.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">DESERT ROBOT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">Q: Will sand and other debris clog or hinder the robot in any way?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">A: Before passing inspections each robot is thoroughly tested with a wide variety of materials like sand and gravel, making sure that it does not affect the robots abilities in any way.</span>"
                        "</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">URBAN ROBOT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">Q: What is the difference between the urban and desert robots?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">A: The main differences between the urban and desert robots is the way they maneuver and operate i"
                        "n the different terrains. Each robot is individually specialized for their own environment.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">GENERAL HELP QUESTIONS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">Where does a customer purchase a robot? </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">To purchas"
                        "e a robot head over to the &quot;Products&quot; tab</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">Where do I see the warranty policies?</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22.08px; background-color:transparent;\"><span style=\" font-family:'Arial'; font-size:14pt; color:#000000; background-color:transparent;\">The warranties can be seen under its respective tab.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Times New Roman'; font-size:14pt; color:#000000;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(HELP), QApplication::translate("MainWindow", "HELP", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Enter Admin Password to view/edit Customer List", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CUSTOMERLIST), QApplication::translate("MainWindow", "CUSTOMER LIST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
