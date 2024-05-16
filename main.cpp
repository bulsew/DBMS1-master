
#include "mainwindow.h"
#include <QApplication>
#include"db.h"
#include"parser.h"
#include"table.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

//    DB *db;
//    Table c("sc",db);
//    string cp=c.DBadd;
//    cp.pop_back();
//    c.backupFolder(QString::fromStdString(cp));
    MainWindow w;
    w.show();
//    string add="D:\\program\\QT\\DBMS\\Ruanko\\test1\\sc";
//    if (!readFromFile(add)) cerr << "Error finding tabel." <<"  "<<add<<"   ."<< endl;



    return a.exec();


    //Table aa("student");
}
