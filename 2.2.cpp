#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	if (0 < x && x < 10)

	{
		if (x < 1)
		{   y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (x < 5)
		{	y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else
		{   y = x * x;
			cout << y << endl;
		}
	}
	else   cout << "x���ڶ�������" << endl;
	return 0;

}