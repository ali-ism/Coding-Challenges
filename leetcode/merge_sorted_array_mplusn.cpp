class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
        if(n==0) return;
        if(m==0)
        {
            nums1 = nums2;
            return;
        }
        std::vector<int> ans;
        int i{0}, j{0};
        while(i<m && j<n)
        {
            if(nums1[i] <= nums2[j])
            {
                ans.push_back(nums1[i]);
                ++i;
            }
            else
            {
                ans.push_back(nums2[j]);
                ++j;
            }
        }
        while(i<m)
        {
            ans.push_back(nums1[i]);
            ++i;
        }
        while(j<n)
        {
            ans.push_back(nums2[j]);
            ++j;
        }
        nums1 = ans;
    }
};
