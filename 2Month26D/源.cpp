#include <iostream>
using namespace std;
//1号函数
void func(char ch) {
    cout << "#1" << endl;
}
//2号函数
void func(int n) {
    cout << "#2" << endl;
}
//3号函数
void func(long m) {
    cout << "#3" << endl;
}

struct MyStruct
{
    int a = 3;
};
//4号函数
void func(double f) {
    cout << "#4" << endl;
}
int main() {
<<<<<<< HEAD
    int a = 123;
=======

>>>>>>> 9f52a30762a284746dd2242e6aeea76bfdee9be0
    MyStruct test;
    test.a = 4;
    short s = 99;
    float f = 84.6;

    func('a');  //不需要类型转换，调用func(char)
    func(s);  //将short转换成int，调用func(int)
    func(49);  //不需要类型转换，调用func(int)
    func(f);  //将float转换成double，调用func(double)
    return 0;
}