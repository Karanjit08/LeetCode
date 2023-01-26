class Solution {
public:
    int firstOcc(vector<int>& nums, int target)
    {
        int left=0,right,mid;
        right = nums.size()-1;
        int ans=-1;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                right = mid-1;
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
        return ans;
    }
    
    int lastOcc(vector<int>& nums, int target)
    {
        int left=0,right,mid;
        right = nums.size()-1;
        int ans=-1;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                left = mid+1;
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
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1 = firstOcc(nums,target);
        int ans2 = lastOcc(nums,target);
        vector<int>ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
    }
};