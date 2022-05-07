using namespace std;


/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s)
{
    unordered_map<char,char> m = {{'[',']'},{'{','}'},{'(',')'}};
    stack<char> st;
    for(auto c:s)
    {
        if(st.empty()) st.push(c);
        else if(c == m[st.top()]) st.pop();
        else st.push(c);
    }
    return st.empty() ? "YES":"NO";
}
