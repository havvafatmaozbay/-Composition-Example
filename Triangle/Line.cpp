//
//  Line.cpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//
#include<iostream>
#include "Line.hpp"
using namespace std;

Line::Line(string n, const Point &pS, const Point &pE)
:name(n),
start(pS),
end(pE)
{
    cout << "Şine object constructor for Line"<<name<<endl;
    calculatemagnitude();
    
}
void Line::setName(string Name){
    name = Name;
}
void Line::setMagnitude(double m){
    magnitude = m;
}

string Line::getName(){
    return name;
}
double Line::getMagnitude() const{
    return magnitude;
}

Point Line::getEndPoint() const{
    return end;
}
Point Line::getStartPoint() const{
    return start;
}
void Line::calculatemagnitude(){
    magnitude = sqrt(pow((start.getX()-end.getX()),2) + pow((start.getY()-end.getY()),2));
    cout << "magitude of line "<< name << magnitude<< endl;
}
ostream & operator<< (ostream &output, const Line &line){
    output << line.getEndPoint();
    return output;
}

