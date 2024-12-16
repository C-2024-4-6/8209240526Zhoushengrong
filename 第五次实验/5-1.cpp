#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void gettime(int hour,int minute,int sec) {
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void show() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1; 
	int hour, minute, sec;//定义t1为Time类对象
	cin >> hour;      //输入设定的时间 
	cin >> minute;
	cin >> sec;
	t1.gettime(hour, minute, sec);
	t1.show();
	return 0;
}