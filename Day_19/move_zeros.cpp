class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for(int i =0; i<size ; i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                size = size -1;
                i = i -1;
                nums.push_back(0);

            }
        }
    }
};