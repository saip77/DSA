class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Method 1
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]!=i)
        //     {
        //         return i;
        //     }
        // }
        // return nums.size();

        //Method 2
        // int n = nums.size();
        // for(int i=0; i<n ; i++){
        //     while(nums[i]<n && nums[nums[i]]!=nums[i]){
        //         swap(nums[i], nums[nums[i]]);
        //     }
        // }
        // for(int i=0; i<n; i++){
        //     if(nums[i]!=i)
        //     return i;
        // }
        // return n;

        //Method 3
        int n = nums.size();
        int expected = n*(n+1)/2;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        return expected-sum;
    }
};