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
        void setName(string f,string l){
            firstName=f;
            this->lastName=l;
        }
        string getFirstName(){
            return firstName;
        }
        void printName(){
            cout<<firstName<<" "<<lastName<<endl;
        }
};

class Employee: public Person{
    public:
        string department;
        Employee(string f,string l, string department): Person(f,l){
            this->department=department;
        }
        void getDetails(){
            cout<<getFirstName()<<" "<<department<<endl;
        }
};

int main(){
    Employee e("Sai","Prasad","Software");
    e.printName();
    e.getDetails();
    cout<<e.getFirstName()<<endl;
}