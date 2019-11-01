/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *treeWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QPushButton *pushButton_catlog;
    QPushButton *pushButton_invite;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_param;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_sip_id;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_12;
    QLineEdit *lineEdit_port;
    QLineEdit *lineEdit_password;
    QLabel *label_11;
    QLineEdit *lineEdit_ip;
    QLabel *label_9;
    QLineEdit *lineEdit_realm;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(883, 664);
        QIcon icon;
        icon.addFile(QStringLiteral("../img/GBS.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(260, 0));
        treeWidget->setMaximumSize(QSize(260, 16777215));
        treeWidget->setRootIsDecorated(true);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setStretchLastSection(true);

        verticalLayout_4->addWidget(treeWidget);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 100));
        pushButton_catlog = new QPushButton(widget_2);
        pushButton_catlog->setObjectName(QStringLiteral("pushButton_catlog"));
        pushButton_catlog->setGeometry(QRect(70, 10, 91, 32));
        pushButton_invite = new QPushButton(widget_2);
        pushButton_invite->setObjectName(QStringLiteral("pushButton_invite"));
        pushButton_invite->setGeometry(QRect(70, 60, 91, 32));

        verticalLayout_5->addWidget(widget_2);


        verticalLayout_4->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout_4);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_param = new QWidget(frame);
        widget_param->setObjectName(QStringLiteral("widget_param"));
        verticalLayout = new QVBoxLayout(widget_param);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(widget_param);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(80, 16777215));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        lineEdit_sip_id = new QLineEdit(widget_param);
        lineEdit_sip_id->setObjectName(QStringLiteral("lineEdit_sip_id"));
        lineEdit_sip_id->setMinimumSize(QSize(0, 26));

        horizontalLayout_5->addWidget(lineEdit_sip_id);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_10 = new QLabel(widget_param);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 3, 1, 1);

        label_12 = new QLabel(widget_param);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 3, 1, 1);

        lineEdit_port = new QLineEdit(widget_param);
        lineEdit_port->setObjectName(QStringLiteral("lineEdit_port"));
        lineEdit_port->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(lineEdit_port, 1, 4, 1, 1);

        lineEdit_password = new QLineEdit(widget_param);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(lineEdit_password, 0, 4, 1, 1);

        label_11 = new QLabel(widget_param);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(80, 16777215));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        lineEdit_ip = new QLineEdit(widget_param);
        lineEdit_ip->setObjectName(QStringLiteral("lineEdit_ip"));
        lineEdit_ip->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(lineEdit_ip, 1, 1, 1, 1);

        label_9 = new QLabel(widget_param);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(80, 16777215));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        lineEdit_realm = new QLineEdit(widget_param);
        lineEdit_realm->setObjectName(QStringLiteral("lineEdit_realm"));
        lineEdit_realm->setMinimumSize(QSize(0, 26));

        gridLayout->addWidget(lineEdit_realm, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addWidget(widget_param);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_start = new QPushButton(widget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(0, 26));

        horizontalLayout_4->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(widget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setMinimumSize(QSize(0, 26));

        horizontalLayout_4->addWidget(pushButton_stop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tableWidget = new QTableWidget(widget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->verticalHeader()->setDefaultSectionSize(25);

        verticalLayout_2->addWidget(tableWidget);


        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 883, 23));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GBS\346\216\247\345\210\266\345\217\260", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", 0));
        pushButton_catlog->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202\350\256\276\345\244\207\347\233\256\345\275\225", 0));
        pushButton_invite->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276\350\247\206\351\242\221\346\265\201", 0));
        label_6->setText(QApplication::translate("MainWindow", "ID", 0));
        lineEdit_sip_id->setText(QApplication::translate("MainWindow", "34020000002000000001", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", 0));
        label_12->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243", 0));
        lineEdit_port->setText(QApplication::translate("MainWindow", "5082", 0));
        lineEdit_password->setText(QApplication::translate("MainWindow", "123456", 0));
        label_11->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272IP\345\234\260\345\235\200", 0));
        lineEdit_ip->setText(QApplication::translate("MainWindow", "192.168.8.2", 0));
        label_9->setText(QApplication::translate("MainWindow", "\345\237\237", 0));
        lineEdit_realm->setText(QApplication::translate("MainWindow", "3402000000", 0));
        pushButton_start->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", 0));
        pushButton_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
