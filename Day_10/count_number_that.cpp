#include <bits/stdc++.h>
using namespace std;
// int incre(int n, int b){
//     int count =0;
    
//     return count;
// }
class Solution{
    public:
    int countdigits(int num){
    int count =0;
    int a = num;
    while(a!=0){
        int digit =0;
        digit = a % 10;
        if(num%digit==0){
        count++;
    }
    else{}
      a = a/10;
    }
    return count;
}
};
int main(){
    Solution obj;
    int b = 1248;
    int a = obj.countdigits(b);
    cout<<a<<endl;
    
}