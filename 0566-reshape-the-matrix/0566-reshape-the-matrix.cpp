class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        int total = row*col;
        int i;
        vector<vector<int>>ans(r,vector<int>(c));
        if(total!= r*c)
        {
            ans = mat;
        }
        else{
            for(i=0;i<total;i++)
            {
                ans[i/c][i%c] = mat[i/col][i%col];
            }
        }
        return ans;
    }
};