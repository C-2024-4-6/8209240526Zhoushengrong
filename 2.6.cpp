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
	cout << "最大公因数是：" << b << endl;
	cout << "最小公倍数是：" << m * n / b << endl;

}