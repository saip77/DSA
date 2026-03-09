## Template 1: Array Compaction Template (Filter Elements)

Use when:
remove element
keep valid elements
move elements
modify array in-place
return first k elements


```cpp
int k = 0;

for(int i = 0; i < nums.size(); i++){
    if(valid_condition){
        nums[k] = nums[i];
        k++;
    }
}

return k;
```

## Template 2: Boyer–Moore Majority Vote (n/2)

Use when:
Majority Element

Boiler Plate:
int candidate = 0;
int count = 0;

```cpp
for(int num : nums){

    if(count == 0)
        candidate = num;

    if(num == candidate)
        count++;
    else
        count--;
}

return candidate;
```