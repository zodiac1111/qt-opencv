/********************************************************************************
** Form generated from reading UI file 'CameraConnectDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACONNECTDIALOG_H
#define UI_CAMERACONNECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraConnectDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QRadioButton *anyCameraButton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *deviceNumberButton;
    QLineEdit *deviceNumberEdit;
    QSpacerItem *horizontalSpacer_1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *imageBufferSizeEdit;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *okCancelBox;

    void setupUi(QDialog *CameraConnectDialog)
    {
        if (CameraConnectDialog->objectName().isEmpty())
            CameraConnectDialog->setObjectName(QString::fromUtf8("CameraConnectDialog"));
        CameraConnectDialog->resize(410, 170);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraConnectDialog->sizePolicy().hasHeightForWidth());
        CameraConnectDialog->setSizePolicy(sizePolicy);
        CameraConnectDialog->setMinimumSize(QSize(410, 170));
        layoutWidget = new QWidget(CameraConnectDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 391, 150));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_1->setFont(font);

        verticalLayout->addWidget(label_1);

        anyCameraButton = new QRadioButton(layoutWidget);
        anyCameraButton->setObjectName(QString::fromUtf8("anyCameraButton"));
        anyCameraButton->setChecked(true);

        verticalLayout->addWidget(anyCameraButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        deviceNumberButton = new QRadioButton(layoutWidget);
        deviceNumberButton->setObjectName(QString::fromUtf8("deviceNumberButton"));

        horizontalLayout_2->addWidget(deviceNumberButton);

        deviceNumberEdit = new QLineEdit(layoutWidget);
        deviceNumberEdit->setObjectName(QString::fromUtf8("deviceNumberEdit"));
        deviceNumberEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceNumberEdit->sizePolicy().hasHeightForWidth());
        deviceNumberEdit->setSizePolicy(sizePolicy1);
        deviceNumberEdit->setMinimumSize(QSize(50, 0));
        deviceNumberEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(deviceNumberEdit);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        imageBufferSizeEdit = new QLineEdit(layoutWidget);
        imageBufferSizeEdit->setObjectName(QString::fromUtf8("imageBufferSizeEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageBufferSizeEdit->sizePolicy().hasHeightForWidth());
        imageBufferSizeEdit->setSizePolicy(sizePolicy2);
        imageBufferSizeEdit->setMinimumSize(QSize(50, 0));
        imageBufferSizeEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(imageBufferSizeEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        okCancelBox = new QDialogButtonBox(layoutWidget);
        okCancelBox->setObjectName(QString::fromUtf8("okCancelBox"));
        okCancelBox->setOrientation(Qt::Horizontal);
        okCancelBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(okCancelBox);

        QWidget::setTabOrder(anyCameraButton, deviceNumberButton);
        QWidget::setTabOrder(deviceNumberButton, deviceNumberEdit);
        QWidget::setTabOrder(deviceNumberEdit, imageBufferSizeEdit);
        QWidget::setTabOrder(imageBufferSizeEdit, okCancelBox);

        retranslateUi(CameraConnectDialog);
        QObject::connect(okCancelBox, SIGNAL(accepted()), CameraConnectDialog, SLOT(accept()));
        QObject::connect(okCancelBox, SIGNAL(rejected()), CameraConnectDialog, SLOT(reject()));
        QObject::connect(anyCameraButton, SIGNAL(clicked(bool)), deviceNumberEdit, SLOT(setDisabled(bool)));
        QObject::connect(deviceNumberButton, SIGNAL(clicked(bool)), deviceNumberEdit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CameraConnectDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraConnectDialog)
    {
        CameraConnectDialog->setWindowTitle(QApplication::translate("CameraConnectDialog", "Connect to Camera", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("CameraConnectDialog", "Select Camera:", 0, QApplication::UnicodeUTF8));
        anyCameraButton->setText(QApplication::translate("CameraConnectDialog", "Connect to any available camera", 0, QApplication::UnicodeUTF8));
        deviceNumberButton->setText(QApplication::translate("CameraConnectDialog", "Device Number:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CameraConnectDialog", "Image Buffer Size (no. of images):", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraConnectDialog: public Ui_CameraConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACONNECTDIALOG_H
