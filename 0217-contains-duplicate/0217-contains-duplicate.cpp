class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i,n=nums.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it: m){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};