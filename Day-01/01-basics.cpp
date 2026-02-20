// Basics of C++

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    cout << "Enter your years of experience: ";
    int years;
    cin >> years;
    if(years >= 5)
    {
        cout << "You are an experienced professional!" << endl;
    }
    else
    {
        cout << "You are junior!" << endl;
    }
}