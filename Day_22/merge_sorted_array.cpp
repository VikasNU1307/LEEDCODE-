class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i<n; i++){
            int a = nums2[i];
            int index = m+i;
            nums1.erase(nums1.begin()+index);
            nums1.insert(nums1.begin()+index,a);
        }

        sort(nums1.begin(),nums1.end());
    }
};