#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	int hour, minute, sec;//����t1ΪTime�����
	cin >> hour;      //�����趨��ʱ�� 
	cin >> minute;
	cin >> sec;
	t1.gettime(hour, minute, sec);
	t1.show();
	return 0;
}