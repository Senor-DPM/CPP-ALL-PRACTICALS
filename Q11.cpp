using namespace std;

#include<iostream>
#include<fstream>

int main() {
    ifstream fhr("file1.txt");
    ofstream fhw("file2.txt");

    char ch;
    while(fhr.get(ch)){
        if(ch==' ' && ch=='\n'){continue;}
        else{
            fhw << ch;
        }
    }

    fhw.close();
    fhr.close();

    cout<<"Content copied successfully.";
    return 0;
}