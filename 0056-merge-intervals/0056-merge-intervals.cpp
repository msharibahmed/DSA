class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& itv) {
      sort(itv.begin(), itv.end());
      
      vector<vector<int>> res;
      res.push_back(itv[0]);
      
      for(int i = 1; i < size(itv); ++i) {
        vector<int> &lastItv = res.back();
        
        if(itv[i][0] > lastItv[1]) res.push_back(itv[i]);
        else if(itv[i][1] >= lastItv[1]) lastItv[1] = itv[i][1];
       } 
      
      
      return res;
      
    }
};