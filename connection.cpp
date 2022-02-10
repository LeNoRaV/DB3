#include "connection.h"
#include "ui_connection.h"

Connection::Connection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connection) {
    ui->setupUi(this);
}

Connection::~OpenDialog() {
    delete ui;
}

QString Connection::get_host() {
    return ui->HostLineEdit->text();
}

int Connection::get_port() {
    return ui->PortLineEdit->text().toInt();
}

QString Connection::get_DatabaseName() {
    return ui->DBLineEdit->text();
}

QString Connection::get_login() {
    return ui->LoginLineEdit->text();
}

QString Connection::get_password() {
    return ui->PasswordLineEdit->text();
}

void Connection::set_host(const QString& host) {
    ui->HostLineEdit->insert(host);
}

void Connection::set_port(int port) {
    char buffer[128];
    itoa(port, buffer, 10);
    QString str(buffer);
    ui->PortLineEdit->insert(str);
}

void Connection::set_DatabaseName(const QString& dbName) {
    ui->DBLineEdit->insert(dbName);
}

void Connection::set_login(const QString& login) {
      ui->LoginLineEdit->insert(login);
}

void Connection::set_password(const QString& password) {
     ui->PasswordLineEdit->insert(password);
}
