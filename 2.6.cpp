#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	int m = a, n = b;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}

	while ((c = a % b) != 0)
	{
		a = b;
		b = c;
	}
	cout << "��������ǣ�" << b << endl;
	cout << "��С�������ǣ�" << m * n / b << endl;

}