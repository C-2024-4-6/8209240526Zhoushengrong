#include<iostream>
using namespace std;

void sort(double a[])
{
	bool change;
	double t;
	do
	{
		change = false;
		for (int j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				change = true;
			}
		}
	} while (change);
}
int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	sort(arr);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}