#  Kadane’s Algorithm 

## 1. Problem Solved
**Maximum sub-array sum** (contiguous) in **O(n)** time, **O(1)** space.

## 2. Core Insight (memorise this line)
> At index `i`, decide: **start fresh** or **extend** previous best sub-array.

## 3. 4-Line Logic (language-agnostic)
```text
cur = max(arr[i], cur + arr[i])   // extend or restart
best = max(best, cur)             // global best so far
repeat for i = 1 … n-1
return best
```
**Initialise:** `cur = best = arr[0]`

## 4. C++ Implementation 
```cpp
int kadane(vector<int>& a) {
    int cur = a[0], best = a[0];
    for (int i = 1; i < a.size(); ++i) {
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    return best;
}
```
**Edge case:** empty array → return 0 (or `-INT_MAX` if required).

## 5. Decision Table (explain in interview)
| `cur` before | `a[i]` | Decision | New `cur` |
|--------------|--------|----------|-----------|
| +ve | any | extend | `cur + a[i]` |
| −ve | any | restart | `a[i]` |

**Rule:** never keep a negative prefix—it can only hurt future sums.

## 6. Complexity
- **Time:** `O(n)` – single pass  
- **Space:** `O(1)` – two integers

## 7. Common Follow-ups
| Variation | Tweaks |
|-----------|--------|
| **print sub-array indices** | track `start`, `tempStart`, update when `cur` restarts |
| **all negatives** | either return 0 (empty sub-array allowed) or max single element |
| **circular array** | run Kadane twice: on normal array and on inverted sign array |
| **2-D max sub-matrix** | Kadane on prefix sums of each row pair → `O(n³)` |

## 8. One-Sentence Mantra
"Keep the **best positive prefix**; whenever it turns negative, **drop it** and **start fresh**—the global maximum is tracked along the way."