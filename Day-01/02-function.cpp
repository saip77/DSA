#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

void print(int n){
    n = n + 10;
    cout << "Inside pass by value: " << n << endl;
}

void show(float &m){
    m = m + 10;
    cout << "Inside pass by reference: " << m << endl;
}

int main(){
    cout << add(10, 20) << endl;

    int n = 10;
    cout << "Before pass by value: " << n << endl;
    print(n);
    cout << "After pass by value: " << n << endl;

    float m = 11.0;
    cout << "Before pass by reference: " << m << endl;
    show(m);
    cout << "After pass by reference: " << m << endl;

    return 0;
}