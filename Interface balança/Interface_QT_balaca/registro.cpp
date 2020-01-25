#include "registro.h"

QString Registro::getPeso() const
{
    return peso;
}

bool Registro::setPeso(const QString &value)
{
    if(value.size()>0){

        peso = value;
        return true;
    }else{
        return false;
    }
}

QString Registro::getDescricao() const
{
    return descricao;
}

bool Registro::setDescricao(const QString &value)
{
    if(value.size()>3){

        descricao = value;
        return true;
    }else{
        return false;
    }
}

QString Registro::getEmpresa() const
{
    return empresa;
}

bool Registro::setEmpresa(const QString &value)
{
    if(value.size()>2){

        empresa = value;
        return true;
    }else{
        return false;
    }
}

Registro::Registro()
{

}
