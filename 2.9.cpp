#include <iostream>
using namespace std;

int main()
{
	int a = 2, day = 0, sum = 0, d = 0;
	float t = 0;
	do
	{
		day++;
		sum += a;
		a = a * 2;
		if (sum >= 100)break;
		t = sum;
		d = day;
	} while (1);
	cout << t << '\t' << d << endl;
	cout <<"平均每天花费的钱：" <<t * 0.8 / d << endl;
    return 0;
}