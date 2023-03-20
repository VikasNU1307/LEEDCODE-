#include<bits/stdc++.h>
using namespace std;
vector<int> self(int left, int right){
    vector<int> ans;
    for(int i = left ; i<=right; i++){
        int  an = 0;
        int value = 0;
        int copy = i;
        if(copy<9){
            ans.push_back(i);
            
        }
        else{
            // cout<<endl;
            while(copy!=0){
              int digit = copy%10;
              cout<<digit<<" ";
              if(digit==0){
                an = 0;
              break;
              }

              else if(i %digit==0){
                //cout<<"true"<<" ";
                an = 1;

              }
              else{
                //cout<<"false"<<" ";
                an = 0;
                break;
              }
              copy = copy/10;

              
            }
        }
        if(an == true){
            ans.push_back(i);
        }
        else{
           // cout<<"hi"<<endl;
        }
    }

    // for(int i = 0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    return ans;
}



int main(){
    vector<int> numbers = self(66,708);
    cout<<endl;
    for(int i =0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }
}
