#include <iostream>
using namespace std;

int main()
{
	char a, b, c;
	cin >> a;
	if (a >= 97 && a <= 122)
	{
		b = a - 32;
		cout << b;
	}
	else cout << a + 1;
}