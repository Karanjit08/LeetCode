class Solution {
public:
    int checkMaxColValue(int indexCol, int indexRow,vector<vector<int>>& matrix)
    {
        int i,miniRow = matrix[indexRow][indexCol];
        int flag = miniRow;
        for(i=0;i<matrix.size();i++)
        {
            if(matrix[i][indexCol]>miniRow)
            {
                flag=0;
            }
        }
        
        return flag;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>temp;
        int i;
        int m = matrix.size(); 
        vector<int>finalAns;
        int c;
        for(i=0;i<m;i++)
        {
            int index = 0;
            int maxColIndex=0;
            int minRowValue=matrix[i][0];
            while(index<matrix[i].size())
            {
                if(matrix[i][index]<minRowValue)
                {
                    minRowValue = matrix[i][index];
                    maxColIndex = index;
                }
                index++;
            }
            c = checkMaxColValue(maxColIndex,i,matrix);
            temp.push_back(c);
        }
        int maxi = 0;
        for(i=0;i<temp.size();i++)
        {
            if(temp[i]>maxi)
            {
                maxi = temp[i];
            }
        }
        if(maxi!=0)
        {
            finalAns.push_back(maxi);
        }
        return finalAns;
        
        
    }
};