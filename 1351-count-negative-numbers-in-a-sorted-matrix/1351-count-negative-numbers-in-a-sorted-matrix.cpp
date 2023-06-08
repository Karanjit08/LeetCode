class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int i,j;
        int row = grid.size();
        int col = grid[0].size();
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j]<0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};