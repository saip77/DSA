#include <bits/stdc++.h>
using namespace std;

// Get the bit at position pos
int getBit(int n, int pos) {
    return (n >> pos) & 1;
}

// Set the bit at position pos
int setBit(int n, int pos) {
    return n | (1 << pos);
}

// Clear the bit at position pos
int clearBit(int n, int pos) {
    return n & ~(1 << pos);
}

// Count set bits using Brian Kernighan's Algorithm
int countSetBits(int n) {
    int count = 0;

    while (n) {
        n &= (n - 1);
        count++;
    }

    return count;
}

// Find number of bits to flip to convert a into b
int bitsToFlip(int a, int b) {
    return countSetBits(a ^ b);
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nOriginal Number: " << n << endl;

    cout << "Bit at position 0: "
         << getBit(n, 0) << endl;

    cout << "After setting bit 0: "
         << setBit(n, 0) << endl;

    cout << "After clearing bit 2: "
         << clearBit(n, 2) << endl;

    int a = 5, b = 7;

    cout << "\nBits to flip to convert "
         << a << " to " << b << " = "
         << bitsToFlip(a, b) << endl;

    return 0;
}