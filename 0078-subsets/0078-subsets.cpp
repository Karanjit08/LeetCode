class Solution {
public:
    void solve(vector<int>& nums, vector<int>output, vector<vector<int>>& ans, int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        solve(nums,output,ans,index+1);
        
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,ans,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int i,n=nums.size();
        vector<int>output;
        int index=0;
        solve(nums,output,ans,index);
        return ans;
    }
};