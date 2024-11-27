#include<iostream>
#include<vector>
using namespace std;

bool is_prime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	vector<vector<int>> prime(20, vector<int>(10, 0));
	int num = 0;
	int i = 0, j = 0;
		
	for (int k = 2; num < 200; k++)
	{
		
		if (is_prime(k))
		{
			prime[i][j] = k;
			num++;
			j++;
			if (j == 10) { j = 0; i++; }
		}
	}
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cout << prime[i][j] << '\t';
		}
		cout << endl;
	}
	
	return 0;
}