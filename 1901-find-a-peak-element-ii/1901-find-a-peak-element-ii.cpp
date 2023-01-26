class Solution {
public:
    int maxIndexRow(vector<vector<int>>& mat, int mid, int size)
    {
        int max=0;
        int value=0;
        int n=mat.size();
        int i;
        for(i=0;i<size;i++)
        {
            if(mat[mid][i]>value)
            {
                value = mat[mid][i];
                max = i;
            }
        }
        return max;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int left=0,right=n-1,mid;
        vector<int>ans;
        
        while(left<=right)
        {
            mid = left + (right-left)/2;
            int size = mat[mid].size();
            int maxRowIndex= maxIndexRow(mat,mid,size);
            if(mid==0)
            {
                if(mat[mid][maxRowIndex]>mat[mid+1][maxRowIndex])
                {
                    ans.push_back(mid);
                    ans.push_back(maxRowIndex);
                    return ans;
                }
            }
            else if(mid==n-1)
            {
                if(mat[mid][maxRowIndex]>mat[mid-1][maxRowIndex])
                {
                    ans.push_back(mid);
                    ans.push_back(maxRowIndex);
                    return ans;
                }
            }
            else
            {
                if(mat[mid][maxRowIndex]>mat[mid+1][maxRowIndex] && mat[mid][maxRowIndex]>mat[mid-1][maxRowIndex])
                {
                    ans.push_back(mid);
                    ans.push_back(maxRowIndex);
                    return ans;
                }
            }
            if(mat[mid][maxRowIndex]<mat[mid+1][maxRowIndex])
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return ans;
        
    }
};