//
//  main.cpp
//  Triangle
//
//  Created by Havva Fatma Özbay on 23.06.2022.
//

#include <iostream>
#include "Triangle.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    const Point A("A",-2,3);
    cout << A<<endl;
    
    const Point B("B",5,12);
    cout << B << endl;
    
    const Point C("C",16,18);
    cout << C <<endl;
    
    const Line a("a",B,C);
    cout << a <<endl;
    
    const Line b("b",A,C);
    cout<< b << endl;
    
    const Line c("c",A,B);
    cout<< c << endl;
    
     Triangle t("t",a,b,c);
    t.outputProperties();
    return 0;
}
