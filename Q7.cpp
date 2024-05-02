using namespace std;
#include <iostream>

int gcdFinder(int num1, int num2);

int main(){
    int n1, n2;
    cout<<"Enter two numbers, separated by a space : ";
    cin>>n1>>n2;

    cout<<"The gcd of "<<n1<<" and "<<n2<<" is "<<gcdFinder(n1,n2);
    return 0;
}

int gcdFinder(int num1, int num2){
    int gcd, quot, rem, a, b;
    if(num1>num2){
        a=num1; b=num2;
    }else{
        a=num2; b=num1;
    }
    while(true){
        quot = a/b;
        rem = a%b;
        if(rem==0){
            gcd=b;
            return gcd;
        }
        a = b;
        b = rem;        
    }    
}