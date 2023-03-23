class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i= 0; i<nums.size(); i++){
            int k = index[i], j = nums[i];
            ans.insert(ans.begin()+ k , j);
        }
        return ans;
    }
};