#include<iostream>
using namespace std;
void softarr(int* arr, int n)
{
	for (int j = n - 1; j > 0; j--)
	{
		for (int i = 0; i < j; i++) { if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]); }
	}
}
int main()
{
	cout << "����Ԫ�ظ���: ";
	int n; cin >> n;
	int* p = new int[100];
	int* q = p;
	int* s = p;
	cout << "����Ԫ��: ";
	for (int i = 0; i < n; i++)
	{
		cin >> *p;
		p++;
	}
	softarr(q, n);
	cout << "����������Ϊ: ";
	for (int i = 0; i < n; i++)
	{
		cout << *q << " ";
		q++;
	}
	delete[] s;
	return 0;
}