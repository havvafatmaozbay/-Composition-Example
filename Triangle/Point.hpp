//
//  Point.hpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#ifndef Point_hpp
#define Point_hpp

#include<iostream>
#include <stdio.h>

#include<string>
#include<cmath>

using namespace std;

class Point{
    
    friend ostream & operator<<(ostream &, const Point & );
private:
    double x;
    double y;
    string name;
    
public:
    Point(string, double, double);
    void setX(double);
    void setY(double);
    void setName(string);
    double getX() const;
    double getY() const;
    string getName() const;
    
    
};

#endif /* Point_hpp */
