class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums)
    {
        if(nums.size()==1)
        {
            nums[0] = nums[0] * nums[0];
            return nums;
        }
        std::stack<int> negs;
        int i{0};
        while(i<nums.size() && nums[i]<0)
        {
            negs.push(nums[i]*nums[i]);
            ++i;
        }
        std::vector<int> ans;
        while(i<nums.size() && !negs.empty())
        {
            int num = nums[i] * nums[i];
            if(num<=negs.top())
            {
                ans.push_back(num);
                ++i;
            }
            else
            {
                ans.push_back(negs.top());
                negs.pop();
            }
        }
        while(i<nums.size())
        {
            ans.push_back(nums[i]*nums[i]);
            ++i;
        }
        while(!negs.empty())
        {
            ans.push_back(negs.top());
            negs.pop();
        }
        return ans;
    }
};
