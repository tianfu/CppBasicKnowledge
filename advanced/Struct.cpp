//
// Created by 杨云鹏 on 2022/11/7.
//
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

void printStudentInfo(const Student *s){
//    s->name = "Jerry";  加入 const 修饰，一旦有修改的操作就会报错，可以防止误操作
    cout << s->name << s->score << endl;
}

int main(){
    struct Student sArray[2];
    sArray[0].score = 50;
    sArray[0].name = "Tom";
    sArray[1].score = 80;
    sArray[1].name = "Jerry";

    for (int i = 0; i < sizeof sArray / sizeof sArray[0]; ++i) {
        cout << " score : " << sArray[i].score << " name : " << sArray[i].name << endl;
    }


    struct Student s1Array[3] = {
            {"Tom",80},
            {"Jerry",90},
            {"Jack",100}
    };

    for (auto & student : s1Array) {
        cout << " score : " << student.score << " name : " << student.name << endl;
    }

    struct Student s = {"Tom",18};
    Student *p = &s;
    printStudentInfo(&s);
    printStudentInfo(p);
    return 0;
}

