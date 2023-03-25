class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int i;
        int n=nums.size();
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
            }
            m[nums[i]] = i;
        }
        return ans;
        
    }
};