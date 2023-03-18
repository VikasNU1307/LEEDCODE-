#include<bits/stdc++.h>

using namespace std;


int main(){
string s[] = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
string ab = s[0];
cout<<ab<<endl;
 int size = sizeof(s);
 int ct = INT_MIN;
 
for(int i = 0 ; s[i] !="\0"; i++){
    string samp = s[i];
    int a = 1;
    for(int j = 0 ; samp[j] != '\0'; j++){
      if(samp[j] == ' '){
        a++;
        
      }
      ct = max(ct,a);
     
    }
   // cout<<ct<<endl;
}
 cout<<ct<<endl;

}