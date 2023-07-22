class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int>m;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            m[nums[i]-k]++;
            m[nums[i]+k+1]--;
        }
        int ans=0;
        int count=0;
        for(auto it: m){
            ans = ans + it.second;
            count= max(ans,count);
        }
        return count;
    }
};