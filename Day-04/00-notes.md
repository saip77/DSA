# C++ STL 

## 1. Header & Namespace
```cpp
#include <bits/stdc++.h>   // single header that pulls in almost everything
using namespace std;       // saves typing std::vector, std::sort, ...
```

## 2. Must-Know Containers (use these 90% of the time)
| Container | Header | Purpose | Big-O |
|-----------|--------|---------|-------|
| `vector<T>` | `<vector>` | resizable array | random O(1), push_back amortised O(1) |
| `pair<T1,T2>` | `<utility>` | bundle 2 values | creation O(1) |
| `string` | `<string>` | character vector | same as vector |
| `set<T>` | `<set>` | ordered unique keys | insert/erase/find O(log N) |
| `map<K,V>` | `<map>` | ordered key→value | [] / find O(log N) |
| `unordered_set<T>` | `<unordered_set>` | hash set (avg O(1)) | same |
| `unordered_map<K,V>` | `<unordered_map>` | hash map (avg O(1)) | same |
| `stack<T>` | `<stack>` | LIFO | all O(1) |
| `queue<T>` | `<queue>` | FIFO | all O(1) |
| `priority_queue<T>` | `<queue>` | max-heap | push/pop O(log N), top O(1) |

**Quick declare**:
```cpp
vector<int> v = {3,1,4};
set<string> s;
map<int,int> m;
```

## 3. Universal Iterators
```cpp
for(auto it = v.begin(); it != v.end(); ++it) cout << *it;
for(auto &x : v) cout << x;          // range-based (C++11)
using it = vector<int>::iterator;    // typedef if needed
```

## 4. <algorithm> Swipe-File
```cpp
sort(v.begin(), v.end());                    // ascending
sort(v.begin(), v.end(), greater<int>());    // descending
reverse(v.begin(), v.end());
binary_search(v.begin(), v.end(), key);      // on sorted range
auto it = find(v.begin(), v.end(), value);   // O(N)
int cnt = count(v.begin(), v.end(), value);  // O(N)
*max_element(v.begin(), v.end());
*min_element(v.begin(), v.end());
accumulate(v.begin(), v.end(), 0LL);         // sum (0LL = long long start)
```

## 5. Functors / Lambdas for Custom Comparator
```cpp
// descending sort
sort(v.begin(), v.end(), [](int a, int b){ return a > b; });

set<int,decltype(cmp)> s(cmp);  // cmp defined earlier
```

## 6. Handy Micro-Patterns
| Task | One-liner |
|------|-----------|
| read N ints | `vector<int> v(N); for(auto &x:v) cin >> x;` |
| frequency map | `unordered_map<int,int> f; for(int x:v) ++f[x];` |
| unique sorted | `sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());` |
| min in set | `*s.begin()` (first element) |
| safe top+pop | `auto val = pq.top(); pq.pop();` |
| pair make | `make_pair(a,b)` or `{a,b}` (C++11) |

## 7. Complexity Cheat-Card
- `vector` random access = O(1)  
- `set/map` = O(log N) per operation (balanced BST)  
- `unordered_*` average O(1), worst O(N) (re-hash)  
- `priority_queue` = heap, all ops O(log N) except top/peek O(1)

