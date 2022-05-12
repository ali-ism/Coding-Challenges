class Solution {
private:
    bool compare_maps(std::unordered_map<char,int>& a,
                      std::unordered_map<char,int>& b,
                      std::string& s)
    {
        for(char c:s)
            if(a[c]!=b[c]) return false;
        return true;
    }
public:
    bool checkInclusion(std::string s1, std::string s2)
    {
        if(s2.length()<s1.length()) return false;
        
        std::unordered_map<char,int> freq_s1, freq_s2;
        for(char c:s1) ++freq_s1[c];
        
        int i1{0}, i2{0};
        
        while(i2 < s2.length())
        {
            ++freq_s2[s2[i2]];
            
            if(i2-i1+1 == s1.length())
            {
                if(compare_maps(freq_s1, freq_s2, s1)) return true;
            }
            
            if(i2-i1+1 < s1.length()) ++i2;
            else
            {
                --freq_s2[s2[i1]];
                ++i1;
                ++i2;
            }
        }
        return false;
    }
};
