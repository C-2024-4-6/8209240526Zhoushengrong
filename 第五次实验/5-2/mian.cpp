#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	stud.set_value(7, "tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}