#include <iostream>
using namespace std;

int peach(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else
	{
		return (peach(day + 1) + 1) * 2;
	}
}

int main()
{
	int total = peach(1);
	cout << "��һ����ӹ�ժ��" << total << "������" << endl;
}