class Solution {
public:
    int func1(vector<int>& nums, int target){
        int left=0,right = nums.size()-1,mid;
        int ans=-1;
        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                right = mid-1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }
    
    int func2(vector<int>& nums, int target){
        int left=0,right = nums.size()-1,mid;
        int ans=-1;
        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]==target){
                ans = mid;
                left = mid+1;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;
        int l=0,r=n-1,mid;
        int firstPosition = func1(nums,target);
        ans.push_back(firstPosition);
        int lastPosition = func2(nums,target);
        ans.push_back(lastPosition);
        return ans;
    }
};