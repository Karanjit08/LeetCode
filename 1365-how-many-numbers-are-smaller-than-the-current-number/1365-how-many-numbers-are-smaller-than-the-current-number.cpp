class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j,n=nums.size();
        vector<int>ans;
        int count;
        int element;
        for(i=0;i<n;i++)
        {
            count = 0;
            element = nums[i];
            for(j=0;j<n;j++)
            {
                if(nums[j]<element)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};