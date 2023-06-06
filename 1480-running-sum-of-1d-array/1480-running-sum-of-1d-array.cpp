class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int>ans;
        int currentSum=0;
        for(i=0;i<n;i++)
        {
            currentSum = currentSum + nums[i];
            ans.push_back(currentSum);
        }
        return ans;
        
    }
};