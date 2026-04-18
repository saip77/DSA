#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
        string firstName;
        string lastName;
        void printName(){
            cout<<firstName<<" "<<lastName<<endl;
        }
};

int main(){
    Person p;
    p.firstName="Sai";
    p.lastName="Prasad";
    p.printName();
}
