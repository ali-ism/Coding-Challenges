using namespace std;

class Solution
{
    private:
        int sum_vector(vector<int>& v)
        {
            int s{0};
            for(int elem:v) s += elem;
            return s;
        }
        static bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
        {
               return a.second<b.second;
        }
    public:
        vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
        {
            vector<pair<int,int>> pairs;
            for(int i=0; i<mat.size(); i++)
                pairs.push_back(make_pair(i,sum_vector(mat[i])));
            
            stable_sort(pairs.begin(), pairs.end(), sortbysec);
            
            vector<int> result(k);
            for(int i=0; i<k; i++)
                result[i] = pairs[i].first;
            return result;
        }
};
