#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14159265358979323846;
	double r, h;
	cout << "请输入圆锥的半径和高： ";
	cin >> r >> h;
	double volume = pi * r * r * h / 3;
	cout << "圆锥的体积为： " << volume << endl;
	return 0;
}