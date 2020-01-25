#include "livroderegistros.h"

Livroderegistros::Livroderegistros()
{

}

void Livroderegistros::inserirRegistro(Registro R)
{
    livroderegistro.push_back(R);
}

void Livroderegistros::salvarDados(QString file)
{
    QFile arquivo(file);

       arquivo.open(QIODevice::WriteOnly);

       for(auto a:livroderegistro){
           QString linha = a.getPeso() + "," + a.getDescricao() + "," + a.getEmpresa()+ "\n";
           arquivo.write(linha.toLocal8Bit());
       }
       arquivo.close();
}

void Livroderegistros::carregarDados(QString file)
{
    QFile arquivo(file);
        arquivo.open(QIODevice::ReadOnly);

        QString linha;
        QStringList dados;
        while(!arquivo.atEnd()){
            Registro temp;
            linha = arquivo.readLine();
            dados = linha.split(",");
            temp.setPeso(dados[0]);
            temp.setDescricao(dados[1]);
            temp.setEmpresa(dados[2]);
            inserirRegistro(temp);
        }
        arquivo.close();
}

Registro Livroderegistros::operator[](int indice)
{
    return livroderegistro[indice];
}

int Livroderegistros::size()
{

    return livroderegistro.size();

}


