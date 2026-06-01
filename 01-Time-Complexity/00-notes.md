# Time Complexity Pattern Cheat Sheet

## 1. Linear Growth → `O(n)`

### Pattern

Variable changes by a **constant amount**

```cpp
i++
i--
i += c
i -= c
```

### Examples

```cpp
for(i = 0; i < n; i++)
```

```cpp
for(i = n; i > 0; i--)
```

```cpp
for(i = 0; i < n; i += 5)
```

### Mental Shortcut

* One loop
* Constant step size
* Visits proportional to `n`

✅ Complexity: **O(n)**

---

# 2. Logarithmic Growth → `O(log n)`

### Pattern

Variable changes by **multiplication or division**

```cpp
i *= 2
i /= 2
i *= k
i /= k
```

### Examples

```cpp
for(i = 1; i < n; i *= 2)
```

```cpp
for(i = n; i > 1; i /= 2)
```

### Mental Shortcut

Each iteration removes a fraction of the problem.

Sequence looks like:

```text
1, 2, 4, 8, 16...
```

or

```text
n, n/2, n/4, n/8...
```

✅ Complexity: **O(log n)**

---

# 3. Square Root Pattern → `O(√n)`

### Pattern

Loop condition contains:

```cpp
i * i <= n
```

or

```cpp
i <= sqrt(n)
```

### Example

```cpp
for(i = 1; i * i <= n; i++)
```

### Mental Shortcut

Whenever a variable is squared in the condition:

i^2=n\Rightarrow i=\sqrt{n}

✅ Complexity: **O(√n)**

---

# 4. Quadratic Pattern → `O(n²)`

## A. Independent Nested Loops

### Pattern

```cpp
for(i = 0; i < n; i++)
{
    for(j = 0; j < n; j++)
    {
    }
}
```

### Mental Shortcut

```text
n × n
```

✅ Complexity: **O(n²)**

---

## B. Dependent Nested Loops

### Pattern

```cpp
for(i = 0; i < n; i++)
{
    for(j = 0; j < i; j++)
    {
    }
}
```

### Mental Shortcut

Iterations become:

```text
1 + 2 + 3 + ... + n
```

1+2+3+\cdots+n=\frac{n(n+1)}{2}

Highest power is `n²`

✅ Complexity: **O(n²)**

---

# 5. Linearithmic Pattern → `O(n log n)`

### Pattern

Linear outer loop + logarithmic inner loop

```cpp
for(i = 0; i < n; i++)
{
    for(j = 1; j < n; j *= 2)
    {
    }
}
```

### Mental Shortcut

```text
n × log n
```

✅ Complexity: **O(n log n)**

---

# 6. Sequential Loops Rule

### Pattern

```cpp
for(...)
{
}

for(...)
{
}
```

### Rule

Sequential loops ADD complexities.

Example:

```text
O(n) + O(n) = O(2n)
```

Drop constants:

✅ Final Complexity: **O(n)**

---

# 7. Dynamic Accumulation Pattern

### Pattern

```cpp
for(i = 1, p = 0; p <= n; i++)
{
    p = p + i;
}
```

### Mental Shortcut

`p` becomes:

```text
1
1+2
1+2+3
...
```

This is triangular growth.

1+2+3+\cdots+k=\frac{k(k+1)}{2}

Approximation:

k^2\approx n\Rightarrow k\approx\sqrt{n}

✅ Complexity: **O(√n)**

---

# 8. Ultimate Pattern Recognition Table

| Code Pattern                | Complexity            |
| --------------------------- | --------------------- |
| `i++`, `i--`, `i += c`      | `O(n)`                |
| `i *= 2`, `i /= 2`          | `O(log n)`            |
| `i *= k`                    | `O(logₖ n)`           |
| `i*i <= n`                  | `O(√n)`               |
| Two nested linear loops     | `O(n²)`               |
| Triangular nested loop      | `O(n²)`               |
| Linear + logarithmic nested | `O(n log n)`          |
| Sequential loops            | Add complexities      |
| Nested loops                | Multiply complexities |

---

# Fast Identification Tricks

## Ask These Questions

### 1. How does the variable change?

| Change Type        | Complexity Trend |
| ------------------ | ---------------- |
| `+1`, `+2`, `+100` | Linear           |
| `*2`, `/2`         | Logarithmic      |
| Squared condition  | Square Root      |

---

### 2. Are loops nested?

| Structure  | Result   |
| ---------- | -------- |
| Sequential | Add      |
| Nested     | Multiply |

---

### 3. Does the inner loop depend on outer loop?

If yes:

```text
1 + 2 + 3 + ... + n
```

Usually:

✅ `O(n²)`

---

# Golden Rules

## Ignore:

* Constants
* Lower-order terms
* Exact iteration counts

Example:

```text
n² + n + 10 → O(n²)
```

---

# Complexity Hierarchy (Best → Worst)

| Complexity   | Name         |
| ------------ | ------------ |
| `O(1)`       | Constant     |
| `O(log n)`   | Logarithmic  |
| `O(√n)`      | Square Root  |
| `O(n)`       | Linear       |
| `O(n log n)` | Linearithmic |
| `O(n²)`      | Quadratic    |
| `O(2ⁿ)`      | Exponential  |
| `O(n!)`      | Factorial    |
