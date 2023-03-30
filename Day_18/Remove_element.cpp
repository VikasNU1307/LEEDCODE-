class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
         
            
            for(int j = 0; j<size; j++){
            if(nums[j]==val){
                nums.erase(nums.begin()+j);
                size = size - 1;
                
                j = j-1;
            }
            }
        
        return size;
    }
};