class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0,j=0;
        int n=mat.size();
        int sum=0;
        while(i<n && j<n)
        {
            if(i==j)
            {
                sum= sum + mat[i][j];
            }
            i++;
            j++;
        }
        i = n-1;
        j = 0;
        while(i>=0)
        {
            if(i!=j)
            {
                sum = sum +mat[i][j];
            }
            j++;
            i--;
        }
        return sum;
    }
};