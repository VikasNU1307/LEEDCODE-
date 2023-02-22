#include<iostream>
#include<math.h>
using namespace std;
class Solution{
    public:
    double mypow(double x, int n){
        double out = pow(x,n);



        return out;

        }
};
int main(){
    Solution obj;
    double po = obj.mypow(2.00,10);
    cout<<po<<endl;
}