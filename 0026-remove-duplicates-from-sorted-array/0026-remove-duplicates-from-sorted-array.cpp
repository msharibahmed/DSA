class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k = 0;
        
        for(int i = 0; i < n; ++i)
        {
            k++;
            int num = nums[i];
            
            if(i + 1 < n)
            {
                while(nums[i + 1] == num)
                {
                    ++i;
                    if(i + 1 >= n) break;
                }
            }
            
            swap(nums[i], nums[k - 1]);
        }
        
        return k;
        
    }
};