/********************************************************************************
** Form generated from reading UI file 'purchases.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASES_H
#define UI_PURCHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_purchases
{
public:
    QFormLayout *formLayout;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *purchases)
    {
        if (purchases->objectName().isEmpty())
            purchases->setObjectName(QString::fromUtf8("purchases"));
        purchases->resize(862, 509);
        formLayout = new QFormLayout(purchases);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        textEdit = new QTextEdit(purchases);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, textEdit);

        textBrowser = new QTextBrowser(purchases);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textBrowser);

        spinBox = new QSpinBox(purchases);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox);

        buttonBox = new QDialogButtonBox(purchases);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(6, QFormLayout::FieldRole, buttonBox);

        label = new QLabel(purchases);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(purchases);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);


        retranslateUi(purchases);
        QObject::connect(buttonBox, SIGNAL(accepted()), purchases, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), purchases, SLOT(reject()));

        QMetaObject::connectSlotsByName(purchases);
    } // setupUi

    void retranslateUi(QDialog *purchases)
    {
        purchases->setWindowTitle(QApplication::translate("purchases", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("purchases", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Our jungle warranty package includes: free 24-hour technical support, an 18-month full replacement guarantee--meaning if the robots main circuit frame is severely damaged within 18 months of the purchase date then we will replace it for free. Additional/replacement parts can be requested and delivered upon completion of an official AT damage report that details the cause of the incident. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Shipment includes: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 6 additional robotic limbs </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- charging station </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- controller</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- camouflage stickers </span></p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- operations manual </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Maintenance Plan</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"docs-"
                        "internal-guid-25ecc650-7fff-087d-f8c9-f6103888fe4e\"></a><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-</span><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">Make sure the tracks are kept clean, remove often and and thoroughly clean</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Ensure suspension springs are oiled and in good condition before use</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Perform a full charge, at least a once e"
                        "very month to ensure that the battery stays in good shape</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Ensure all RC receivers are clear of dirt and grime. Failure to do so can result in an inability to communicate with the robot.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Wipe down robot with a damp towel regularly. Once finished, dry with a dry towel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><sp"
                        "an style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Grease axles at least every 3 months to ensure best performance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Check that cameras are functioning and are connected before use</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Times New Roman'; font-size:10pt; color:#000000;\"><br /></p></body></html>", nullptr));
        label->setText(QApplication::translate("purchases", "Company Name", nullptr));
        label_2->setText(QApplication::translate("purchases", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class purchases: public Ui_purchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASES_H
