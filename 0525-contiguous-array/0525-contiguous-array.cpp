class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,n=nums.size();
        unordered_map<int,int>m;
        int ans=0,maxLen=0;
        int sum=0;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                nums[i] = -1;
            }
        }
        for(i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum==0){
                ans = max(ans,i+1);
            }
            if(m.count(sum)){
                maxLen = i - m[sum];
                if(maxLen>ans){
                    ans = maxLen;
                }
            }
            else{
                m.insert({sum,i});
            }
        }
        return ans;
    }
};