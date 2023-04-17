class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,n=nums.size();
        int left=0,right = n-1;
        int mid;
        int ans=0;
        
        int left2=0,right2=n-1,mid2,ans2;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]<target)
            {
                left = mid+1;
                ans = left;
            }
            else
            {
                right = mid-1;
            }
        }
        if(ans>0)
        {
            return ans;
        }
        else
        {
            while(left2<=right2)
            {
                mid2 = left2 + (right2-left2)/2;
                if(nums[mid2]==target)
                {
                    ans2 = mid2;
                    left2 = n+1;
                }
                else if(nums[mid2]<target)
                {
                    left2 = mid2+1;
                }
                else
                {
                    right2 = mid2-1;
                }
            }
            return ans2;
        }
        
    }
};