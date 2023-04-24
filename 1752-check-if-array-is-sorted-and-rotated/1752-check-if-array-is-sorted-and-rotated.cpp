class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int i;
        int flag=0;
        if(n==1)
        {
            flag=1;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    count++;
                }
            }
            if(nums[n-1]>nums[0])
            {
                count++;
            }
        }
    
        if(count==1 || count==0)
        {
            flag=1;
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
        
    
};