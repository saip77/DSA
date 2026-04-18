#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    virtual void printName(){
        cout<<"Hello"<<endl;
    }
};

class Employee: public Person{
    public:
        void printName() override{
            cout<<"Hello world"<<endl;
        }
};

int main(){
    Person* p=new Employee();
    p->printName();
    return 0;
}
