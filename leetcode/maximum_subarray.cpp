//https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d

#include<climits>
#include<algorithm>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums)
    {
        int global_max = INT_MIN;
        int local_max{0};
        for(const int num:nums)
        {
            local_max = std::max(num, num+local_max);
            if(local_max > global_max) global_max = local_max;
        }
        return global_max;
    }
};
