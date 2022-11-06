//
// Created by 杨云鹏 on 2022/11/6.
//
#include <iostream>
using namespace std;

namespace firstSpace{
    void func(){
        cout << "FirstSpace func" << endl;
    }
    namespace firstSpaceInSpace{
        void func3(){
            cout << "FirstSpaceInSpace func" << endl;
        }
    }
}
namespace firstSpace{
    void func1(){
        cout << "FirstSpace func1" << endl;
    }
}

namespace secondSpace{
    void func(){
        cout << "secondSpace" << endl;
    }
}

using namespace firstSpace;
//using namespace firstSpace::firstSpaceInSpace;
using namespace firstSpaceInSpace;
int main(){
    func();
    func1();
//    firstSpace::firstSpaceInSpace::func3();
    func3();
    secondSpace::func();
    return 0;
}