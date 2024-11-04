#include <iostream>
using namespace std;

int main()
{
	float a, b, d;
	char c;
	cout << "请输入第一个数字:";
	cin >> a;
	cout << "请输入运算符:";
	cin >> c;
	cout << "请输入第二个数字:";
	cin >> b;
	switch (c)
	{
	case 43:d = a + b; cout << d; break;
	case 45:d = a - b; cout << d; break;
	case 42:d = a * b; cout << d; break;
	case 47:
	{
		if (b == 0)
		{
			cout << "除数不能为0！"; break;
		}
		else d = a / b; cout << d; break;
	}
	case 37:
	{
		if (b == 0)
		{
			cout << "除数不能为0！"; break;
		}
		else d = (int)a % (int)b; cout << d; break;
	}
	default:cout << "运算符不合法！";
		break;
	}return 0;

}