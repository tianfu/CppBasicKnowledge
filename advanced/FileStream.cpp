//
// Created by 杨云鹏 on 2022/11/4.
// 文件和流
//
#include <iostream>
#include <fstream>
#include "string"

using namespace std;

int main(){

    string strName;
//    char *fileName = "file.dat";
    char fileName[] = "file.dat";
    strName = fileName;

    char *fName;
    fName = fileName;


//    int var = 200;
//    int *intName;
//    intName = &var;

    cout << fName << endl;
    return 0;
}