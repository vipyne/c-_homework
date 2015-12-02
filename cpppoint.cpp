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


void Point::setData(int u, int v)
{
	X = u;
	Y = v;
	R = sqrt(u*u + v*v);
}

float Point::getRadius()const
{
    return R;
}

int Point::getX()const
{
	return X;
}

int Point::getY()const
{
	return Y;
}

void Point::ScalePoint(int scale)
{
	R *= scale;
}


int main(void) 
{
	struct Point P1;

	P1.setData(3, 4);
	std::cout << "Radius of P1 before scale: " << P1.getRadius() << std::endl;
	P1.ScalePoint(5);
	std::cout << "Radius of P1 after scale: " << P1.getRadius() << std::endl;

	return 0;
}
