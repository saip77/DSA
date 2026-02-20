// Functions

#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
void print(int n){
  n = n + 10;
  cout << n << endl;
}
void show(float &m){
  cout << m + 10 << endl;
}
int main(){
    cout << add(10, 20) << endl;
    int n = 10;
    cout << "Before pass by value: " << n << endl;
    cout << "Pass by value: ";
    print(n);
    float m = 11.0;
    cout << "Before pass by reference: " << m << endl;
    cout << "After pass by reference: " ;
    show(m);
}