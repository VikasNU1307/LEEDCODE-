#include <iostream>
#include <math.h>
#include<vector>
using namespace std;
class Solution{
  public:
 string toLowerCase(string s) {
        string ans  = "";
        int low = 65, high = 90;
        for(int i= 0; i<s.size(); i++){
          int small;
          char ch = s[i];
          small = ch;
          
          if((low <= ch) && (ch <=high)) {
          ans  += ch - 'A' + 'a';

          }
          else
             ans += s[i];
             
        }
        return ans;
    }
    
};

int main(){
  Solution obj;
  string pass = "al&phaBET";
  string output = obj.toLowerCase(pass);
  cout<<output<<endl;

  
}

    
