class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       int size = nums.size();
       sort(nums.begin(),nums.end());
       int max = 1,min = 1;
      max = nums[size-1] * nums[size-2];
      min = nums[0] * nums[1];

       return max - min;
    }
};