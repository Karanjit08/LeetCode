class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& output, int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            output = nums;
            solve(nums,ans,output,index+1);
            swap(nums[index],nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        int n = nums.size();
        vector<int>output;
        vector<vector<int>>ans;
        solve(nums,ans,output,index);
        return ans;
    }
};