#include <iostream>
#include <math.h>
#include<vector>
using namespace std;
class Solution{
  public:
  string low (string s){
    //cout<<" hi"<<endl;
    string low = "";
    for(int i = 0; i<s.size(); i++){
       
       if((65<=s[i])&& (s[i]<=90)){
        char ch = s[i];
        ch = ch -'A' + 'a';
        low += ch;
       }
       else{
        char ch = s[i];
        low +=ch;
       }
    }
    return low;
  }
  string up (string s){
    
    string up ="";
    for(int i = 0 ; i<s.size(); i++){
        if(i==0){

        if((65<=s[i]) && (s[i]<=90)){
            

        char ch = s[i];
        //ch = ch -'A' + 'a';
        up += ch;
       }
       else {
            

          char ch = s[i];
          ch = ch - 'a' + 'A';
          up +=ch;
       }
        }
        else{
             if((65<=s[i])&& (s[i]<=90)){
        char ch = s[i];
        ch = ch -'A' + 'a';
        up += ch;
       }
       else {
          up += s[i];
       }
        }
    }
   
    return up;
  }
   string capitalizeTitle(string title) {
        string ans  = "";
        int a = 3;
        int b=1,l=1;
        //cout<<b<<endl;
        int c =0;
        int size = title.size();
        //cout<<size<<endl;
           string demo = "";
           
        for(int i =0 ; i<=title.size(); i++){
            //cout<<c++<<endl;
            
            //string demo = "";
            char c = ' ';
            //cout<<"first"<<endl;
            if((65<=title[i]) && (title[i]<=90)) {
               // cout<<"first if "<<endl;
                demo += title[i];
                //cout<<demo;
            }
            else if( (97<=title[i])&& (title[i]<=122)){
              //  cout<<"else if"<<endl;
              //cout<<title[i];
                char ch = title[i];
                demo += ch;
                //cout<<demo;
            }
           
            else if(true){
                 int size = demo.size();
                if(size<a){
                    if(b==1){
                   ans += low(demo);
                   demo = "";
                   b++;
                    }
                    else{
                        ans +=' ' + low(demo);
                        demo = "";
                        b++;
                    }
                }
                else{
                    
                    if(b==1){
                    ans +=  up(demo);
                    demo = "";
                    b++;
                    }
                    else{
                        ans += ' ' + up(demo);
                        demo = "";
                        b++;
                    }
                }
            }
            

        }

        return ans;
    
    }
    
    
};

int main(){
  Solution obj;
  string pass = "i lOve leetcode";
  string output =obj.capitalizeTitle(pass);
  cout<<output<<endl;

  
}

    
