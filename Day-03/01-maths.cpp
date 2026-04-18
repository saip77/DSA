#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int count = 0;
    int reversedNumber = 0;

    // Edge case for 0
    if(n == 0){
        cout << "0" << endl;
        cout << "Total digits: 1" << endl;
        cout << "0" << endl;
        cout << "Palindrome" << endl;
        cout << "Divisors: Undefined" << endl;
        return 0;
    }

    // Extract digits + reverse
    while(n){
        int digit = n % 10;

        cout << digit << " ";
        reversedNumber = reversedNumber * 10 + digit;

        n /= 10;
        count++;
    }

    cout << endl;
    cout << "Total digits: " << count << endl;
    cout << reversedNumber << endl;

    // Palindrome check
    if(original == reversedNumber){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    // Divisors + Prime check
    int divisorCount = 0;
    cout << "Divisors: ";

    for(int i = 1; i * i <= original; i++){
        if(original % i == 0){
            cout << i << " ";
            divisorCount++;

            if(i != original / i){
                cout << original / i << " ";
                divisorCount++;
            }
        }
    }

    cout << endl;

    // Prime check
    if(original > 1 && divisorCount == 2){
        cout << "Prime" << endl;
    } else {
        cout << "Not a prime" << endl;
    }
    int sum=0;
    int originalCopy = original;
    while(originalCopy){
        int digit = originalCopy % 10;
        sum+= (int)pow(digit, count);
        originalCopy /= 10;
    }
    if(sum == original){
        cout << "Armstrong" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }
    //Armstrong check
    return 0;
}