#include<iostream>
using namespace std;

int fun1(int& a, int& b)
{
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	for (; a % b != 0;)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int fun2(int& a, int& b)
{
	int m = a, n = b;
	int t = fun1(a, b);
	return (m * n )/ t;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int m = a, n = b;
	cout << fun1(m, n) << endl;
	cout << fun2(a, b) << endl;

	return 0;
}