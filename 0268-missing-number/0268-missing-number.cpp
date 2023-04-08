class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans1=0,ans2=0,ans,i,n=nums.size();
        for(i=0;i<n;i++)
        {
            ans1 = ans1 + nums[i];
        }
        for(i=1;i<=n;i++)
        {
            ans2 = ans2 + i;
        }
        ans = ans2 - ans1;
        return ans;
    }
};