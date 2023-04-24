class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        int i;
        int a;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            a = 0 - nums[i];
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==a)
                {
                    vector<int>temp;
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    temp.push_back(nums[i]);
                    ans.push_back(temp);
                    while(left<right &&nums[left]==nums[left+1])
                    {
                        left++;
                        
                    }
                    while(left<right &nums[right]==nums[right-1])
                    {
                        
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]<a)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return ans;
        
    }
};