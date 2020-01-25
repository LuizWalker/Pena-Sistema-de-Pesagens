#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //adicionar o logotipo

    QPixmap logo("/home/ifpb/Documents/LUIZ WALKER (2-PROJETO DE PATRICK, NÃO APAGAR)/Pena balança.png");
    ui->logomarca->setPixmap(logo.scaled(691,131,Qt::KeepAspectRatio));

    //Adicionar as portas//

    for(auto& item : QSerialPortInfo::availablePorts()){
        ui->InputPortas->addItem(item.portName());
    }

    //Adicionar as velocidades//

    for(auto& item : QSerialPortInfo::standardBaudRates()){
        ui->InputVelocidade->addItem(QString::number(item));
    }

    //Recebendo sinal

    connect(&serial,
            SIGNAL(readyRead()),
            this,
            SLOT(dadosRecebidos()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BT_registrar_clicked()
{
     QString msg;

     QString massa = ui->Input_peso->text();
     QString info = ui->Input_carga->text();
     QString dono = ui->Input_empresa->text();

     if((registro.setPeso(massa))and(registro.setDescricao(info))and(registro.setEmpresa(dono))){

         int quantidade_linhas = ui->tabela_registros->rowCount();

         ui->tabela_registros->insertRow(quantidade_linhas);

         InserirNaTabela(registro,quantidade_linhas);
         livroderegistros.inserirRegistro(registro);

     }else{
         QMessageBox::critical(this,"Atenção: ","Todos os campos devem ser preenchidos corretamente");
     }
     ui->Input_peso->clear();
     ui->Input_carga->clear();
     ui->Input_empresa->clear();
}

void MainWindow::InserirNaTabela(Registro R, int linha)
{
    ui->tabela_registros->setItem(linha,0, new QTableWidgetItem(R.getPeso()));
    ui->tabela_registros->setItem(linha,1, new QTableWidgetItem(R.getDescricao()));
    ui->tabela_registros->setItem(linha,2, new QTableWidgetItem(R.getEmpresa()));
}

void MainWindow::on_actionSalvar_triggered()
{

    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    livroderegistros.salvarDados(filename);

}

void MainWindow::on_actionCarregar_triggered()
{

    QString filename;
      filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");
      livroderegistros.carregarDados(filename);

      atualizarDados();

      ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::atualizarDados()
{
   ui->tabela_registros->setRowCount(0);
    for(int i=0; i<livroderegistros.size();i++){
        ui->tabela_registros->insertRow(i);
        InserirNaTabela(livroderegistros[i],i);
    }
}

                        // BOTÕES CONECTAR E DESCONECTAR //


void MainWindow::on_BT_CONECTAR_clicked()
{
    serial.setPortName(ui->InputPortas->currentText());
    serial.setBaudRate(ui->InputVelocidade->currentText().toInt());

    if(serial.open(QIODevice::ReadWrite)){
        ui->Label_Status_Connect->setText("Conectado");
    }

}

void MainWindow::on_BT_DESCONETAR_clicked()
{
    serial.close();
    ui->Label_Status_Connect->setText("Desconectado");
}

                               // RECEBENDO OS DADOS //

void MainWindow::dadosRecebidos()
{

    auto data = serial.readAll();
    qDebug()<<data;
    auto dados = QJsonDocument::fromJson(data).object().toVariantMap();

           // precisa adicionar o nome dos Json's//

    if(dados.contains("PESO")){
       ui->Label_ValorSensor->setText(dados["PESO"].toString());
       ui->Input_peso->setText(dados["PESO"].toString());
    }
}

                              // ENVIANDO OS DADOS //


void MainWindow::on_BT_AcionarSensor_clicked() //TRAVAR A BALANÇA//
{
    serial.write("{\"SENSOR\": 1}");
}

void MainWindow::on_actionAjuda_triggered()
{
    QString url = "https://github.com/LuizWalker/Pena-Sistema-de-Pesagens";
    QDesktopServices::openUrl(QUrl(url));
}
