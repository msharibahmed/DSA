class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int m = size(matrix), n = size(matrix[0]);
      
      for(int i = 1; i < m; ++i) {
        for(int j = 1; j < n; ++j) {
          if(matrix[i][j] != matrix[i-1][j-1]) return false;
        }
      }
      
      
      return true;
    }
};