#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int val=n;
    return val + sum(n-1);
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int arraySum(int arr[], int i, int n){
    int sum = 0;
    if(n==0){
        return 0;
    }
    if(i==n-1){
        return arr[i];
    }
    sum = arr[i] + arraySum(arr, i+1, n);
    return sum;
}

int powerofTwo(int n){
    if(n==0){
        return 1;
    }
    return 2*powerofTwo(n-1);
}
int main(){
    int n = 5;
    cout<<"Sum of 1st "<<n<<" natural numbers = "<<sum(n)<<endl;
    cout<<"Factorial of "<<n<<" = "<<factorial(n)<<endl;
    int arr[] = {1,2,3,4,5};
    cout<<"Sum of elements in array = "<<arraySum(arr, 0, n)<<endl;
    cout<<"Power of 2 of "<<n<<" = "<<powerofTwo(n)<<endl;
    return 0;
}