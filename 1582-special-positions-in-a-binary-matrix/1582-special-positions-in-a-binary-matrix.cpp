class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col = mat[0].size();
        int aRowSum[row];
        int bColSum[col];
        int i,j;
        int count=0;
        for(i=0;i<row;i++)
        {
            aRowSum[i]=0;
            for(j=0;j<col;j++)
            {
                aRowSum[i]+=mat[i][j];
            }
        }
        
        for(i=0;i<col;i++)
        {
            bColSum[i]=0;
            for(j=0;j<row;j++)
            {
                bColSum[i]+=mat[j][i];
            }
        }
        
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(mat[i][j]==1 && aRowSum[i]==1 && bColSum[j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};