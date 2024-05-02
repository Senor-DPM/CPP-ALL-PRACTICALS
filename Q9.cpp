using namespace std;
#include <iostream>
#include <string>

class Person{
    public:
        string name;
        virtual void display();
        Person(string n) : name(n){};
};

class Student : public Person{
    public:
        string course;
        float marks;
        int year;
        Student(string n, string c, float m, int y) : Person(n), course(c), marks(m), year(y){};
        void display();
};

class Employee : public Person{
    public:
        string dept;
        int sal;
        Employee(string n, string d, int s) : Person(n), dept(d), sal(s){};
        void display();
};

void Person :: display(){
    cout<<"Name : "<<name<<endl;
}

void Student :: display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Course : "<<course<<endl;
    cout<<"Marks : "<<marks<<endl;
    cout<<"Year : "<<year<<endl;
}

void Employee :: display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Department : "<<dept<<endl;
    cout<<"Salary : "<<sal<<endl;
}

void show_info(Person *obj) {
    obj->display();
}

int main() {
    Student s("John", "Computer Science", 85.5, 3);
    Employee e("Alice", "Human Resources", 50000);

    show_info(&s);
    cout<<endl;
    show_info(&e);

    return 0;
}