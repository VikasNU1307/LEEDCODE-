class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        int size = indices.size();
        for(int i = 0 ; i <size; i++){
  for(int j = 0; j<size; j++){
    if(indices[i]<indices[j]){
      swap(indices[i],indices[j]);
      swap(s[i],s[j]);
    
    }
  }
  
}
return s;
        
    }
};