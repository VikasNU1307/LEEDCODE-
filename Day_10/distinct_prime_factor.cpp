#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countdigits(vector<int> &num ){
    int count =0;
    int multi =1;
    for(int i=0; i<num.size(); i++){
        multi *=num[i];
    }
    //cout<<multi<<endl;
     int i =0, a =0;
     while(multi!=0){
        cout<<multi<<endl;
        if(multi%num[i]==0){
            //cout<<"c: "<<count<<endl;
               
                
                 if(a!=num[i]){
                    count++;
                    multi = multi/num[i];
                    //cout<<multi<<endl;
                    a = num[i];
                }
                else{
                    multi = multi / num[i];
                }
            
           
          }
        
        else{
            if(i<num.size()){
            i++;
            }
            else 
               return count;
           
        }
       
    }   
    cout<<multi<<endl;
    cout<<"h"<<endl;
    return count;
    }

};
int main(){
    Solution obj;
    vector<int> a = {2,4,3,7,10,6};
    int output = obj.countdigits(a);
    cout<<output<<endl;
    
} 