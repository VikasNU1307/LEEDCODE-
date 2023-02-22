#include<iostream>
using namespace std;
class Solution{
       public:
       int commonFactor(int a, int b){
        int count = 0;
        if(a>b){
            for (int i = 1; i<=a; i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        }
        else{
            for (int i = 1; i<=b; i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        }
        return count;
       }
};
int main(){
      Solution obj;
      int num = obj.commonFactor(12,6);
      cout<<num<<endl;
}