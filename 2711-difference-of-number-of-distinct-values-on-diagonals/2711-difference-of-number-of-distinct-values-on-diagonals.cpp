class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col = grid[0].size();
        int i,j;
        int r,c;
        vector<vector<int>>ans(row,vector<int>(col));
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                set<int>s1;
                set<int>s2;
                r = i-1;
                c = j-1;
                while(r>=0 && c>=0)
                {
                    s1.insert(grid[r][c]);
                    r--;
                    c--;
                }
                r = i+1;
                c=j+1;
                while(r<row && c<col)
                {
                    s2.insert(grid[r][c]);
                    r++;
                    c++;
                }
                int count = s1.size() - s2.size();
                if(count<0)
                {
                    count = - count;
                }
                ans[i][j] = count;
            }
           
        }
        return ans;
        
    }
};