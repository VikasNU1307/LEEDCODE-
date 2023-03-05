#include <iostream>
#include <math.h>
using namespace std;
class Solution{
  public:
  int numJewelsInStones(string jewels, string stones) {
        int sj = jewels.size(),count=0;
        int ss = stones.size();
        for(int i = 0; i<sj; i++){
          for(int j=0; j<ss; j++){
            if(jewels[i]==stones[j]){
              count++;
            }
          }
        }
        return count;
    }
};

int main(){
  Solution obj;
  string jew = "z", sto = "ZZ";
  int present = obj.numJewelsInStones(jew,sto);
  cout<<present<<endl;

  
}

    
