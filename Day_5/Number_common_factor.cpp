#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class Solution {
    public:
    vector <int> commonFactors(int a, int b) {
         vector<int> count ;
         int counting = 0;
        if(a>b){
            for (int i = 1; i<=a; i++){
            if(a%i==0 && b%i==0){
                counting++;
                count.push_back(i);
            }
        }
        }
        else{
            for (int i = 1; i<=b; i++){
            if(a%i==0 && b%i==0){
                counting++;
                count.push_back(i);
            }
        }
        }
        cout<<counting<<endl;
        return count;
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
   int a=12, b=6;
   vector<int> result = obj. commonFactors(a,b);
   
   print(result);
   
}
