class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,totalSum=0,sum=0;
        int n=nums.size();
        totalSum = n*(n+1)/2;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int ans = totalSum - sum;
        return ans;
        
    }
};