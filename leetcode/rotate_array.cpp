#include<algorithm>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k)
    {
        int n = nums.size();
        if(k>=n) k = k % n;
        if(k==0 || n<=1) return;
        
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin()+k);
        std::reverse(nums.begin()+k, nums.end());
    }
};
