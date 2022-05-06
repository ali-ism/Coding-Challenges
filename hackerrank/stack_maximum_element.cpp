#include<climits>

using namespace std;


/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations)
{
    stack<int> v, s;
    vector<int> r;
    for(auto op:operations)
    {
        if(op[0]=='1')
        {
            int num = stoi(op.substr(2));
            v.push(num);
            if(s.empty()) s.push(num);
            else if(num > s.top()) s.push(num);
            else s.push(s.top());
        }
        else if(op[0]=='2')
        {
            s.pop();
            v.pop();
        }
        else if(!s.empty())
        {
            cout << s.top() << "\n";
            r.push_back(s.top());
        }
    }
    return r;
}
