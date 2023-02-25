#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
class Sotution{
     public:
      int reverse(int x){
        int reverse = 0;
        int y = x;
        
        while(y!=0){
            int digit = y%10;
            if((reverse<INT_MIN/10) || (reverse>INT_MAX/10))
                return 0;
            reverse = (reverse * 10) + digit;
            y = y/10;
        }
        
        return reverse;
      }




};

int main(){
    Sotution obj;
    int reversenum = obj.reverse(1534236469);
    cout<<reversenum<<endl;
}