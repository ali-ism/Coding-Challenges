#include<string>

class Solution {
public:
    int romanToInt(string s)
    {
        map<char,int> m = {{'I',1}, {'V',5}, {'X',10}, {'L',50},
                           {'C',100}, {'D',500}, {'M',1000}};
        int num{0};
        char c;
        
        for(int i=0; i<s.length(); i++)
        {
            c = s[i];
            if(c=='I' && s[i+1]=='V')
            {
                num += 4;
                i++;
            }
            else if(c=='I' && s[i+1]=='X')
            {
                num += 9;
                i++;
            }
            else if(c=='X' && s[i+1]=='L')
            {
                num += 40;
                i++;
            }
            else if(c=='X' && s[i+1]=='C')
            {
                num += 90;
                i++;
            }
            else if(c=='C' && s[i+1]=='D')
            {
                num += 400;
                i++;
            }
            else if(c=='C' && s[i+1]=='M')
            {
                num += 900;
                i++;
            }
            else num += m[c];
        }
        return num;
    }
};
