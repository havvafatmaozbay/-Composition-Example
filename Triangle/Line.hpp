//
//  Line.hpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#ifndef Line_hpp
#define Line_hpp
#include "Point.hpp"


using namespace std;
    
class Line {
    
    friend ostream & operator<<(ostream &, const Line & );
    
    
public:
    Line(string n , const Point &pS, const Point &pE);
    void setName(string);
    void setMagnitude(double);
    
    string getName();
    double getMagnitude() const;
    
    Point getStartPoint() const;
    Point getEndPoint()const;
    
    void calculatemagnitude(void);
    
private:
    const Point start;
    const Point end;
    string name;
    double magnitude;
    
};

#endif /* Line_hpp */
