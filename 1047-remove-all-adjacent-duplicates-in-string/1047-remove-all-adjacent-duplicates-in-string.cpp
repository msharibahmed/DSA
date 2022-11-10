class Solution {
public:
    string removeDuplicates(string s) {
      if(size(s) == 1) return s;
      
      string ans = "";
      
      for(auto &x : s) {
        
        if(size(ans) && x == ans.back()) ans.pop_back();
        else ans += x;
        
      }
      
      return ans;
    }
};