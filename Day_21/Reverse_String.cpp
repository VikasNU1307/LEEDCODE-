class Solution {
public:
    void reverseString(vector<char>& s) {
       int size = s.size();
      
        int start = 0, end = size -1;
        for(int i =0; i<size; i++){
            if(start == end)
            break;

            if(start>end){
                break;
            }
            swap(s[start ],s[end]);
            start++;
            end--;
            
        }
    }
};