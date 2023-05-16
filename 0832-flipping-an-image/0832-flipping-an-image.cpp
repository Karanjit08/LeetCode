class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i,j;
        int n=image[0].size();
        for(i=0;i<n;i++)
        {
            int left=0,right=n-1;
            while(left<=right)
            {
                swap(image[i][left],image[i][right]);
                left++;
                right--;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(image[i][j]==1)
                {
                    image[i][j] = 0;
                }
                else if(image[i][j]==0)
                {
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};