#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int count = 0;
    while(n){
        n /= 10;
        count++;
    }
    return count;
}

int revserseDigits(int n) {
    int rev = 0;
    while(n){
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return rev;
}

bool IsPalindrome(int n) {
    return n == revserseDigits(n);
}

bool isPrime(int n) {
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Digit Count: " << digitCount(n) << endl;
    cout << "Reversed Digits: " << revserseDigits(n) << endl;
    if(IsPalindrome(n)) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    if(isPrime(n)) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }
    return 0;
}