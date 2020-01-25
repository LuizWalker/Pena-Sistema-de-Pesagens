#ifndef REGISTRO_H
#define REGISTRO_H

#include<QString>

class Registro
{
private:

    QString peso;
    QString descricao;
    QString empresa;

public:
    Registro();

    QString getPeso() const;
    bool setPeso(const QString &value);

    QString getDescricao() const;
    bool setDescricao(const QString &value);

    QString getEmpresa() const;
    bool setEmpresa(const QString &value);
};

#endif // REGISTRO_H
