class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows)
    {
        std::vector<std::vector<int>> ans(numRows);
        ans[0] = {1};
        if(numRows==1) return ans;
        ans[1] = {1, 1};
        if(numRows==2) return ans;
        
        for(int i=2; i<numRows; ++i)
        {
            ans[i] = std::vector<int>(i+1);
            ans[i][0] = 1;
            for(int j=1; j<i; ++j)
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans[i][i] = 1;
        }
        return ans;
    }
};
