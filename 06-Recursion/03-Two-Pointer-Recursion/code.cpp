#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i, int j){
    if(i>=j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    return isPalindrome(str, i+1, j-1);
}

void reverse(string str, int i, int j){
    if(i>=j){
        cout<<str;
        return;
    }
    swap(str[i], str[j]);
    reverse(str, i+1, j-1);
}

int main(){
    string str = "madame";
    cout<<isPalindrome(str, 0, str.length()-1)<<endl;
    reverse(str, 0, str.length()-1);
    cout<<endl;
    return 0;
}