class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,left,right;
        int n=nums.size();
        int a,temp;
        int sum;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            a = nums[i];
            temp = -a;
            left = i+1,right=n-1;
            while(left<right)
            {
                sum =nums[left]+nums[right];
                if(sum==temp)
                {
                    vector<int>v;
                    v.push_back(a);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                    ans.push_back(v);
                    while(left<right && nums[left]==nums[left+1])
                    {
                        left++;
                    
                    }  
                    while(left<right && nums[right]==nums[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(sum<temp)
                {
                    left++;
                }
                else if(sum>temp)
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