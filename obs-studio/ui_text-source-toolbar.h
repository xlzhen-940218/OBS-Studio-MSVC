/********************************************************************************
** Form generated from reading UI file 'text-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_2D_SOURCE_2D_TOOLBAR_H
#define UI_TEXT_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *selectFont;
    QPushButton *selectColor;
    QFrame *emptySpace;
    QLineEdit *text;

    void setupUi(QWidget *TextSourceToolbar)
    {
        if (TextSourceToolbar->objectName().isEmpty())
            TextSourceToolbar->setObjectName("TextSourceToolbar");
        TextSourceToolbar->resize(726, 22);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextSourceToolbar->sizePolicy().hasHeightForWidth());
        TextSourceToolbar->setSizePolicy(sizePolicy);
        TextSourceToolbar->setMinimumSize(QSize(0, 22));
        TextSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(TextSourceToolbar);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selectFont = new QPushButton(TextSourceToolbar);
        selectFont->setObjectName("selectFont");
        selectFont->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(selectFont);

        selectColor = new QPushButton(TextSourceToolbar);
        selectColor->setObjectName("selectColor");
        selectColor->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(selectColor);

        emptySpace = new QFrame(TextSourceToolbar);
        emptySpace->setObjectName("emptySpace");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptySpace->sizePolicy().hasHeightForWidth());
        emptySpace->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(emptySpace);

        text = new QLineEdit(TextSourceToolbar);
        text->setObjectName("text");
        text->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(text);


        retranslateUi(TextSourceToolbar);

        QMetaObject::connectSlotsByName(TextSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *TextSourceToolbar)
    {
        selectFont->setText(QCoreApplication::translate("TextSourceToolbar", "Basic.PropertiesWindow.SelectFont", nullptr));
        selectColor->setText(QCoreApplication::translate("TextSourceToolbar", "Basic.PropertiesWindow.SelectColor", nullptr));
        (void)TextSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class TextSourceToolbar: public Ui_TextSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_2D_SOURCE_2D_TOOLBAR_H
