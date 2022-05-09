#include<cctype>

class Solution {
private:
    static bool isNotAlnum(const char& c)
    {
        return !isalnum(c);
    }

public:
    bool isPalindrome(string s)
    {
        for(int i=0; i<s.length(); ++i)
            if(isupper(s[i])) s[i] = tolower(s[i]);
        s.erase(std::remove_if(s.begin(), s.end(), isNotAlnum), s.end());
        
        std::deque<char> dq;
        
        for(char c:s) dq.push_back(c);
        
        while(dq.size()>1)
        {
            if(dq.front()!=dq.back()) return false;
            dq.pop_front();
            dq.pop_back();
        }
        return true;
    }
};
