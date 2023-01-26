class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m,n,left,right,mid;
        n=matrix.size();
        m=matrix[0].size();
        left=0,right=m-1;
        while(left<n && right>=0)
        {
            mid = left+(right-left)/2;
            if(matrix[left][right]==target)
            {
                return true;
            }
            else if(matrix[left][right]<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return false;
        
    }
};