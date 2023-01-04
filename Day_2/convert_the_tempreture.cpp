#include <iostream>
#include <math.h>
#include<array>
#include <vector> 
using namespace std;

void print_vector(vector<double> &vect)
   {   cout<<" kelvin and ferhanite : ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << ",";}
   }

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double ferhanite = celsius * 1.80 + 32.00;
        vector<double> array ;
        array={kelvin,ferhanite};
       
       return array;
    }
};
int main(){
     Solution obj;
     double a = 122.11;
    vector<double>print = obj.convertTemperature(a);
    print_vector(print);
}