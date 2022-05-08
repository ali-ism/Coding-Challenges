class Solution {
public:
    bool isValid(string s)
    {
        std::unordered_map<char,char> m = {{'[',']'},{'{','}'},{'(',')'}};
        std::stack<char> st;
        for(char c:s)
        {
            if(st.empty()) st.push(c);
            else
            {
                if(c == m[st.top()])
                    st.pop();
                else
                    st.push(c);
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
