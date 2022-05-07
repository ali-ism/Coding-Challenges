class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        std::unordered_map<int,int> m;
        for(const int num:nums)
        {
            if(m.count(num)==0) m[num] = 1;
            else return true;
        }
        return false;
    }
};
