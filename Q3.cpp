using namespace std;

#include <iostream>
#include <string>

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    for(char ch='a'; ch<='z'; ch++){
        int count = 0;
        for(char x : str){
            if(tolower(x)==ch){
                count++;
            }
        }
        if(count>0){
            cout<<ch<<"\t"<<count<<endl;
        }
    }

    return 0;
}