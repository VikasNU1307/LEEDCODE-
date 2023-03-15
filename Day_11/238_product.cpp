#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans = nums;
         int min = 0, max = size -1;
        for(int i = 0; i<size; i++){
            if(min>max)
              return ans;
            if(ans[min] > ans[max]){
                swap(ans[min],ans[max]);
                min++;
                max--;
            }
            else {
                min++;
            }
            
        }
        return ans;
    }
};

int main(){
Solution obj;
  vector<int>pass ={2,0,2,1,1,0};
   vector<int> output = obj.sortColors(pass);
   for(int i = 0 ; i<output.size(); i++){
    cout<<output[i]<<" ";
   }
}