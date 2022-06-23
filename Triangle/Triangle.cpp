//
//  Triangle.cpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#include "Triangle.hpp"

using namespace std;

Triangle::Triangle(string n, const Line &l1, const Line &l2, const Line &l3)
:
name(n),
a(l1),
b(l2),
c(l3)
{
    cout << "Triangle class constructor"<< name <<endl;
}
void Triangle::outputProperties(void){
    calculateArea();
    calculateAngles();
//calculatePerimeter();
  //  calculateTypeEdges();
    //calculateTypeAngles();
}
void Triangle::calculateAngles(){
    double magA = a.getMagnitude();
    double magB = b.getMagnitude();
    double magC = c.getMagnitude();
    
    angleA = acos((pow(magB,2)+pow(magC,2)-pow(magA,2))/(2*magB*magC))*180/M_PI;
    angleB = acos((pow(magA,2)+pow(magC,2)-pow(magB,2))/(2*magA*magC))*180/M_PI;
    angleC = acos((pow(magA,2)+pow(magB,2)-pow(magC,2))/(2*magA*magB))*180/M_PI;
    
    cout << "Angle A: "<< angleA<<endl;
    cout << "Angle B: " << angleB<<endl;
    cout << "Angle C: "<< angleC<<endl;
}
void Triangle::calculateArea(void){
    double area = 0.5*(a.getMagnitude()*b.getMagnitude())*sin(angleC*M_PI/180);
    cout << "Area is :"<<area <<endl;
}


