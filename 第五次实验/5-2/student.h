#include <string>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num, string name, char sex);
private:
	int num;
	string name;
	char sex;
};
