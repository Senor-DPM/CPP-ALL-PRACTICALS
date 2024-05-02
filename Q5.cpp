using namespace std;
#include <iostream>

int arrMerger(int arr1[], int len1, int arr2[], int len2);
void printArr(int arr[], int len);

int main(){
    int n1, n2;
    cout<<"Enter number of elements array A: ";
    cin>>n1;
    int arrA[n1];
    for(int i=0; i<n1; i++){
        cout<<"Enter an element for array A : ";
        cin>>arrA[i];
    }

    cout<<"Enter number of elements array B: ";
    cin>>n2;
    int arrB[n2];
    for(int i=0; i<n2; i++){
        cout<<"Enter an element for array B : ";
        cin>>arrB[i];
    }
    cout<<"\nArray A : ";
    printArr(arrA, n1);
    cout<<"\nArray B : ";
    printArr(arrB, n2);
    cout<<endl;

    arrMerger(arrA, n1, arrB, n2);

    return 0;
}

int arrMerger(int arr1[], int len1, int arr2[], int len2){
    int lenF = len1 + len2;
    int arrF[lenF];
    int counter1=0, counter2=0, counterF=0;
    while(counter1<len1 && counter2<len2){
        if(arr1[counter1]<arr2[counter2]){
            arrF[counterF++]=arr1[counter1++];
        } else{
            arrF[counterF++]=arr2[counter2++];
        }
    }

    while(counter1<len1){
        arrF[counterF++] = arr1[counter1++];
    }

    while(counter2<len1){
        arrF[counterF++] = arr2[counter2++];
    }

    cout<<"Final array after merging : ";
    printArr(arrF, lenF);

    return 0;
}

void printArr(int arr[], int len){
    for(int x=0; x<len; x++){
        cout<<arr[x]<<", ";
    }
}