#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 2,3,5,1,3 };
    int candies = 3; 
    int n = sizeof(arr)/sizeof(arr[0]);
  
     int a =  *max_element(arr, arr + n);
     for(int i = 0 ; i<n; i++){
        int check = arr[i] + candies;
        if(check >= a ){
            cout<<"true"<<"\t";
        }
        else
          cout<<"false"<<"\t";
     }
}