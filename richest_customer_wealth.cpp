using namespace std;

class Solution
{
    private:
        int sum_vector(vector<int>& v)
        {
            int s{0};
            for(const int num:v) s += num;
            return s;
        }
    public:
        int maximumWealth(vector<vector<int>>& accounts)
        {
            int max_wealth{0};
            int s;
            for(int i=0; i<accounts.size(); i++)
            {
                s = sum_vector(accounts[i]);
                if(s > max_wealth)
                    max_wealth = s;
            }
            return max_wealth;
        }
};
