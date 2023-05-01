#include <iostream>
#include <math.h>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
 vector<int> plusOne(vector<int>& digits) {
        vector<int> ans ;
       int real_int = 0, count = 0, reverse_count = 0;
       for(int i =0; i<digits.size(); i++){
         if((real_int<((pow(2,63)-1)/10)) || (real_int>((pow(2,63)-1)/10))){
                return ans;
         }
        real_int = (real_int * 10) + digits[i];
       }
        real_int++;
        int temp = real_int;
        cout<<real_int<<endl;
        int reverse = 0;
        while(temp != 0){
            int digits = temp % 10;
            reverse  = (reverse * 10) + digits;
            temp = temp/10;
            count++;
        }
        int tempp = reverse;
        cout<<reverse<<endl;
        while(tempp != 0){
            int digits = tempp % 10;
            ans.push_back(digits);
            tempp = tempp /10;
            reverse_count++;
        }
        cout << count<<" "<<reverse_count<<endl;

        for(int i = 0; i<count- reverse_count; i++){
            int a = 0;
            if(count != reverse_count){
               //cout<<real_int<<" "<<reverse<<endl;
                 ans.push_back(a);
            }
        }
        return ans;
    }
};

int main(){
  Solution obj;
  vector<int>pass ={7285};
   vector <int> output = obj.plusOne(pass);
  for(int i = 0; i<output.size(); i++){
    cout<<output[i]<<" ";
  }
  cout<<endl<<sizeof(int)<<" "<<INT_MIN<<endl;
  int a = (pow(2,32)-1);
  cout<<a<<endl;
   long long int b = ((pow(2,63)-1)/10);
  cout<<b<<endl;
  long long int c = ((pow(2,63)-1)/10);
  cout<<c<<endl;
  
}

    
