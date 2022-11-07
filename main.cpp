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

struct Student{
    string name;
    int score;
};
int main() {

    struct Student s = {"哈哈",100};
//    cout << __cplusplus << endl;
//    cout << BJMax(6,4)<<endl;
//    char ch[] = "abcd";
//    string str = "哈啊哈";
//    char *names[4] = {
//            "Zara Ali",
//            "Hina Ali",
//            "Nuha Ali",
//            "Sara Ali",
//    };
//
//    Book* bok = new Book(4);
//    bok->name = "haha";
//    delete bok;

    int arr[5] = { 0, 1, 2, 3, 4 };
    //数组的指针
    int (*arrPtr)[5] = &arr;
    //指针的数组
    int *ptrArr[5] = { &arr[0], &arr[1], &arr[2], &arr[3], &arr[4] };
    cout << "arrPtr: " << arrPtr << endl;
    cout << "*arrPtr:" << *arrPtr << endl;
    for (int i = 0; i < 5;i++)
    {
        cout << ( *arrPtr ) [i] << " ";
        cout << arrPtr [i] << " ";
        cout << ptrArr[i] << " ";
        cout << *(ptrArr[i] ) << " "<< endl;
    }

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

