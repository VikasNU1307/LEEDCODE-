#include<iostream>
using namespace std;

int main(){
    // int *ptr =0;
    // cout<<*ptr<<endl;
    

    // int  i = 5;
    // int *p = 0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

  int a =5;
  int *p = 0;
  p = &a;
  cout<<*p<<endl;
  (*p)++;
  p++;
  p--;
  cout<<*p<<endl;

  *p = (*p) ;
  cout<<*p<<endl;


}