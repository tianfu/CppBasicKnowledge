#include <iostream>
#include "string"

using namespace std;

int main() {

    char ch[] = "啊";
    string str = "哈啊哈";

    cout << "Hello, World!" << sizeof ch << endl;
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
