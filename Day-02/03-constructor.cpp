#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
        string firstName;
        string lastName;
    public:
        Person(string f,string l){
            this->firstName=f;
            lastName=l;
        }
        Person() = default;
        string getFirstName(){
            return firstName;
        }
        void printName(){
            cout<<firstName<<" "<<lastName<<endl;
        }
};

int main(){
    Person p("Sai","Prasad");
    p.printName();
    cout<<p.getFirstName()<<endl;
}

//Note: When you create an object of a class, the constructor is called automatically, and when you create constructor it removes ability to create object without setting data members.