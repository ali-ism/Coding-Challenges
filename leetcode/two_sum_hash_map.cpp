class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int,int> m;
        int required;
        std::vector<int> ans(2);
        for(int i=0; i<nums.size(); i++)
        {
            required = target - nums[i];
            if(m.count(required) ==1)
            {
                ans[0] = i;
                ans[1] = m[required];
                return ans;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};
