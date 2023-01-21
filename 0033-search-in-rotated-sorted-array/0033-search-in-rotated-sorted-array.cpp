class Solution {
public:
    int findPivot(vector<int>& nums)
    {
        int left=0,right,mid,ans;
        int n=nums.size();
        right = n-1;
        while(left<right)
        {
            mid = left+(right-left)/2;
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
    int binarySearch(vector<int>& nums, int target, int left,int right)
    {
        int mid;
        while(left<=right)
        {
            mid = left + (right-left)/2;
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
                right = mid-1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size(),ans;
        int left=0,right=n-1,mid;
        int pivot = findPivot(nums);
        if(nums[pivot]<=target && nums[n-1]>=target)
        {
            ans = binarySearch(nums,target,pivot,n-1);
        }
        else
        {
            ans = binarySearch(nums,target,0,pivot-1);
        }
        return ans;
        
        
    }
};