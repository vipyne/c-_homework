#include <iostream>
#include <cmath>

struct Point {
	int X, Y;	// position
	float R;	// radius – distance from origin

	void setData(int u, int v);
	float getRadius()const;
	int getX()const;  //accessor functions
	int getY()const;
	void ScalePoint(int scale);
};

int main(void) 
{
	struct Point* P1;

	setData(P1, 3, 4);
	std::cout << "Radius of P1 before scale: " << getRadius(P1) << std::endl;
	ScalePoint(P1, 15);
	std::cout << "Radius of P1 after scale: " << getRadius(P1) << std::endl;

	return 0;
}

void setData(int u, int v)
{
	Point::X = u;
	Point::Y = v;
	Point::R = sqrt(u*u + v*v);
}

float getRadius()
{
	return Point::R;
}

int getX()
{
	return Point::X;
}

int getY()
{
	return Point::Y;
}

void ScalePoint(int scale)
{
	Point::R *= scale;
}
