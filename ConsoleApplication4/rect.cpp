#include "rect.h"


Rectangle::Rectangle(int initialWidth, int initialHeight){
	assert(initialWidth > 0 && initialWidth < 100);
	assert(initialHeight > 0 && initialHeight < 100);
	width = initialWidth;
	height = initialHeight;
}

Rectangle::Rectangle(){
	width = 1;
	height = 1;
}

int Rectangle::get_width(){
	return width;
}

int Rectangle::get_height(){
	return height;
}

void Rectangle::set_width(int w){
	assert(w > 0 && w < 100 && "Width is out of range");
	width = w;
}

void Rectangle::set_height(int h){
	assert(h > 0 && h < 100 && "Width is out of range");
	height = h;
}

int Rectangle::area(){
	return width*height;
}

int Rectangle::perimeter(){
	return 2 * (width + height);
}

Rectangle Rectangle::operator=(Rectangle R){
	height = R.get_height();
	width = R.get_width();
	return *this;
}

bool operator==(Rectangle R1, Rectangle R2){
	if (R1.get_width() == R2.get_width() && R1.get_height() == R2.get_height())
		return true;
	else
		return false;
}

bool operator<(Rectangle R1, Rectangle R2){
	if (R1.area() < R2.area())
		return true;
	else
		return false;
}

bool operator<=(Rectangle R1, Rectangle R2){
	if (R1 < R2 || R1 == R2)
		return true;
	else
		return false;
}

bool operator>(Rectangle R1, Rectangle R2){
	if (!(R1 < R2) && !(R1 == R2))
		return true;
	else
		return false;
}

bool operator>=(Rectangle R1, Rectangle R2){
	if (!(R1 < R2))
		return true;
	else
		return false;
}

bool operator!=(Rectangle R1, Rectangle R2){
	if (!(R1 == R2))
		return true;
	else
		return false;
}

istream& operator>>(istream& is, Rectangle& R){
	int w;
	int h;
	char tmp;
	if (is.fail()){
		cout << "Didn't open" << endl;
		return is;
	}

	is >> w;
	tmp = is.get();
	is >> h;
	if (tmp == ','){
		if (w < 1 || w > 99 || h < 1 || h > 99){
			is.setstate(ios_base::failbit);
			return is;
		}
		R.set_width(w);
		R.set_height(h);
		return is;		
	}
	else{
		cout << "Incorrect information format" << endl;
		return is;
	}
}

ostream& operator<<(ostream& os, Rectangle R){
	os << "Length = " << R.get_height() << ", Width = " << R.get_width();
	return os;
}


