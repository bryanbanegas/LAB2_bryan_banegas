/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QPushButton *piramideButton;
    QTableWidget *tableWidget;
    QSpinBox *spinBox;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QPushButton *tarjetaButton;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(962, 680);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 931, 631));
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 170, 161, 61));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 260, 161, 61));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 360, 161, 61));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 100, 91, 21));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(360, 450, 161, 61));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        piramideButton = new QPushButton(tab_2);
        piramideButton->setObjectName("piramideButton");
        piramideButton->setGeometry(QRect(80, 170, 161, 61));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(350, 80, 431, 271));
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(80, 100, 141, 29));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 50, 251, 28));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 141, 20));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(50, 150, 251, 28));
        tarjetaButton = new QPushButton(tab_3);
        tarjetaButton->setObjectName("tarjetaButton");
        tarjetaButton->setGeometry(QRect(410, 120, 191, 81));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 50, 241, 41));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(90, 130, 241, 41));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(520, 60, 241, 41));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(520, 130, 241, 41));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(100, 210, 241, 41));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(520, 200, 241, 41));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 380, 281, 28));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 380, 61, 20));
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(570, 390, 281, 28));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 390, 81, 20));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 962, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ejercicio 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Ejercicio 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Ejercicio 3", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Menu", nullptr));
        piramideButton->setText(QCoreApplication::translate("MainWindow", "Hacer piramide", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Ejercicio 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Numeros de tajeta :", nullptr));
        tarjetaButton->setText(QCoreApplication::translate("MainWindow", "Confirmar si tarjeta es real", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Ejercicio 2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Letra a Binario", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Letra a Hexadecimal", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Letra a Decimal", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Binario a Letra", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Decimal a Letra", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Hexadecimal a Letra", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ingrese:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Respuesta:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Ejercicio 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
