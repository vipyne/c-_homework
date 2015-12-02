//
//  main.cpp
//  midtermpoint
//
//  Created by vanessa pyne on 11/28/15.
//  Copyright © 2015 vanessa pyne. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}


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

float Point::getRadius()
{
    return R;
}

int Point::getX()
{
    return X;
}

int Point::getY()
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
    P1.ScalePoint(15);
    std::cout << "Radius of P1 after scale: " << P1.getRadius() << std::endl;
    
    return 0;
}
