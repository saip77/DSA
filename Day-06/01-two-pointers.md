# Two Pointers Pattern 

## 1. Core Idea
Keep **two indices** moving over the **same array/string** to turn brute-force **O(n²)** into **O(n)**.

## 2. Three Movements (memorise)
| Style | Pointer Start | Direction | When to Use | Classic Example |
|-------|---------------|-----------|-------------|-----------------|
| **Converging** | left = 0, right = n-1 | → ← | sorted data / palindrome | two-sum sorted, container-water |
| **Parallel (slow-fast)** | slow = 0, fast = 0 | → → | maintain constraint / sliding window | move-zeroes, remove-duplicates |
| **Trigger (lag)** | lag = 0, lead = 0 + k | → → | nth-from-end, cycle detection | linked-list nth-node |

## 3. Universal Template (Converging)
```cpp
int left = 0, right = n - 1;
while (left < right) {
    // calculate current result
    if (condition) return or record;
    // shrink window intelligently
    if (a[left] < a[right]) ++left;
    else --right;
}
```
**Decision rule:** move pointer that **improves** objective (e.g. taller line, smaller sum, etc.).

## 4. Parallel / Slow-Fast Template
```cpp
int slow = 0;
for (int fast = 0; fast < n; ++fast) {
    if (a[fast] meets constraint) {
        swap(a[slow], a[fast]);   // or copy
        ++slow;
    }
}
// [0..slow-1] = valid zone
```
**Invariant:** everything left of `slow` already satisfies the constraint.

## 5. LeetCode Speed-Dial
| # | Name | Pattern | TC | SC |
|---|------|---------|----|----|
| 283 | Move Zeroes | parallel | O(n) | O(1) |
| 11 | Container With Most Water | converging | O(n) | O(1) |
| 167 | Two Sum II – Input Sorted | converging | O(n) | O(1) |
| 26 | Remove Duplicates from Sorted Array | parallel | O(n) | O(1) |
| 19 | Remove Nth Node from End | trigger (lag-lead) | O(n) | O(1) |

## 6. One-Line Mantras
- "Sorted array? **Converging pointers**."  
- "In-place filter? **Slow-fast**."  
- "Nth from end? **Lag-lead by n**."  
- "Move pointer that **gives better future**."