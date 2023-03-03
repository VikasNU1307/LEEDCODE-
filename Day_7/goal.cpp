#include <iostream>
#include <math.h>
#include<vector>
using namespace std;
class Solution{
  public:
  string interpret(string command) {
        int size = command.size();
        char G = 'G',O = '(',al = 'a';
        string ans = "";
        for(int i = 0; i<size; i++){
          int j = i;
          j++;
          if(command[i]==G){
            ans += "G";
          }
          else if(command[i]==O){
            if(command[j]==al){
              ans +="al";
            }
            else
              ans += "o";
          }
        }
        return ans;
    }
};

int main(){
  Solution obj;
  string pass = "G()()()()(al)";
  string output = obj.interpret(pass);
  cout<<output<<endl;

  
}

    
