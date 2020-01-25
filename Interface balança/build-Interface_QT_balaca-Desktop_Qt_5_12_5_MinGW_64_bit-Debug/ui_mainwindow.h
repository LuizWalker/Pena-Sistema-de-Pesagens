/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *Label_Status_Connect;
    QLabel *label_8;
    QLabel *Label_ValorSensor;
    QPushButton *BT_AcionarSensor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *InputPortas;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *InputVelocidade;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BT_CONECTAR;
    QPushButton *BT_DESCONETAR;
    QWidget *tab_3;
    QTableWidget *tabela_registros;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Input_peso;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *Input_carga;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *Input_empresa;
    QPushButton *BT_registrar;
    QLabel *logomarca;
    QMenuBar *menubar;
    QMenu *menuMENU;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(758, 509);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Condensed"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        actionSalvar->setFont(font);
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        actionCarregar->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 741, 451));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 20, 181, 20));
        QFont font1;
        font1.setPointSize(16);
        label_6->setFont(font1);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 250, 141, 51));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        label_7->setFont(font2);
        Label_Status_Connect = new QLabel(tab);
        Label_Status_Connect->setObjectName(QString::fromUtf8("Label_Status_Connect"));
        Label_Status_Connect->setGeometry(QRect(160, 250, 221, 61));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 360, 141, 51));
        label_8->setFont(font2);
        Label_ValorSensor = new QLabel(tab);
        Label_ValorSensor->setObjectName(QString::fromUtf8("Label_ValorSensor"));
        Label_ValorSensor->setGeometry(QRect(176, 350, 441, 71));
        BT_AcionarSensor = new QPushButton(tab);
        BT_AcionarSensor->setObjectName(QString::fromUtf8("BT_AcionarSensor"));
        BT_AcionarSensor->setGeometry(QRect(390, 280, 321, 23));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 80, 711, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        InputPortas = new QComboBox(layoutWidget);
        InputPortas->setObjectName(QString::fromUtf8("InputPortas"));

        horizontalLayout_2->addWidget(InputPortas);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_3->addWidget(label_5);

        InputVelocidade = new QComboBox(layoutWidget);
        InputVelocidade->setObjectName(QString::fromUtf8("InputVelocidade"));

        horizontalLayout_3->addWidget(InputVelocidade);


        verticalLayout_5->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 195, 711, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BT_CONECTAR = new QPushButton(layoutWidget1);
        BT_CONECTAR->setObjectName(QString::fromUtf8("BT_CONECTAR"));

        horizontalLayout_4->addWidget(BT_CONECTAR);

        BT_DESCONETAR = new QPushButton(layoutWidget1);
        BT_DESCONETAR->setObjectName(QString::fromUtf8("BT_DESCONETAR"));

        horizontalLayout_4->addWidget(BT_DESCONETAR);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabela_registros = new QTableWidget(tab_3);
        if (tabela_registros->columnCount() < 3)
            tabela_registros->setColumnCount(3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Impact"));
        font3.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font3);
        tabela_registros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font3);
        tabela_registros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font3);
        tabela_registros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabela_registros->setObjectName(QString::fromUtf8("tabela_registros"));
        tabela_registros->setGeometry(QRect(20, 270, 701, 141));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Impact"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        tabela_registros->setFont(font4);
        tabela_registros->horizontalHeader()->setMinimumSectionSize(36);
        tabela_registros->horizontalHeader()->setDefaultSectionSize(210);
        tabela_registros->horizontalHeader()->setStretchLastSection(true);
        tabela_registros->verticalHeader()->setCascadingSectionResizes(false);
        tabela_registros->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabela_registros->verticalHeader()->setStretchLastSection(false);
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 170, 701, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Impact"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);

        verticalLayout->addWidget(label);

        Input_peso = new QLineEdit(layoutWidget2);
        Input_peso->setObjectName(QString::fromUtf8("Input_peso"));

        verticalLayout->addWidget(Input_peso);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font5);

        verticalLayout_2->addWidget(label_2);

        Input_carga = new QLineEdit(layoutWidget2);
        Input_carga->setObjectName(QString::fromUtf8("Input_carga"));

        verticalLayout_2->addWidget(Input_carga);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font5);
        label_3->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label_3);

        Input_empresa = new QLineEdit(layoutWidget2);
        Input_empresa->setObjectName(QString::fromUtf8("Input_empresa"));

        verticalLayout_3->addWidget(Input_empresa);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        BT_registrar = new QPushButton(layoutWidget2);
        BT_registrar->setObjectName(QString::fromUtf8("BT_registrar"));
        BT_registrar->setFont(font4);
        BT_registrar->setMouseTracking(false);

        verticalLayout_4->addWidget(BT_registrar);

        logomarca = new QLabel(tab_3);
        logomarca->setObjectName(QString::fromUtf8("logomarca"));
        logomarca->setGeometry(QRect(20, 10, 701, 131));
        logomarca->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Downloads/Pena balan\303\247a.png")));
        logomarca->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 758, 21));
        menuMENU = new QMenu(menubar);
        menuMENU->setObjectName(QString::fromUtf8("menuMENU"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMENU->menuAction());
        menuMENU->addAction(actionSalvar);
        menuMENU->addAction(actionCarregar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCarregar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("MainWindow", "CONEX\303\203O :   ARDU\303\215NO - QT", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "STATUS DE CONEX\303\203O :", nullptr));
        Label_Status_Connect->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "SENSOR DE PESO (Kg):", nullptr));
        Label_ValorSensor->setText(QString());
        BT_AcionarSensor->setText(QApplication::translate("MainWindow", "Ativar a Balan\303\247a", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "PORTA SERIAL", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "VELOCIDADE DE TRANSFER\303\212NCIA", nullptr));
        BT_CONECTAR->setText(QApplication::translate("MainWindow", "CONECTAR", nullptr));
        BT_DESCONETAR->setText(QApplication::translate("MainWindow", "DESCONECTAR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Comunica\303\247\303\243o Serial", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela_registros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Peso(kg)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_registros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Descri\303\247\303\243o da Carga", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_registros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Empresa", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400;\">PESO(KG)</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400;\">DESCRI\303\207\303\203O DA CARGA</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400;\">EMPRESA</span></p></body></html>", nullptr));
        BT_registrar->setText(QApplication::translate("MainWindow", "Registrar", nullptr));
        logomarca->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Registrar Cargas", nullptr));
        menuMENU->setTitle(QApplication::translate("MainWindow", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
