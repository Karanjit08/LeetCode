class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int i;
       
        int yDiff = coordinates[1][1] - coordinates[0][1];
        int xDiff = coordinates[1][0] - coordinates[0][0];
        int currentYDiff,currentXDiff;
        
        for(i=2;i<coordinates.size();i++)
        {
            currentYDiff = coordinates[i][1] - coordinates[i-1][1];
            currentXDiff = coordinates[i][0] - coordinates[i-1][0];
            if(xDiff*currentYDiff != yDiff*currentXDiff)
            {
                return false;
            }
            
        }
        return true;
    }
};