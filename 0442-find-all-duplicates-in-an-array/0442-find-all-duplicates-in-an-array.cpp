class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i,n=nums.size();
        map<int,int>m;
        for(i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        vector<int>ans;
        for(auto it: m){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};