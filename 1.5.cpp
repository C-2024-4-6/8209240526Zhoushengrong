#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//将华氏温度转换为摄氏温度
	float a,b;
	cout << "请输入华氏温度：";
	cin >> a;
	b=(a-32)*5/9;
	cout << "摄氏温度是 " << setprecision(4)<<b << endl;
	return 0;


}