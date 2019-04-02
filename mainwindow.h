#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include "popup.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_roles();
    void set_tasks(QSqlTableModel *);
    int loadCalendar();
    void initializeCalendar(QSqlTableModel *);
    void setpriorities(QSqlTableModel *);
    void setGoals(QSqlTableModel *);


private slots:

    void on_pushButton_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

};



#endif // MAINWINDOW_H
