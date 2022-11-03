#include <iostream>
#include "string"

using namespace std;

int main() {

    char ch[] = "abcd";
    string str = "哈啊哈";
    char *names[4] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };

    int ia = 32;
    int *arr;
    arr = &ia;
    cout << "Hello, World!" << names << endl;
    cout << "Hello, World!" << str << endl;

    bool flag = false;

    if (flag) {
        str = "嘿嘿";
    } else {
        str = "哈哈";
    }

    // 键盘输入
//    cin >> str;
//    cout << "input value = " + str << endl;

    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " x " << i << " = "<< i*j << "\t";
        }
        cout << endl;
    }


    return 0;
}

