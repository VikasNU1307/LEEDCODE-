class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = INT_MIN;
        
        int size = accounts.size();
        for(int i = 0; i<size; i++){
            int result = 0;
            int sub = accounts[i].size();
            for(int j = 0; j<sub; j++ ){
              result += accounts[i][j];
            }
            ans = max(ans,result);
        }
        return ans;
    }
};