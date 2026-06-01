#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {

    if(n == 0) return "0";

    string bin = "";

    while(n) {
        bin.push_back((n & 1) + '0');
        n >>= 1;
    }

    reverse(bin.begin(), bin.end());
    return bin;
}


int binaryToDecimal(string bin) {

    int decimal = 0;

    for(char ch : bin) {
        decimal = decimal * 2 + (ch - '0');
    }

    return decimal;
}

// Check Even or Odd
bool isEven(int n) {
    return ((n & 1) == 0);
}

// Swap using XOR
void swapNumbers(int a, int b) {

    cout << "Before swap: " << a << " " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap: " << a << " " << b << endl;
}

int main() {

    int n;

    cout << "Enter the number: ";
    cin >> n;

    if(isEven(n)) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    cout << "Binary: " << decimalToBinary(n) << endl;

    string bin;
    cout << "Enter the binary number: ";
    cin >> bin;

    cout << "Decimal: " << binaryToDecimal(bin) << endl;

    swapNumbers(10, 20);

    return 0;
}