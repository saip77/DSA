# C++ Arrays 

## 1. Declaration & Init
```cpp
int a[5];                      // garbage values
int a[5] = {1,2,3,4,5};        // full
int a[5] = {1,2};              // rest zero
int a[]  = {1,2,3};            // size deduced
```

## 2. Indexing Rules (0-based)
```cpp
a[0]              // first
a[n-1]            // last
```
**Out-of-bound access = UB** (no runtime check).

## 3. Fast Traversal I/O
```cpp
for (int i = 0; i < n; ++i) cin >> a[i];
for (int i = 0; i < n; ++i) cout << a[i] << ' ';
```

## 4. Core Algorithms (must code blind)
| Task | Snippet | TC | SC |
|------|---------|----|----|
| **linear search** | `for(i=0;i<n;++i) if(a[i]==key) return i;` | O(n) | O(1) |
| **max element** | `int m=a[0]; for(i=1;i<n;++i) m=max(m,a[i]);` | O(n) | O(1) |
| **sum** | `long long s=0; for(i=0;i<n;++i) s+=a[i];` | O(n) | O(1) |
| **reverse in-place** | `int i=0,j=n-1; while(i<j) swap(a[i++],a[j--]);` | O(n) | O(1) |
| **2nd largest** | keep `max1,max2` single pass | O(n) | O(1) |
| **is sorted?** | `for(i=1;i<n;++i) if(a[i-1]>a[i]) return false;` | O(n) | O(1) |

## 5. Properties (interview keywords)
- **Contiguous memory** → cache-friendly, `&a[i]+1 == &a[i+1]`  
- **Random access** → `a[k]` in O(1)  
- **Fixed size** (static arrays); dynamic size → `std::vector`

## 6. Common Mistakes = Red Flags
| Mistake | What happens |
|---------|--------------|
| `a[n]` or `a[-1]` | undefined behaviour (seg-fault or garbage) |
| returning local-array pointer | stack destroyed after return |
| forgetting to init | garbage values |
| `sizeof(a)/sizeof(a[0])` outside same scope | compiles but wrong size |

## 7. Static vs Dynamic (interview follow-up)
```cpp
// static (stack) – compile-time size
int a[10];

// dynamic (heap) – run-time size
int* a = new int[n];
delete [] a;   // MUST free
```