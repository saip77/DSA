## Template 1: Cyclic Sort / Index Placement

Use when:
numbers are in range 1..n
need missing / duplicate
O(1) extra space required

```cpp
for(int i = 0; i < n; i++){

    while(nums[i] >= 1 && nums[i] <= n 
          && nums[nums[i]-1] != nums[i]){

        swap(nums[i], nums[nums[i]-1]);
    }
}
for(int i = 0; i < n; i++){
    if(nums[i] != i+1)
        return i+1;
}
```