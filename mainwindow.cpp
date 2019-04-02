#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "popup.h"
#include <QFile>
#include <iostream>
#include <QTextStream>
#include <fstream>
#include "connection.h"
#include <cstring>
#include <string>
#include <QTableView>
#include <QtSql>
#include <QSqlTableModel>
#include <stdlib.h>
#include <QSqlRecord>
#include <QSqlQuery>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::set_roles()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::set_tasks(QSqlTableModel *tasks)
{
    tasks->setTable("roles");
    tasks->select();
    tasks->setHeaderData(0,Qt::Horizontal,QObject::tr("Tasks"));
    tasks->setEditStrategy(QSqlTableModel::OnFieldChange);

    ui->tasks->setModel(tasks);
    ui->tasks->setColumnHidden(1,true);
    ui->tasks->setColumnWidth(0,200);
    ui->tasks->show();
    //tasks->setTable("list");
    //tasks->select();
     QSqlQuery query("SELECT `list1` FROM `list`");
     query.next();
    ui->Role1->setText(query.value(0).toString());
    query.next();
    ui->Role2->setText(query.value(0).toString());
    query.next();
    ui->Role4->setText(query.value(0).toString());
    query.next();
    ui->Role3->setText(query.value(0).toString());
    query.next();
    ui->role5->setText(query.value(0).toString());


}
void MainWindow::initializeCalendar(QSqlTableModel *calendar)
{
    calendar->setTable("combined");
    calendar->setEditStrategy(QSqlTableModel::OnManualSubmit);
    calendar->select();

    calendar->setHeaderData(0, Qt::Horizontal,QObject::tr("Time") );
    calendar->setHeaderData(1, Qt::Horizontal, QObject::tr("Monday"));
    calendar->setHeaderData(2, Qt::Horizontal, QObject::tr("Tuesday"));
    calendar->setHeaderData(3, Qt::Horizontal, QObject::tr("Wednesday"));
    calendar->setHeaderData(4, Qt::Horizontal, QObject::tr("Thursday"));
    calendar->setHeaderData(5, Qt::Horizontal, QObject::tr("Friday"));
    calendar->setHeaderData(6, Qt::Horizontal, QObject::tr("Saturday"));
    calendar->setHeaderData(7, Qt::Horizontal, QObject::tr("Sunday"));
    calendar->setEditStrategy(QSqlTableModel::OnFieldChange);

    ui->calendar->setModel(calendar);
    ui->calendar->setColumnWidth(0,60);
    ui->calendar->setColumnWidth(1,170);
    ui->calendar->setColumnWidth(2,170);
    ui->calendar->setColumnWidth(3,170);
    ui->calendar->setColumnWidth(4,170);
    ui->calendar->setColumnWidth(5,170);
    ui->calendar->setColumnWidth(6,170);
    ui->calendar->setColumnWidth(7,155);
    ui->calendar->show();

 }
void MainWindow::setpriorities(QSqlTableModel *priorities)
{
    priorities->setTable("priorities");
    priorities->setEditStrategy(QSqlTableModel::OnFieldChange);
    priorities->select();

    priorities->setHeaderData(0, Qt::Horizontal,QObject::tr("Time") );
    priorities->setHeaderData(1, Qt::Horizontal, QObject::tr("Monday"));
    priorities->setHeaderData(2, Qt::Horizontal, QObject::tr("Tuesday"));
    priorities->setHeaderData(3, Qt::Horizontal, QObject::tr("Wednesday"));
    priorities->setHeaderData(4, Qt::Horizontal, QObject::tr("Thursday"));
    priorities->setHeaderData(5, Qt::Horizontal, QObject::tr("Friday"));
    priorities->setHeaderData(6, Qt::Horizontal, QObject::tr("Saturday"));
    priorities->setHeaderData(7, Qt::Horizontal, QObject::tr("Sunday"));
    priorities->setEditStrategy(QSqlTableModel::OnFieldChange);

    ui->priorities->setModel(priorities);
    ui->priorities->setColumnWidth(0,60);
    ui->priorities->setColumnWidth(1,170);
    ui->priorities->setColumnWidth(2,170);
    ui->priorities->setColumnWidth(3,170);
    ui->priorities->setColumnWidth(4,170);
    ui->priorities->setColumnWidth(5,170);
    ui->priorities->setColumnWidth(6,170);
    ui->priorities->setColumnWidth(7,155);
    ui->priorities->show();

}
void MainWindow::on_pushButton_3_clicked()
{
    QSqlQuery query;
    query.exec("DELETE FROM combined WHERE 1");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('06:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('06:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('07:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('07:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('08:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('09:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('09:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('10:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('10:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('11:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('11:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('12:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('12:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('13:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('13:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('14:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('14:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('15:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('15:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('16:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('16:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('17:00','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('17:30','','','','','','','')");
    query.exec("INSERT INTO `combined`(`time`, `Monday`, `Tuesday`, `Wednesday`, `Thursday`, `Friday`, `Saturday`, `Sunday`) VALUES ('18:00','','','','','','','')");

   // QSqlTableModel model;
   //MainWindow::initializeModel(&model);

   ui->calendar->viewport()->update();
}
void MainWindow::setGoals(QSqlTableModel *goals)
{
goals->setTable("goals");
goals->setEditStrategy(QSqlTableModel::OnFieldChange);
goals->select();
goals->setHeaderData(0,Qt::Horizontal,QObject::tr("Goal"));
goals->setHeaderData(1,Qt::Horizontal,QObject::tr("Start Date"));
goals->setHeaderData(2,Qt::Horizontal,QObject::tr("End date"));

ui->goals->setModel(goals);
ui->goals->setColumnWidth(0,170);
ui->goals->setColumnWidth(1,170);
ui->goals->setColumnWidth(2,170);
ui->goals->setColumnWidth(3,170);
ui->goals->show();
}

void MainWindow::on_pushButton_clicked()
{
    popup pop;
    pop.show();
}
