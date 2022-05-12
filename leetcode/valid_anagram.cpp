#include<string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t)
    {
        
        if(s.length() != t.length()) return false;
        
        std::unordered_map<char,int> m;
        
        for(char c:s) ++m[c];
        
        for(char c:t)
        {
            if(m[c] > 0) --m[c];
            else return false;
        }
        
        return true;
    }
};
