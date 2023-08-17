class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans,int index){
        int n = nums.size();
        if(index>=n){
            ans.push_back(temp);
            return;
        }
        //TAKE
        int element = nums[index];
        temp.push_back(element);
        solve(nums,temp,ans,index+1);
        
        //NOT TAKE
        temp.pop_back();
        solve(nums,temp,ans,index+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums,temp,ans,0);
        return ans;
    }
};