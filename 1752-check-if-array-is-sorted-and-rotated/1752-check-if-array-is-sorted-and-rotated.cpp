class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i;
        int count=0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                count+=1;
            }
        }
        if(nums[n-1]>nums[0])
        {
            count+=1;
        }
        if(count==1 || count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};