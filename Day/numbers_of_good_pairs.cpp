#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int numbersOfgoodPairs(vector<int>&nums){
     vector<int> duplicate = nums;
     int size = nums.size();
     int count = 0;
     
     for(int i=0 ; i<size; i++){
       for(int j=0; j<size; j++){
        if(i<j){
            if(duplicate[i]==duplicate[j]){
                count++;
            }
            
        }
       }
     }
     return count;
     
    }
};

int main(){
    Solution obj;
    vector<int>a={1,1,1,1};
    int numbers = obj.numbersOfgoodPairs(a);
    cout<<numbers<<endl;

}