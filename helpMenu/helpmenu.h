#ifndef HELPMENU_H
#define HELPMENU_H

#include <QWidget>

namespace Ui {
class Helpmenu;
}

class Helpmenu : public QWidget
{
    Q_OBJECT

public:
    explicit Helpmenu(QWidget *parent = nullptr);
    ~Helpmenu();

private slots:

private:
    Ui::Helpmenu *ui;
};

#endif // HELPMENU_H
