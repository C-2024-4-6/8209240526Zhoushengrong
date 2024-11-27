#include<iostream>
#include"mytriangle.h"
using namespace std;

int main()
{
	double a, b, c;
	cout << "请输入三角形三边长：";
	cin >> a >> b >> c;
	if (is_valid(a,b,c))
	{
		cout<<"三角形的面积是："<<area(a, b, c);
	}
	else cout << "不能构成三角形！";

	return 0;
}