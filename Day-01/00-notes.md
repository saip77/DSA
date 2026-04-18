# C++ Basics

## 1. Hello World Anatomy
```cpp
#include <iostream>      
using namespace std;   

int main() {            
    cout << "Hello, World!" << endl;  
    return 0;            
}
```
Compile & run:  
`g++ hello.cpp -o hello && ./hello`

## 2. Built-in Types
| Type | Size (typical) | Purpose |
|------|----------------|---------|
| `int` | 4 B | integers (−2.1→2.1 B) |
| `float` | 4 B | 7-decimal precision |
| `double` | 8 B | 15-decimal precision |
| `char` | 1 B | single ASCII character |
| `bool` | 1 B | true / false |
| `string` | class | text (STL) |

Suffixes: `5.0f` → float, `5.0` → double, `'A'` → char, `"A"` → string.

## 3. I/O Streams
```cpp
int age;
cin >> age;                     
cout << "You are " << age << endl;  
```
`<<` stream-insertion operator (`cout`)  
`>>` stream-extraction operator (`cin`)

## 4. Control Flow
### If / else if / else
```cpp
if (score >= 90) cout << "A";
else if (score >= 80) cout << "B";
else cout << "C";
```
### Loops
```cpp
for (int i = 0; i < n; ++i) { }
while (condition) { }            
do { } while (condition);       
```
Range-for (C++11):
```cpp
for (int x : arr) cout << x;
```

## 5. Functions
```cpp
return_type name(parameter_list) { body }

int add(int a, int b = 0) {      // default argument
    return a + b;
}
```
Overloading: same name, different parameter list → compiler picks best match.

## 6. Arrays & Vectors
C-style (fixed size):
```cpp
int a[5] = {1, 2, 3, 4, 5};
cout << a[0];   // 1
```
STL (dynamic, preferred):
```cpp
#include <vector>
vector<int> v = {1, 2, 3};
v.push_back(4);
cout << v.size();  // 4
```

## 7. Quick Reference Sheet
| Task | Snippet |
|------|---------|
| read int | `int x; cin >> x;` |
| read line | `getline(cin, str);` |
| print with precision | `cout << fixed << setprecision(2) << pi;` |
| random number | `rand() % 100 + 1;` (seed with `srand(time(nullptr));`) |
| size of array | `sizeof(arr)/sizeof(arr[0]);` |

**Remember**: C++ is statically typed, compiled, and close to the metal—declare first, then use.