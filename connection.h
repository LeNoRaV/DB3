#ifndef CONNECTION_H
#define CONNECTION_H

#include <QDialog>

namespace Ui {
class Connection;
}

class Connection : public QDialog {
    Q_OBJECT

public:
    explicit Connection(QWidget *parent = nullptr);
    ~Connection();
    QString get_host();
    int get_port();
    QString get_DatabaseName();
    QString get_login();
    QString get_password();
    void set_host(const QString&);
    void set_port(int);
    void set_DatabaseName(const QString&);
    void set_login(const QString&);
    void set_password(const QString&);

private:
    Ui::Connection *ui;
};

#endif // CONNECTION_H
