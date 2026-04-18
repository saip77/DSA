#include<iostream>
using namespace std;

//Defining struct
struct Student{
    string name;
    int age;
    float marks;
    void studentDetails(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl; 
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1;
    s1.name = "Sai Prasad";
    s1.age = 24;
    s1.marks = 10.0;
    s1.studentDetails();
    return 0;
}