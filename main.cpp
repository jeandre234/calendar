#include "mainwindow.h"
#include "connection.h"
#include "popup.h"
#include <QApplication>
#include <QTextStream>
#include <QFile>
#include <QString>
#include <QLabel>
#include <QPushButton>
#include <QSqlTableModel>
#include <QTableView>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.set_roles();

    createConnection();
    QSqlTableModel calendar;
    QSqlTableModel tasks;
    QSqlTableModel priorities;
    QSqlTableModel goals;
    w.setpriorities(&priorities);
    w.set_tasks(&tasks);
    w.initializeCalendar(&calendar);
    w.setGoals(&goals);
    w.showFullScreen();

    return a.exec();
}
