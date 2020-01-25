#ifndef LIVRODEREGISTROS_H
#define LIVRODEREGISTROS_H

#include <QVector>
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include "registro.h"

class Livroderegistros
{
private:

    QVector<Registro> livroderegistro;

public:

    Livroderegistros();

    void inserirRegistro(Registro R);
    void salvarDados(QString file);
    void carregarDados(QString file);

    Registro operator[](int indice);

    int size();

};

#endif // LIVRODEREGISTROS_H
