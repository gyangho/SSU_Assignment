#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	int x;
	int y;
	int width;
	int height;

	friend ostream& operator << (ostream& os, Rectangle& r);

public:
	Rectangle();
	~Rectangle();
	Rectangle operator + (Rectangle& r);
	Rectangle operator / (Rectangle& r);
	bool operator==(const Rectangle& s);
	void read();
	void getArea();
};

