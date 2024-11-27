#include<iostream>
using namespace std;

int main()
{
	int arr[11];
	int n=0;
	int t;
	cout << "Enter 10 numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> t;
		bool judge = true;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == t)
			{
				judge = false;
				break;
			}
		}
		if (judge) 
		{
			arr[n++] = t;
		}
	}
	cout << "The distinct numbers are:";
	cout << arr[0] << " ";
	for (int i=1;i<n;i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}