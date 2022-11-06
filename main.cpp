#include <iostream>
#include "string"

using namespace std;

class Book {
public:
    Book(int r);
    string name;
    int count;
    int get();
    ~Book() {
        cout << "释放" << endl;
    }

    void set(string name, int count);
};

Book::Book(int r) :count(r){
    cout << "Book = " << count << endl;
}
int Book::get() {
    return 2;
}
void Book::set(string name, int count1) {

    this->name = name;
    count = count1;
}

template <typename T>
inline const T& Max(const T& a,const T& b) {
    return a < b ? b : a;
}

int BJMax(int a, int b) {
    return a < b ? b : a;
}
int main() {

    cout << BJMax(6,4)<<endl;
    char ch[] = "abcd";
    string str = "哈啊哈";
    char *names[4] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };

    Book* bok = new Book(4);
    bok->name = "haha";
    delete bok;


//    Book lol(1);
//    Book lol1(4);
//    lol.name = "haha";
//    lol.count = 1;
//
//    cout << "Book = " << lol.name << endl;
//
//    lol.set("heihie", 2);
//
//    cout << "Book = " << lol.name << endl;
//
//    int ia = 32;
//    int *arr;
//    arr = &ia;
//    cout << "Hello, World!" << names << endl;
//    cout << "Hello, World!" << str << endl;
//
//    bool flag = false;
//
//    if (flag) {
//        str = "嘿嘿";
//    } else {
//        str = "哈哈";
//    }
//
//    // 键盘输入
////    cin >> str;
////    cout << "input value = " + str << endl;
//
//    for (int i = 1; i < 10; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            cout << j << " x " << i << " = " << i * j << "\t";
//        }
//        cout << endl;
//    }


    return 0;
}

