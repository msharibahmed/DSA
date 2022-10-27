class Solution {
  vector<vector<int>> merge(vector<vector<int>>& itv, vector<vector<int>> &res, int x) {

      res.push_back(itv[x]);
      
      for(int i = x + 1; i < size(itv); ++i) {
        vector<int> &lastItv = res.back();
        
        if(itv[i][0] > lastItv[1]) res.push_back(itv[i]);
        else if(itv[i][1] >= lastItv[1]) lastItv[1] = itv[i][1];
       } 
      
      
      return res;
      
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& itv, vector<int>& newItv) {
      if(size(itv) == 0 || newItv[0] > itv[size(itv) - 1][1]) {
        itv.push_back(newItv);
        return itv;
      }
      
      vector<vector<int>> res;
      bool isInserted = false;
      
      for(int i = 0; i < size(itv); ++i) {
        if(isInserted) {
          res.push_back(itv[i]);
          continue;
        }
        
        if(newItv[0] > itv[i][1]) res.push_back(itv[i]);
        else if(newItv[1] < itv[i][0]) {
          isInserted = true;
          res.push_back(newItv);
          res.push_back(itv[i]);
        }
        else {
          if(newItv[0] < itv[i][0]) itv[i][0] = newItv[0];
          if(newItv[1] > itv[i][1]) itv[i][1] = newItv[1];
          return merge(itv, res, i);
          
        }
        
      }
      
      return res;
    }
};