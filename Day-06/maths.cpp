#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numb = 0;
    int count = 0;
    int lastDigit = 0;
    int reverseNum = 0;
    int armStrong = 0;
    int primeCount = 0;
    cout << "Enter a number: ";
    cin >> numb;

    int originalNum = numb;
    int temp = numb;

    // Count digits
    while (temp) {
        count++;
        temp /= 10;
    }

    // Reset numb for processing
    temp = numb;

    while (temp) {
        lastDigit = temp % 10;
        reverseNum = reverseNum * 10 + lastDigit;
        armStrong += pow(lastDigit, count);
        temp /= 10;
    }

    cout << "Number of digits in the number is " << count << endl;
    cout << "Reverse of the number is " << reverseNum << endl;

    if (originalNum == reverseNum)
        cout << "The number is palindrome" << endl;
    else
        cout << "The number is not palindrome" << endl;

    if (originalNum == armStrong)
        cout << "The number is Armstrong number" << endl;
    else
        cout << "The number is not Armstrong number" << endl;
    for(int i=1; i<=sqrt(originalNum); i++){
        if(originalNum%i==0){
            cout<<i<<" ";
            primeCount++;
        }
    }
    cout<<endl;
    if(primeCount==2){
        cout<<"The number is Prime number"<<endl;
    }
    else{
        cout<<"The number is not Prime number"<<endl;
    }

    return 0;
}
