//
//  Point.cpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#include "Point.hpp"

using namespace std;

Point::Point(string Name, double X, double Y)
{
    setName(Name);
    setX(X);
    setY(Y);
    
    cout <<"Constructor of the Point Class"<<endl;
}

void Point::setX(double X){
    x=X;
}
void Point::setY(double Y){
    y=Y;
}
void Point::setName(string Name){
    name = Name;
}

double Point::getX ()const{
    return x;
}
double Point::getY() const
{
    return y;
}

string Point::getName() const
{
    return name;
}

ostream & operator<<(ostream &output, const Point &p){
    output << p.getName()<< "("<<p.getX() <<","<< p.getY()<<")"<<endl;
    return output;
}
