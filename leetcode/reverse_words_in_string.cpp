#include<algorithm>

class Solution {
private:
    void reverseString(string& s)
    {
        if(s.length()==1) return;
        
        int len = s.length();
        for(int i=0; i<len/2; ++i)
            std::swap(s[i], s[len-i-1]);
    }
public:
    string reverseWords(string s)
    {
        string ans = "";
        int i1{0}, i2{0};
        string word;
        
        for(int i2=0; i2<s.length(); ++i2)
        {
            if(s[i2] == ' ' || i2==s.length()-1)
            {
                if(i2==s.length()-1)
                    word = s.substr(i1);
                else
                    word = s.substr(i1, i2-i1);
                reverseString(word);
                ans += word  + " ";
                i1 = i2+1;
            }
        }
        ans.pop_back();
        return ans;
    }
};
