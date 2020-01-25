#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QTextStream>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
#include <QString>

//Bibliotecas para a leitura da porta serial

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>
//

#include "registro.h"
#include "livroderegistros.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QSerialPort serial;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_BT_registrar_clicked();

    void InserirNaTabela(Registro R, int linha);

    void on_actionSalvar_triggered();

    void on_actionCarregar_triggered();

    void atualizarDados();

    void on_BT_CONECTAR_clicked();

    void on_BT_DESCONETAR_clicked();

    void dadosRecebidos();


    void on_BT_AcionarSensor_clicked();

    void on_actionAjuda_triggered();

private:
    Ui::MainWindow *ui;

    Registro registro;
    Livroderegistros livroderegistros;

};
#endif // MAINWINDOW_H
