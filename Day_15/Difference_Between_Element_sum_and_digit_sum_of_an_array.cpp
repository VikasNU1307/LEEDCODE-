class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       
        int element_sum = 0, digit_sum = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            element_sum += nums[i];
            int element  = nums[i];
            while(element != 0){
                int digit = element % 10; 
                digit_sum += digit;
                element = element/10;

            }
        }
        return element_sum - digit_sum;
    }
};