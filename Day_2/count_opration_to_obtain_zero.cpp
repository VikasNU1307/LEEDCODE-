#include <iostream>
#include <math.h>
using namespace std;

class Solution{
    public:
    int numberofsteps(int num1,int num2){
     int n1 = num1;
     int n2 = num2;
     int operationcount=0;
    
     while(n1!=0 || n2!=0){
      
      if(n1==0){
           break;
      }
      else if(n2==0){
           break;
      }
      else{
      if(n1>=n2){
       
        n1 = n1 - n2;
        operationcount++;
        if(n1==0)
            break;
      }
      else{
        n2 = n2 - n1;
        
        operationcount++;
        if(n1==0)
             break;
      }
      cout<<n1<<n2<<endl;
     }
     }
    return operationcount;
    }
    
};

int main(){
    Solution obj;
    int steps = obj.numberofsteps(2,3);
    cout<<"steps: "<<steps<<endl;
    steps = obj.numberofsteps(0,1);
    cout<<"steps: "<<steps<<endl;
    
    
}