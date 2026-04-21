#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,-5,6,-8,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int currentSum = arr[0];
    int maxSum = arr[0];
    for(int i = 1; i < n; i++){
        currentSum = max(arr[i], arr[i] + currentSum);
        maxSum = max(maxSum, currentSum);
    }
    cout<<"Max sum: "<<maxSum<<endl;
    return 0;
}