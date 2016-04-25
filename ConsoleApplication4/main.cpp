#include "rect.h"
#include <fstream>

int main(){
	ifstream inf;
	ofstream outf;
	Rectangle rect1(9, 9);
	Rectangle rect2(4, 5);
	Rectangle rect3(9, 9);
	Rectangle rect4(90, 70);

	inf.open("test.txt");
	inf >> rect4;

	inf.close();

	cout << "rect4 Height: " << rect4.get_height() << " Width: " << rect4.get_width() << endl;
	cout << "Area: " << rect4.area() << " Perimeter: " << rect4.perimeter() << endl;

	outf.open("rtest.txt");
	outf << rect4;

	outf.close();

	cout << "rect1 Height: " << rect1.get_height() << " Width: " << rect1.get_width() << endl;
	cout << "Area: " << rect1.area() << " Perimeter: " << rect1.perimeter() << endl;

	cout << "rect2 Height: " << rect2.get_height() << " Width: " << rect2.get_width() << endl;
	cout << "Area: " << rect2.area() << " Perimeter: " << rect2.perimeter() << endl;

	cout << "rect3 Height: " << rect3.get_height() << " Width: " << rect3.get_width() << endl;
	cout << "Area: " << rect3.area() << " Perimeter: " << rect3.perimeter() << endl;

	cout << "rect4 Height: " << rect4.get_height() << " Width: " << rect4.get_width() << endl;
	cout << "Area: " << rect4.area() << " Perimeter: " << rect4.perimeter() << endl;


	if (rect1 == rect3){
		cout << "== good" << endl;
	}
	else
		cout << "== bad" << endl;

	if (rect1 == rect2){
		cout << "== bad" << endl;
	}
	else
		cout << "== good" << endl;

	if (rect1 < rect2){
		cout << "< bad" << endl;
	}
	else
		cout << "< good" << endl;

	if (rect1 <= rect2){
		cout << "<= bad" << endl;
	}
	else
		cout << "<= good" << endl;

	if (rect1 > rect2){
		cout << "> good" << endl;
	}
	else
		cout << "> bad" << endl;

	if (rect1 >= rect2){
		cout << ">= good" << endl;
	}
	else
		cout << ">= bad" << endl;

	if (rect1 != rect2){
		cout << "!= good" << endl;
	}
	else
		cout << "!= bad" << endl;

	rect1.set_height(1);
	rect1.set_width(2);

	cout << "rect1 Height: " << rect1.get_height() << " Width: " << rect1.get_width() << endl;
	cout << "Area: " << rect1.area() << " Perimeter: " << rect1.perimeter() << endl;

	rect1 = rect2;

	cout << "rect1 Height: " << rect1.get_height() << " Width: " << rect1.get_width() << endl;
	cout << "Area: " << rect1.area() << " Perimeter: " << rect1.perimeter() << endl;

	return 0;
}