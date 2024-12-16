#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x, int y) :x(x), y(y){}
	void setPoint(int i, int j);
	void display();
};
void Point::setPoint(int i , int j) {
	x += i;
	y += j;
}
void Point::display() {
	cout << x << " " << y << endl;
}
int main() {
	Point point(50, 80);
	point.setPoint(5, -23);
	point.display();
	return 0;
}