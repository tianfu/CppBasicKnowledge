//
// Created by 杨云鹏 on 2022/11/4.
// 文件和流
//
#include <iostream>
#include <fstream>
#include "string"

using namespace std;

#define ZeroException "Division by zero condition!"

int division(int a ,int b){
    if(b == 0){
        throw ZeroException;
    }
    return a/b;
}
int main() {

    string strName;
    char *fileName = "./指针.md";
    char data[100];
    strName = fileName;

    char *fName;
    fName = fileName;

//    ofstream write;
//    write.open(fileName);
//    cin.getline(data, 100);
//    write << data << endl;
//    cin >> data;
//    write << data << endl;
//    write.close();
//
//    ifstream infile;
//    infile.open(fileName);
//    infile >> data;
//    infile >> data;
//    infile.close();

//    int var = 200;
//    int *intName;
//    intName = &var;

    int a = 0;
    int b = 0;

    try {
        cin >> a ;
        cin >> b ;
        int i1 = division(a,b);
        cout << i1 << endl;
    } catch (const char *e){
        cout << e << endl;
    }

    return 0;
}