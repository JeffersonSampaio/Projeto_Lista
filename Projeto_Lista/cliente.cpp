#include "cliente.h"

Cliente::Cliente()
{

}

int Cliente::getCodigo() const
{
    return codigo;
}

void Cliente::setCodigo(int value)
{
    codigo = value;
}

QString Cliente::getCpf() const
{
    return cpf;
}

void Cliente::setCpf(const QString &value)
{
    cpf = value;
}

QString Cliente::getNome() const
{
    return nome;
}

void Cliente::setNome(const QString &value)
{
    nome = value;
}

QString Cliente::getEmail() const
{
    return email;
}

void Cliente::setEmail(const QString &value)
{
    email = value;
}

QString Cliente::getFone() const
{
    return fone;
}

void Cliente::setFone(const QString &value)
{
    fone = value;
}
