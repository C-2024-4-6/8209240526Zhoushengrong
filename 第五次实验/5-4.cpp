#include<iostream>
using namespace std;

class Student
{
private:
	int id;
	int score;
public:
	Student(int id,int score):id(id),score(score){}
	void max(Student *p) {
		int s = p->score;
		int i = p->id;
		for (int j = 1; j < 5; j++) {
			if (s < (p + j)->score) {
				s = (p + j)->score;
				i = (p + j)->id;
			}
		}
		cout << "最高分是：" << s << endl;
		cout << "学号是：" << i << endl;
	}
};

int main() {
	Student stu[5] = { {1,80},{2,70},{3,90},{4,85},{5,75} };
	stu->max(stu);
	return 0;
}