#include <iostream>
using namespace std;

class CFZ
{
private:
	double height, length, width;
public:
	CFZ(double length, double width, double height) :length(length), width(width), height(height) {
	}
	double cal() {
		return length * width * height;
	}
};

int main() {
	double l, w, h;
	cout << "请输入长宽高：";
	cin >> l >> w >> h;
	CFZ cfz(l, w, h);
	double l_2, w_2, h_2;
	cout << "请输入长宽高：";
	cin >> l_2 >> w_2 >> h_2;
	CFZ cfz2(l_2, w_2, h_2);
	double l_3, w_3, h_3;
	cout << "请输入长宽高：";
	cin >> l_3 >> w_3 >> h_3;
	CFZ cfz3(l_3, w_3, h_3);
	cout << cfz.cal() << endl;
	cout << cfz2.cal() << endl;
	cout << cfz3.cal() << endl;
}