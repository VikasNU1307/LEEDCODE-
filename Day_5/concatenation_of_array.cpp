#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int i = 0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }

        return ans;
    }
    
};

void print(vector<int> & print){
    //cout<<"i am print fuction"<<endl;
    for(int i=0; i<print.size(); i++){
        cout<<print[i]<<" ";
    }
}
int main(){
   Solution obj;
   vector<int> a = {1,2,3,4};
   vector<int> result = obj. getConcatenation(a);
   
   print(result);
   
}
