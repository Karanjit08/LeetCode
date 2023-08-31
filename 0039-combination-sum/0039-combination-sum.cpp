class Solution {
public:
    void solve(int index,vector<int>& candidates,int target, vector<int>& temp, vector<vector<int>>& ans ){
        int n = candidates.size();
        if(index==n){
            if(target==0){
                ans.push_back(temp);
            }
            return ;
        }
        
        //TAKE
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            solve(index,candidates,target-candidates[index],temp,ans);
            temp.pop_back();
        }
        
        //NOT TAKE
        
        
        solve(index+1,candidates,target,temp,ans);
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,candidates,target,temp,ans);
        return ans;
    }
};