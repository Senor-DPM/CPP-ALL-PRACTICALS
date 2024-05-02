using namespace std;
#include <iostream>

int linSearchUnsorted(int arr[], int len, int x);

int main(){
    int N, num;
    cout<<"Enter the length of the set : ";
    cin>>N;
    int userArr[N];
    for(int i=0; i<N; i++){
        cout<<"Enter an element : ";
        cin>>userArr[i];
    }

    cout<<"Enter the number to be searched : ";
    cin>>num;

    cout<<"Index of element : "<<linSearchUnsorted(userArr, N, num);
    
    return 0;
}

int linSearchUnsorted(int arr[], int len, int x){
    for(int i=0; i<len; i++){
        if(arr[i]==x){
            return i;
        }
    }

    return -1;
}