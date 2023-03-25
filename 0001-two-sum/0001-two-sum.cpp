class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,sum;
        int n=nums.size();
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                sum = nums[i] + nums[j];
                if(sum==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
        
    }
};