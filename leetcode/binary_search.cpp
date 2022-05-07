class Solution {
public:
    int search(std::vector<int>& nums, int target)
    {
        int low{0};
        int high{nums.size()-1};
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            if(target > nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};
