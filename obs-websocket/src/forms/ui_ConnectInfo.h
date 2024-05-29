/********************************************************************************
** Form generated from reading UI file 'ConnectInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTINFO_H
#define UI_CONNECTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectInfo
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *serverIpLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *serverIpLineEdit;
    QPushButton *copyServerIpButton;
    QLabel *serverPortLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *serverPortLineEdit;
    QPushButton *copyServerPortButton;
    QLabel *serverPasswordLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *serverPasswordLineEdit;
    QPushButton *copyServerPasswordButton;
    QGroupBox *groupBox;
    QLabel *qrCodeLabel;

    void setupUi(QDialog *ConnectInfo)
    {
        if (ConnectInfo->objectName().isEmpty())
            ConnectInfo->setObjectName("ConnectInfo");
        ConnectInfo->resize(451, 432);
        ConnectInfo->setMinimumSize(QSize(451, 412));
        ConnectInfo->setMaximumSize(QSize(451, 432));
        formLayoutWidget = new QWidget(ConnectInfo);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 431, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        serverIpLabel = new QLabel(formLayoutWidget);
        serverIpLabel->setObjectName("serverIpLabel");
        serverIpLabel->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, serverIpLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        serverIpLineEdit = new QLineEdit(formLayoutWidget);
        serverIpLineEdit->setObjectName("serverIpLineEdit");
        serverIpLineEdit->setFocusPolicy(Qt::NoFocus);
        serverIpLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        serverIpLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(serverIpLineEdit);

        copyServerIpButton = new QPushButton(formLayoutWidget);
        copyServerIpButton->setObjectName("copyServerIpButton");
        copyServerIpButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout->addWidget(copyServerIpButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        serverPortLabel = new QLabel(formLayoutWidget);
        serverPortLabel->setObjectName("serverPortLabel");
        serverPortLabel->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, serverPortLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        serverPortLineEdit = new QLineEdit(formLayoutWidget);
        serverPortLineEdit->setObjectName("serverPortLineEdit");
        serverPortLineEdit->setFocusPolicy(Qt::NoFocus);
        serverPortLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        serverPortLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(serverPortLineEdit);

        copyServerPortButton = new QPushButton(formLayoutWidget);
        copyServerPortButton->setObjectName("copyServerPortButton");
        copyServerPortButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_2->addWidget(copyServerPortButton);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        serverPasswordLabel = new QLabel(formLayoutWidget);
        serverPasswordLabel->setObjectName("serverPasswordLabel");
        serverPasswordLabel->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(2, QFormLayout::LabelRole, serverPasswordLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        serverPasswordLineEdit = new QLineEdit(formLayoutWidget);
        serverPasswordLineEdit->setObjectName("serverPasswordLineEdit");
        serverPasswordLineEdit->setFocusPolicy(Qt::NoFocus);
        serverPasswordLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        serverPasswordLineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(serverPasswordLineEdit);

        copyServerPasswordButton = new QPushButton(formLayoutWidget);
        copyServerPasswordButton->setObjectName("copyServerPasswordButton");
        copyServerPasswordButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_3->addWidget(copyServerPasswordButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        groupBox = new QGroupBox(ConnectInfo);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 140, 431, 281));
        qrCodeLabel = new QLabel(groupBox);
        qrCodeLabel->setObjectName("qrCodeLabel");
        qrCodeLabel->setGeometry(QRect(100, 30, 236, 236));

        retranslateUi(ConnectInfo);

        QMetaObject::connectSlotsByName(ConnectInfo);
    } // setupUi

    void retranslateUi(QDialog *ConnectInfo)
    {
        ConnectInfo->setWindowTitle(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.DialogTitle", nullptr));
        serverIpLabel->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.ServerIp", nullptr));
        copyServerIpButton->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.CopyText", nullptr));
        serverPortLabel->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.ServerPort", nullptr));
        copyServerPortButton->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.CopyText", nullptr));
        serverPasswordLabel->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.ServerPassword", nullptr));
        serverPasswordLineEdit->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.ServerPasswordPlaceholderText", nullptr));
        copyServerPasswordButton->setText(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.CopyText", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConnectInfo", "OBSWebSocket.ConnectInfo.QrTitle", nullptr));
        qrCodeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConnectInfo: public Ui_ConnectInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTINFO_H
