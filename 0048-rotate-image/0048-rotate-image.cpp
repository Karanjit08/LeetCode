class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int i,j,m,n;
        n=matrix.size();
        m=matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        
    }
};