#include<iostream>
#include"mytriangle.h"
using namespace std;

int main()
{
	double a, b, c;
	cout << "���������������߳���";
	cin >> a >> b >> c;
	if (is_valid(a,b,c))
	{
		cout<<"�����ε�����ǣ�"<<area(a, b, c);
	}
	else cout << "���ܹ��������Σ�";

	return 0;
}