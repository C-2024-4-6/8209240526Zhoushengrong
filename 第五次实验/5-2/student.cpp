#include <iostream>
#include <string>
#include"student.h"//不要漏写此行，否则编译通不过
using namespace std;

void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "mame:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num, string name, char sex) {
    this->num = num;
    this->name = name;
    this->sex = sex;
}