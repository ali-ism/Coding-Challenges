#include<climits>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if(strs.size()==1) return strs[0];
        int min_len{INT_MAX};
        int min_idx;
        for(int i=0; i<strs.size(); ++i)
        {
            if(strs[i].length() < min_len)
            {
                min_len = strs[i].length();
                min_idx = i;
            }
        }
        
        string smallest = strs[min_idx];
        
        for(int i=0; i<smallest.length(); ++i)
        {
            for(string s:strs)
            {
                if(s[i] != smallest[i])
                {
                    string ans = smallest.substr(0, i);
                    return ans;
                }
            }
        }
        return smallest;
    }
};
