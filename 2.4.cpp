#include <iostream>
using namespace std;

int main()
{
	float a, b, d;
	char c;
	cout << "�������һ������:";
	cin >> a;
	cout << "�����������:";
	cin >> c;
	cout << "������ڶ�������:";
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
			cout << "��������Ϊ0��"; break;
		}
		else d = a / b; cout << d; break;
	}
	case 37:
	{
		if (b == 0)
		{
			cout << "��������Ϊ0��"; break;
		}
		else d = (int)a % (int)b; cout << d; break;
	}
	default:cout << "��������Ϸ���";
		break;
	}return 0;

}