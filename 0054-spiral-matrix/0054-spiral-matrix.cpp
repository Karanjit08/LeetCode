class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startingRow = 0;
        int endingCol = matrix[0].size()-1;
        int endingRow = matrix.size()-1;
        int startingCol = 0;
        int count=0,totalCount = matrix[0].size()*matrix.size();
        vector<int>ans;
        
        while(count<totalCount)
        {
            for(int i=startingCol; count<totalCount && i<=endingCol;i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            for(int i=startingRow; count<totalCount && i<=endingRow;i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            for(int i=endingCol;count<totalCount && i>=startingCol;i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for(int i=endingRow; count<totalCount && i>=startingRow;i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
        
    }
};