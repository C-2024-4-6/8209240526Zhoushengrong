#include <iostream>
#include <string>
#include"student.h"//��Ҫ©д���У��������ͨ����
using namespace std;

void Student::display()         //�����ⶨ��display�ຯ��
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