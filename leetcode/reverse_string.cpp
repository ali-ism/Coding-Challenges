#include<algorithm>

class Solution {
public:
    void reverseString(std::vector<char>& s)
    {
        if(s.size()==1) return;
        
        int len = s.size();
        for(int i=0; i<len/2; ++i)
            std::swap(s[i], s[len-i-1]);
    }
};
