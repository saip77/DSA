#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float marks;
};

int main(){
    Student s;
    s.id = 10;
    s.name = "Sai Prasad";
    s.marks = 10.0;
    cout << "Id: " << s.id << endl;
    cout << "Name: " << s.name << endl; 
    cout << "Marks: " << s.marks << endl;
    return 0;
}