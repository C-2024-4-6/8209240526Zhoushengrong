#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<bool,100> arr;
	arr.fill(false);
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; i*j < 100; j++)
		{
			int index = i * j - 1;
			if (arr[index])arr[index] = false;
			else arr[index] = true;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])cout << i + 1 << " ";
	}

	return 0;
}