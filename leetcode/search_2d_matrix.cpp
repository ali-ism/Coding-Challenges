class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
    {
        int m = matrix.size(), n=matrix[0].size();
        std::vector<int> flat_matrix;
        flat_matrix.reserve(m*n);
        
        for(int i=0; i<m; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                flat_matrix.push_back(matrix[i][j]);
            }
        }
        
        int low=0, high=flat_matrix.size()-1;
        int mid;
        
        while(low <= high)
        {
            mid = low + (high-low)/2;
            if(flat_matrix[mid] == target) return true;
            if(flat_matrix[mid] < target) low = mid+1;
            else high = mid-1;
        }
        
        return false;
    }
};
