#include <iostream>
using namespace std;

int main()
{
	int a, b, c, l;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		l = a + b + c;
		cout << "�����ε��ܳ���" << l << endl;
		if (a == b || a == c || b == c)
			cout << "�������ǵ���������" << endl;
	}
	else cout << "���ܹ���������";

	return 0;

}