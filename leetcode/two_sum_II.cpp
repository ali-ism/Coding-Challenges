class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target)
    {
        std::vector<int> ans(2);
        if(numbers.size() == 2)
        {
            ans[0] = 1;
            ans[1] = 2;
            return ans;
        }
        
        int required;
        for(int i=0; i<numbers.size(); ++i)
        {
            required = target - numbers[i];
            if(required >= numbers[i]) //search for required
            {
                int low = i+1;
                int high = numbers.size()-1;
                
                while(low <= high)
                {
                    int mid = low + (high-low)/2;
                    if(numbers[mid] == required)
                    {
                        ans[0] = i+1;
                        ans[1] = mid+1;
                        return ans;
                    }
                    if(numbers[mid]<required) low = mid+1;
                    else high = mid-1;
                }
            }
        }
        return ans;
    }
};
