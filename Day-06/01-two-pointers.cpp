#include<bits/stdc++.h>
using namespace std;

int main(){
    //Converging 2 pointer approach: Check if string is palindrome or not
    string str = "abba";
    int i=0, j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<"Not palindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;

    //Parallel 2 pointer approach: Move zeroes
    int arr[] = {1,0,2,3,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0; 
    for(int i = 0; i < n; i++){
        if(arr[i]){
            swap(arr[i], arr[k]);
            k++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}