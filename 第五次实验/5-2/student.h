#include <string>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int num, string name, char sex);
private:
	int num;
	string name;
	char sex;
};
