#include<string>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        size_t pos;
        for(char c:ransomNote)
        {
            pos = magazine.find(c);
            if(pos==string::npos) return false;
            magazine.erase(magazine.begin()+pos);
        }
        return true;
    }
};
