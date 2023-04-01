class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            int temp = nums[i];
            int out = nums[temp];
            ans.push_back(out);
        }
        return ans;
    }
};