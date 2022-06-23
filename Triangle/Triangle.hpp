//
//  Triangle.hpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include "Line.hpp"
#include <stdio.h>
#include<string>
#include<cmath>

using namespace std;

class Triangle {
    

public:
    Triangle(string, const Line &, const Line &, const Line &);
    
    void outputProperties(void);
    
    
    
private:
    const Line a;
    const Line b;
    const Line c;
    string name;
    double angleA;
    double angleB;
    double angleC;
    
    void calculateAngles(void);
    void calculateArea(void);
    void calculatePerimeter(void);
    void calculateTypeAngles(void);
    void calculateTypeEdges(void);
    
    
    
};


#endif /* Triangle_hpp */
