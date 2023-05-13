class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,maxi=0,mini=INT_MAX;
        for(i=0;i<prices.size();i++)
        {
            mini = min(mini,prices[i]);
            maxi = max(prices[i]-mini,maxi);
        }
        return maxi;
        
    }
};