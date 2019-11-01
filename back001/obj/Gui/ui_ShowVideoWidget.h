/********************************************************************************
** Form generated from reading UI file 'ShowVideoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWVIDEOWIDGET_H
#define UI_SHOWVIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowVideoWidget
{
public:

    void setupUi(QWidget *ShowVideoWidget)
    {
        if (ShowVideoWidget->objectName().isEmpty())
            ShowVideoWidget->setObjectName(QStringLiteral("ShowVideoWidget"));
        ShowVideoWidget->resize(800, 600);

        retranslateUi(ShowVideoWidget);

        QMetaObject::connectSlotsByName(ShowVideoWidget);
    } // setupUi

    void retranslateUi(QWidget *ShowVideoWidget)
    {
        ShowVideoWidget->setWindowTitle(QApplication::translate("ShowVideoWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowVideoWidget: public Ui_ShowVideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWVIDEOWIDGET_H
