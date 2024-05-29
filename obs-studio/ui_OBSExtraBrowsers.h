/********************************************************************************
** Form generated from reading UI file 'OBSExtraBrowsers.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSEXTRABROWSERS_H
#define UI_OBSEXTRABROWSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSExtraBrowsers
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *table;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *apply;
    QPushButton *close;

    void setupUi(QDialog *OBSExtraBrowsers)
    {
        if (OBSExtraBrowsers->objectName().isEmpty())
            OBSExtraBrowsers->setObjectName("OBSExtraBrowsers");
        OBSExtraBrowsers->resize(785, 353);
        OBSExtraBrowsers->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSExtraBrowsers);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(OBSExtraBrowsers);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        table = new QTableView(OBSExtraBrowsers);
        table->setObjectName("table");
        table->setSelectionMode(QAbstractItemView::NoSelection);
        table->horizontalHeader()->setMinimumSectionSize(23);
        table->horizontalHeader()->setDefaultSectionSize(23);
        table->verticalHeader()->setVisible(false);
        table->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        apply = new QPushButton(OBSExtraBrowsers);
        apply->setObjectName("apply");

        horizontalLayout->addWidget(apply);

        close = new QPushButton(OBSExtraBrowsers);
        close->setObjectName("close");

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSExtraBrowsers);
        QObject::connect(close, &QPushButton::clicked, OBSExtraBrowsers, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(OBSExtraBrowsers);
    } // setupUi

    void retranslateUi(QDialog *OBSExtraBrowsers)
    {
        OBSExtraBrowsers->setWindowTitle(QCoreApplication::translate("OBSExtraBrowsers", "ExtraBrowsers", nullptr));
        label->setText(QCoreApplication::translate("OBSExtraBrowsers", "ExtraBrowsers.Info", nullptr));
        apply->setText(QCoreApplication::translate("OBSExtraBrowsers", "Apply", nullptr));
        close->setText(QCoreApplication::translate("OBSExtraBrowsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSExtraBrowsers: public Ui_OBSExtraBrowsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSEXTRABROWSERS_H
