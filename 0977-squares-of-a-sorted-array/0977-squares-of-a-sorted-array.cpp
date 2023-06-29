class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int i;
        int val;
        for(i=0;i<n;i++){
            if(nums[i]<0){
                nums[i] = -nums[i];
                val = nums[i]*nums[i];
            }
            else{
                val = nums[i]*nums[i];
            }
            ans.push_back(val);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};