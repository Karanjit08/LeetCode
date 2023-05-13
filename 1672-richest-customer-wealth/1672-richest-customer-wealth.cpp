class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j,maxAmount,initialAmount=0;
        for(i=0;i<accounts.size();i++)
        {
            maxAmount = 0;
            for(j=0;j<accounts[0].size();j++)
            {
                maxAmount = maxAmount + accounts[i][j]; 
            }
            if(maxAmount>=initialAmount)
            {
                initialAmount = maxAmount;
            }
        }
        return initialAmount;
    }
};