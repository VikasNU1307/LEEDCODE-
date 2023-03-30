    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i<size ; i++){
           for(int j  =i+1; j <size; j++){
               if(nums[i]==nums[j]){
                   nums.erase(nums.begin()+j);
                   size = size -1;
                   j = j-1;
               }
           }
        }
        return size;
    }
};