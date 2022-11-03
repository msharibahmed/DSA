class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      unordered_map<string, int> mMap;
      int unpaired = 0, ans = 0;
      
      for(auto &w : words) {
        if(w[0] == w[1]) {
          if(mMap[w]) {
            --unpaired; mMap[w]--;
            ans += 4;
          }
          else {
            ++unpaired; mMap[w]++;
          }
        }
        else {
          string rev = w;
          reverse(w.begin(), w.end());
          
          if(mMap[rev]) {
            mMap[rev]--;
            ans += 4;
          }
          else mMap[w]++;
          
        }
      }
      
      if(unpaired) ans += 2;
      
      return ans;
      
    }
};