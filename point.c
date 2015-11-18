#include <stdio.h>
#include <math.h>

struct Point {
	int X, Y;	// position
	float R;	// radius – distance from origin
};

void setData(struct Point*, int u, int v);
float getRadius(struct Point*);
int getX(struct Point *);  //accessor interface function
int getY(struct Point *);
void ScalePoint(struct Point *, int scale);

int main(void) 
{
	struct Point* P1;

	setData(P1, 3, 4);
	printf("Radius of P1 before scale: %f \n", getRadius(P1));
	ScalePoint(P1, 5);
	printf("Radius of P1 after scale: %f \n", getRadius(P1));

	return 0;
}

void setData(struct Point* pointPtr, int u, int v)
{
	pointPtr -> X = u;
	pointPtr -> Y = v;
	pointPtr -> R = sqrt(u*u + v*v);
}

float getRadius(struct Point* pointPtr)
{
	return pointPtr->R;
}

int getX(struct Point* pointPtr)
{
	return pointPtr->X;
}

int getY(struct Point* pointPtr)
{
	return pointPtr->Y;
}

void ScalePoint(struct Point* pointPtr, int scale)
{
	pointPtr->R *= 5;
}
