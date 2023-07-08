class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int n = nums.size();
        int sum=0;
        int ans = INT_MAX;
        int i;
        while(right<n){
            sum = sum + nums[right];
            while(sum>=target){
                ans = min(ans,right-left+1);
                sum = sum - nums[left];
                left++;
            }
            right++;
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};