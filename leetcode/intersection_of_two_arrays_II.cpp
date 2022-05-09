class Solution {
public:
    vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        std::unordered_map<int,int> m;
        for(int num:nums1) m[num] += 1;
        std::vector<int> ans;
        for(int num:nums2)
        {
            if(m[num] > 0)
            {
                ans.push_back(num);
                --m[num];
            }
        }
        return ans;
    }
};
