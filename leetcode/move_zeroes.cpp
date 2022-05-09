class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        if(nums.size()==1) return;
        
        vector<int> zero_pos;
        for(int i=0; i<nums.size(); ++i)
            if(nums[i]==0)
                zero_pos.push_back(i);
        
        int shift{0};
        for(int pos:zero_pos)
        {
            nums.erase(nums.begin()+pos-shift);
            ++shift;
            nums.push_back(0);
        }
    }
};
