class Solution {
public:
    int findPivot(vector<int>& nums)
    {
        int n=nums.size();
        int left=0,right=n-1,mid;
        while(left<right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]>=nums[0])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
    
    int b1(vector<int>& nums, int target, int left, int right)
    {
        int n=nums.size();
        
        int mid;
        while(left<=right)
        {
            mid = left+(right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else
            {
                right =mid-1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot = findPivot(nums);
        int secondPivot;
        secondPivot= pivot - 1;
        int ans;

        if(nums[pivot]<=target && nums[n-1]>=target)
        {
            
            ans = b1(nums,target,pivot,n-1);
               
        }
        else
        {
            ans = b1(nums,target,0,secondPivot);
        }
        
        return ans;
        
        
    }
};