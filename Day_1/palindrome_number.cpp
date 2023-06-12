#include <iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    
    bool isPalindrome(int y) {
        int x = y;
        
        
        int num=0,i=0;
        if(x>0){
          
        while(x!=0){
            int z = 0;
           z = x%10;
           //cout<<"z:"<<z<<endl;
           //cout<<"num:"<<num<<endl;
            
           num = (num*10)+z;
           // cout<<"powerf:"<<pow(10,i)<<endl;
          // cout<<num<<endl;
           i++;
           x = x/10;
          // cout<<x<<endl;
        //cout<<num<<endl;
        }
        //cout<<num<<endl;
        if(y==num){
            return true;
        }
        else 
          return false;
        }
        else
          return false;
    }
    
    
   
};

int main(){
    Solution ob;
    bool ch = ob.isPalindrome(-121);
    cout<<ch<<endl;
}
