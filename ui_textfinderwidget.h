/********************************************************************************
** Form generated from reading UI file 'textfinderwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFINDERWIDGET_H
#define UI_TEXTFINDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFinderWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *searchButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *TextFinderWidget)
    {
        if (TextFinderWidget->objectName().isEmpty())
            TextFinderWidget->setObjectName(QString::fromUtf8("TextFinderWidget"));
        TextFinderWidget->resize(409, 308);
        verticalLayout_2 = new QVBoxLayout(TextFinderWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TextFinderWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(TextFinderWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        searchButton = new QPushButton(TextFinderWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(TextFinderWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TextFinderWidget);

        QMetaObject::connectSlotsByName(TextFinderWidget);
    } // setupUi

    void retranslateUi(QWidget *TextFinderWidget)
    {
        TextFinderWidget->setWindowTitle(QCoreApplication::translate("TextFinderWidget", "TextFinderWidget", nullptr));
        label->setText(QCoreApplication::translate("TextFinderWidget", "Keyword:", nullptr));
        searchButton->setText(QCoreApplication::translate("TextFinderWidget", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFinderWidget: public Ui_TextFinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFINDERWIDGET_H
