/********************************************************************************
** Form generated from reading UI file 'desertpurchases.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESERTPURCHASES_H
#define UI_DESERTPURCHASES_H

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

class Ui_desertPurchases
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *desertPurchases)
    {
        if (desertPurchases->objectName().isEmpty())
            desertPurchases->setObjectName(QString::fromUtf8("desertPurchases"));
        desertPurchases->resize(773, 471);
        formLayout = new QFormLayout(desertPurchases);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(desertPurchases);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        textEdit = new QTextEdit(desertPurchases);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        label_2 = new QLabel(desertPurchases);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        spinBox = new QSpinBox(desertPurchases);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox);

        buttonBox = new QDialogButtonBox(desertPurchases);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::SpanningRole, buttonBox);

        textBrowser = new QTextBrowser(desertPurchases);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textBrowser);


        retranslateUi(desertPurchases);
        QObject::connect(buttonBox, SIGNAL(accepted()), desertPurchases, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), desertPurchases, SLOT(reject()));

        QMetaObject::connectSlotsByName(desertPurchases);
    } // setupUi

    void retranslateUi(QDialog *desertPurchases)
    {
        desertPurchases->setWindowTitle(QApplication::translate("desertPurchases", "Dialog", nullptr));
        label->setText(QApplication::translate("desertPurchases", "Company Name", nullptr));
        label_2->setText(QApplication::translate("desertPurchases", "Quantity", nullptr));
        textBrowser->setHtml(QApplication::translate("desertPurchases", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.1pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The desert bot is our sturdiest model but given the nature of the job it is still prone to damage. The warranty package includes: 24-hour technical support, an 18-month full replacement guarantee--meaning if the robots main circuit frame is severely damaged within 18 months of the purchase date then we will replace it for free. Additional/replacement parts can be requested and delivered upon completion of an official AT damage report that details the cause of the incident. </span></p>\n"
"<p style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Shipment includes: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 2 additional sets of treads</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- charging station </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- controller</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-size:10pt;\">- 2 heat shields</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- operations manual </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Maintenance Plan</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Make sure to check that tires are fully inflated before use to ensure safe and easy handling.</span></p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Ensure suspension springs are oiled and in good condition before use</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Perform a full charge, at least a once every month to ensure that the battery stays in good shape</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Ensure all RC recievors are clear of dirt an"
                        "d grime. Failure to do so can result in an inability to communicate with the robot.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Wipe down robot with a damp towel regularly. Once finished, dry with a dry towel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; font-size:10pt; color:#24292e; background-color:transparent;\">-Grease axels at least every 3 months to ensure best performance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:27.84px; background-color:#f6f8fa;\"><span style=\" font-family:'Consolas'; f"
                        "ont-size:10pt; color:#24292e; background-color:transparent;\">-Check that cameras are functioning and are connected before use</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Times New Roman'; font-size:8pt; color:#000000;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class desertPurchases: public Ui_desertPurchases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESERTPURCHASES_H
