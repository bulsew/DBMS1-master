
#include "mainwindow.h"
#include <QApplication>
#include"db.h"
#include"parser.h"
#include"table.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);



    MainWindow w;
    w.show();
//    string add="D:\\program\\QT\\DBMS\\Ruanko\\test1\\sc";
//    if (!readFromFile(add)) cerr << "Error finding tabel." <<"  "<<add<<"   ."<< endl;



    return a.exec();
    //Table aa("student");
}
