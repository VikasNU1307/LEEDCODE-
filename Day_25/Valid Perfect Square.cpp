class Solution {
public:
    bool isPerfectSquare(int num) {
          long long  int mul = 0;
        for( long long int i  = 1; i<=num; i++){
           mul = i * i;
            if(mul == num){
                return true;
            }
        }
      
        return false;
    }
};