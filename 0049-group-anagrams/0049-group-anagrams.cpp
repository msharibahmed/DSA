class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<vector<int>, vector<string>> mMap;
      
      
      for(int i = 0; i < size(strs); ++i) {
        vector<int> temp(26);
        
        for(int j = 0; j < size(strs[i]); ++j) temp[strs[i][j]-'a']++;
        
        mMap[temp].push_back(strs[i]);
        
      }
      
      vector<vector<string>> res;
      
      for(auto [k, v] : mMap) res.push_back(v);
      
      
      
      return res;
    }
};