#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float n, S;
    cout<<"Enter number of terms : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            S-= (1/pow(i,i));
        }
        else{
            S+= (1/pow(i,i));
        }
    }

    cout<<"Solution of the series : "<<S;
    return 0;
}