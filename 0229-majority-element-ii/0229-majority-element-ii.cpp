class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int i,n=nums.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            m[nums[i]]++;
        }
        int times = n/3;
        for(auto it: m){
            if(it.second>times){
                ans.push_back(it.first);
            }
        }
        if(ans.size()==0 && times<=0){
            for(auto it: nums){
                ans.push_back(it);
            }
        }
        return ans;
    }
};