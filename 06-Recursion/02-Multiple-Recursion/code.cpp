#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int countWays(int n){
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return countWays(n - 1) + countWays(n - 2);
}
int main(){
    int n = 5;
    cout<<fibonacci(n)<<endl;
    cout<<countWays(n)<<endl;
    return 0;
}