//Solution 1: Using Hashmap
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>m;
        for(auto it: nums){
            m[it]++;
        }
        for(auto it: m){
            if(it.second > (nums.size()/2))
            return it.first;
        }
        return -1;
    }
};

//Solution 2: Boyer-Moore Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(count == 0)
            {
                candidate=nums[i];
            }
            if(nums[i]==candidate){
                count ++;
            }
            count --;
        }
        return candidate;
    }
};