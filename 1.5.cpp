#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//�������¶�ת��Ϊ�����¶�
	float a,b;
	cout << "�����뻪���¶ȣ�";
	cin >> a;
	b=(a-32)*5/9;
	cout << "�����¶��� " << setprecision(4)<<b << endl;
	return 0;


}