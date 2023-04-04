class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> condition = {"type","color","name"};
        int size = items.size();
        int count = 0;
        int which=0;
       for(int i = 0; i<3; i++){
           if(condition[i]==ruleKey){
               which = i;
           }
       }
        for(int i =0; i<size; i++){
            int siz = items[i].size();
            for(int j = which; j<=which;j++){
                if(items[i][j]==ruleValue){
                    count++;
                }
            }
        }
        return count;
    }
};