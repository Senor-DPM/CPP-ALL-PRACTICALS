using namespace std;
#include<iostream>

int main()
{
    int len;
    cout<<"Enter length of array : ";
    cin>>len;

    int arr1[len];
    for(int i=0; i<len; i++){
        int ele;
        cout<<"Enter an element : ";
        cin>>ele;
        arr1[i]=ele;
    }

    cout<<"Array : ";
    for(int x : arr1){
        cout<<x<<" ";
    }
    cout<<"\n";

    //Removing Duplicates

    int arr2[len], counter=0;
    for(int i=0; i<len; i++){
        bool dup=false;
        for(int j=0; j<i; j++){
            if(arr1[j] == arr1[i]){
                dup=true;
                break;
            }
        }
        if(dup==false){
            arr2[counter]=arr1[i];
            counter++;
        }
    }
    cout<<"Array without Duplicates : ";
    for(int x=0; x<counter; x++){
        cout<<arr2[x]<<" ";
    }
}