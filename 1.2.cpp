#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14159265358979323846;
	double r, h;
	cout << "������Բ׶�İ뾶�͸ߣ� ";
	cin >> r >> h;
	double volume = pi * r * r * h / 3;
	cout << "Բ׶�����Ϊ�� " << volume << endl;
	return 0;
}