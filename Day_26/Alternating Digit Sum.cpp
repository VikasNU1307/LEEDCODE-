class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0, sum2=0;
        int copy = n;
        string num = to_string(n);
        int size = num.size();
        cout<<size<<endl;
        while(copy!=0){
            int digit = copy%10;

            if(size%2==0){
                sum2 += digit;
                size = size-1;
            }
            else if(size%2==1){
                sum += digit;
                size = size -1;
            }

            copy = copy/10;
        }
        int ans = sum - sum2;
        cout<<ans<<endl;
        return ans;
    }
};