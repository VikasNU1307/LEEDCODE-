class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max_ele = *max_element(arr.begin(),arr.end());
        int size = arr.size();
        int start = 0 , end = size  - 1;
        int mid =0;
        while(start<=end){
            mid = (start +end)/2;
            if(max_ele == arr[mid]){
                return mid;
            }
            else if(arr[mid-1]<arr[mid]){
                start = mid;
            }
            else if(arr[mid-1]> arr[mid]){
                end = mid;
            }

        }
        return mid;
    }
};