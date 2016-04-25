#include<iostream>
#include<cassert>
using namespace std;
class Rectangle{
	int height;
	int width;
public:
	Rectangle(int, int);
	Rectangle();
	int get_width();
	int get_height();
	void set_width(int);
	void set_height(int);
	int area();
	int perimeter();
	Rectangle operator=(Rectangle);
	friend bool operator==(Rectangle, Rectangle);
	friend bool operator<(Rectangle, Rectangle);
	friend bool operator<=(Rectangle, Rectangle);
	friend bool operator>(Rectangle, Rectangle);
	friend bool operator>=(Rectangle, Rectangle);
	friend bool operator!=(Rectangle, Rectangle);
	friend istream& operator>>(istream&, Rectangle);
	friend ostream& operator<<(ostream&, Rectangle);
};