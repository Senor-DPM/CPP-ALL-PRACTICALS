using namespace std;
#include <iostream>
#include <cmath>

class Triangle{
    public:
        double x, y, z;
        Triangle(double a, double b, double c);
        double calcArea(double b, double h);
        double calcArea();
        ~Triangle(){};
};

Triangle :: Triangle(double a, double b, double c){
    try{
        if(a+b<c || a+c<b || b+c<a){
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

double Triangle :: calcArea(double b, double h){
    double area=0.5*b*h;
    return area;
}

double Triangle :: calcArea(){
    double s=(x+y+z)/2;
    double area=pow(s*(s-x)*(s-y)*(s-z), 0.5);
    return area;
}

int main(){
    Triangle t1(4,7,4);
    Triangle t2(3,4,5);
    Triangle t3(3,6, 1);
    cout<<"Area of t1 : "<<t1.calcArea()<<endl;
    cout<<"Area of t2 : "<<t2.calcArea(3,4)<<endl;
}