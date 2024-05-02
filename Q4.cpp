using namespace std;
#include <iostream>
#include <string>

#include <iostream>
using namespace std;

void showAddress(const char* str);
void concatenateStrings(string str1, string str2);
int compareStrings(string str1, string str2);
int stringLength(char* str);
int convertToLowercase(char* str);
void reverseString(char* str);
void insertString(char* mainStr, char* subStr, int position);

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter string 1: ";
    cin.getline(str1, 100);

    cout << "Enter string 2: ";
    cin.getline(str2, 100);
    
    while(true){
        cout << "\nChoose operation:" << endl;
        cout << "(1) Show address of each character in string" << endl;
        cout << "(2) Concatenate two strings" << endl;
        cout << "(3) Compare two strings" << endl;
        cout << "(4) Calculate length of the string" << endl;
        cout << "(5) Convert all lowercase characters to uppercase" << endl;
        cout << "(6) Reverse the string" << endl;
        cout << "(7) Insert a string in another string at a user specified position" << endl;
        cout << "(0) Exit";
        cout << "Enter choice: ";
        cin >> choice;
        if(choice==0){
            break;
        }

        switch (choice) {
            case 1:
                showAddress(str1);
                showAddress(str2);
                break;
            case 2:
                concatenateStrings(str1, str2);
                break;
            case 3:
                compareStrings(str1, str2);
                cout<<endl;
                break;
            case 4:
                cout << "Length of string 1: " << stringLength(str1) << endl;
                cout << "Length of string 2: " << stringLength(str2) << endl;
                break;
            case 5:
                convertToLowercase(str1);
                convertToLowercase(str2);
                cout << "Strings converted to lowercase." << endl;
                cout << "String 1: " << str1 << endl;
                cout << "String 2: " << str2 << endl;
                break;
            case 6:
                reverseString(str1);
                reverseString(str2);
                cout << "Strings reversed." << endl;
                cout << "String 1: " << str1 << endl;
                cout << "String 2: " << str2 << endl;
                break;
            case 7:
                int position;
                cout << "Enter position to insert string into string 1: ";
                cin >> position;
                insertString(str1, str2, position);
                cout << "String 1 after insertion: " << str1 << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    return 0;
}

void showAddress(const char* str) {
    cout << "Address of characters in string: ";
    while (*str != '\0') {
        cout << static_cast<const void*>(str) << " ";
        str++;
    }
    cout << endl;
}

void concatenateStrings(string str1, string str2) {
    string str3 = str1+str2;
    cout << "Concatenated string: " << str3 << endl;
}

int compareStrings(string str1, string str2) {
    if(str1 > str2){
        cout<<"String 1 is greater than String 2"<<endl;
    }else if(str1 < str2){
        cout<<"String 1 is lesser than String 2"<<endl;
    }else{
        cout<<"Both strings are equal."<<endl;
    }

    return 0;
}

int stringLength(char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int convertToLowercase(char* str) {
    int len = stringLength(str);
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return 0;
}

void reverseString(char* str) {
    char* start = str;
    char* end = str;
    while (*end) {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void insertString(char* mainStr, char* subStr, int position) {
    int mainLen = stringLength(mainStr);
    int subLen = stringLength(subStr);
    if (position < 0 || position > mainLen) {
        cout << "Invalid position" << endl;
        return;
    }
    for (int i = mainLen; i >= position; i--) {
        mainStr[i + subLen] = mainStr[i];
    }
    for (int i = 0; i < subLen; i++) {
        mainStr[position + i] = subStr[i];
    }
}