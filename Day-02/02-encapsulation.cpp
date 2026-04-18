#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
        string firstName;
        string lastName;
    public:
        void setFirstName(string f){
            firstName=f;
        }
        void setLastName(string l){
            this->lastName=l;
        }
        void printName(){
            cout<<firstName<<" "<<lastName<<endl;
        }
        string getFirstName(){
            return firstName;
        }
};

int main(){
    Person p;
    p.setFirstName("Hello");
    p.setLastName("World");
    p.printName();
    cout<<p.getFirstName()<<endl;
}