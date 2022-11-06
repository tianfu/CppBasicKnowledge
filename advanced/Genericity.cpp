//
// Created by 杨云鹏 on 2022/11/6.
// 模版   泛型基础
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 函数模版
template<typename M>
// inline（内联）函数的定义将在编译时在调用处展开。
inline M const &Max(const M &a, const M &b) {
    return a > b ? a : b;
}

// 类模板
template <class T>
class Stack{
private:
    vector<T> elements;

public:
    void push(const T &);
    T top() const;
    void pop();
};

template<class T>
void Stack<T>::push(const T & ele) {
    elements.push_back(ele);
}

template<class T>
T Stack<T>::top() const{
    if (elements.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template<class T>
void Stack<T>::pop() {

    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elements.pop_back();
}


int main() {

    int a = 5;
    int b = 3;
    std::cout << Max(a, b) << std::endl;

    try{

        Stack<int> intStack;
        intStack.push(8);
        cout << intStack.top() << endl;

        Stack<string> stringStack;
        stringStack.push("aa");
        cout << stringStack.top() << endl;
        stringStack.pop();
        stringStack.pop();

    } catch (exception const &ex) {
        cerr << "Exception:" << ex.what() << endl;
        return -1;
    }


    return 0;
}
