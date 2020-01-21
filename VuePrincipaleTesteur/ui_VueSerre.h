/********************************************************************************
** Form generated from reading UI file 'VueSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUESERRE_H
#define UI_VUESERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueSerre
{
public:

    void setupUi(QWidget *VueSerre)
    {
        if (VueSerre->objectName().isEmpty())
            VueSerre->setObjectName(QStringLiteral("VueSerre"));
        VueSerre->resize(400, 300);

        retranslateUi(VueSerre);

        QMetaObject::connectSlotsByName(VueSerre);
    } // setupUi

    void retranslateUi(QWidget *VueSerre)
    {
        VueSerre->setWindowTitle(QApplication::translate("VueSerre", "VueSerre", 0));
    } // retranslateUi

};

namespace Ui {
    class VueSerre: public Ui_VueSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUESERRE_H
