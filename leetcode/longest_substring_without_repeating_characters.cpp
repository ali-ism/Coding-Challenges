#include<string>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s)
    {
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;
        
        std::unordered_map<char,int> last_seen_pos;
        
        int i1{0}, i2{0};
        int max_len{-1};
        
        while(i2 < s.length())
        {
            if(last_seen_pos.count(s[i2]) == 1)
            {
                i2 = last_seen_pos[s[i2]]+1;
                i1 = i2;
                last_seen_pos.clear();
            }
            else
            {
                last_seen_pos[s[i2]] = i2;
                ++i2;
            }
            if(i2-i1 > max_len) max_len = i2-i1;
        }
        
        return max_len;
    }
};
