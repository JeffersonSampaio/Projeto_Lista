#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>

class Cliente
{
public:
    Cliente();

    int getCodigo() const;
    void setCodigo(int value);

    QString getCpf() const;
    void setCpf(const QString &value);

    QString getNome() const;
    void setNome(const QString &value);

    QString getEmail() const;
    void setEmail(const QString &value);

    QString getFone() const;
    void setFone(const QString &value);

private:
    int codigo;
    QString cpf;
    QString nome;
    QString email;
    QString fone;

};

#endif // CLIENTE_H
