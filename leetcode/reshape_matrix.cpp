class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c)
    {
        int m = mat.size(), n = mat[0].size();
        if(m*n!=r*c) return mat;
        
        std::queue<int> q;
        for(int i=0; i<m; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                q.push(mat[i][j]);
            }
        }
        
        std::vector<std::vector<int>> matr(r, std::vector<int>(c));
        
        for(int i=0; i<r; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                matr[i][j] = q.front();
                q.pop();
            }
        }
        return matr;
    }
};
