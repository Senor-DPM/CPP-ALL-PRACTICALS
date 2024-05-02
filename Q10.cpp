using namespace std;
#include <iostream>
#include <cmath>

class Triangle{
    public:
        int x, y, z;
        Triangle(int a, int b, int c);
        int calcArea(int b, int h);
        int calcArea(int a, int b, int c);
        ~Triangle(){};
};

Triangle :: Triangle(int a, int b, int c){
    try{
        if(a+b<c && a+c<b && b+c<a){
            throw "TriangleInequalityException";
        } else if(a<=0 || b<=0 || c<=0){
            throw "InvalidTriangle";
        } else {
            x=a;
            y=b;
            z=c;
        }
    } 
    catch (const char* e) {
        cout<<"Triangle is invalid. "<<e<<endl;
    }
}

int Triangle :: calcArea(int b, int h){
    float area=0.5*b*h;
    return area;
}

int Triangle :: calcArea(int a, int b, int c){
    float s=(a+b+c)/3;
    float area=pow(s*(s-a)*(s-b)*(s-c), 0.5);
    return area;
}