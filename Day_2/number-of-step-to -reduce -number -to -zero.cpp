#include <iostream>
#include <math.h>
using namespace std;

class Solution{
    public:
    int numberofsteps(int num){
      int n = num;
     int stepcount = 0;
     while(n!=0){
      if(n%2==0){
        n = n/2;
        stepcount++;
      }
      else{
        n = n-1;
        stepcount++;
      }
     }
     return stepcount;
    }
    
    
};

int main(){
    Solution obj;
    int steps = obj.numberofsteps(14);
    cout<<"steps: "<<steps<<endl;
    steps = obj.numberofsteps(8);
    cout<<"steps: "<<steps<<endl;
    steps = obj.numberofsteps(123);
    cout<<"steps: "<<steps<<endl;
    steps = obj.numberofsteps(0);
    cout<<"steps: "<<steps<<endl;
    
}