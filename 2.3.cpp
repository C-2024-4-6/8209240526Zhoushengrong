#include <iostream>
using namespace std;

int main()
{
	int a, b, c, l;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		l = a + b + c;
		cout << "三角形的周长是" << l << endl;
		if (a == b || a == c || b == c)
			cout << "三角形是等腰三角形" << endl;
	}
	else cout << "不能构成三角形";

	return 0;

}