/********************************************************************************
** Form generated from reading UI file 'OBSMissingFiles.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSMISSINGFILES_H
#define UI_OBSMISSINGFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSMissingFiles
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *warningIcon;
    QLabel *label;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *found;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *browseButton;
    QPushButton *doneButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OBSMissingFiles)
    {
        if (OBSMissingFiles->objectName().isEmpty())
            OBSMissingFiles->setObjectName("OBSMissingFiles");
        OBSMissingFiles->resize(666, 310);
        OBSMissingFiles->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(OBSMissingFiles);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        warningIcon = new QLabel(OBSMissingFiles);
        warningIcon->setObjectName("warningIcon");
        warningIcon->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(warningIcon);

        label = new QLabel(OBSMissingFiles);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tableView = new QTableView(OBSMissingFiles);
        tableView->setObjectName("tableView");
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->horizontalHeader()->setMinimumSectionSize(23);
        tableView->horizontalHeader()->setDefaultSectionSize(23);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(24);

        gridLayout->addWidget(tableView, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        found = new QLabel(OBSMissingFiles);
        found->setObjectName("found");

        horizontalLayout_2->addWidget(found);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        browseButton = new QPushButton(OBSMissingFiles);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);

        doneButton = new QPushButton(OBSMissingFiles);
        doneButton->setObjectName("doneButton");

        horizontalLayout->addWidget(doneButton);

        cancelButton = new QPushButton(OBSMissingFiles);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 1);


        retranslateUi(OBSMissingFiles);

        QMetaObject::connectSlotsByName(OBSMissingFiles);
    } // setupUi

    void retranslateUi(QDialog *OBSMissingFiles)
    {
        OBSMissingFiles->setWindowTitle(QCoreApplication::translate("OBSMissingFiles", "MissingFiles", nullptr));
        label->setText(QCoreApplication::translate("OBSMissingFiles", "MissingFiles.HelpText", nullptr));
        found->setText(QCoreApplication::translate("OBSMissingFiles", "MissingFiles.NumFound", nullptr));
        browseButton->setText(QCoreApplication::translate("OBSMissingFiles", "MissingFiles.Search", nullptr));
        doneButton->setText(QCoreApplication::translate("OBSMissingFiles", "Apply", nullptr));
        cancelButton->setText(QCoreApplication::translate("OBSMissingFiles", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSMissingFiles: public Ui_OBSMissingFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSMISSINGFILES_H
