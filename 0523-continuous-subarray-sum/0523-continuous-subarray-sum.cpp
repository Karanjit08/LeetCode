class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i;
        int n=nums.size();
        for(i=0;i<n;i++){
            nums[i] = nums[i]%k;
        }
        nums[0] = nums[0] + 0;
        for(i=1;i<n;i++){
            nums[i] = (nums[i] + nums[i-1])%k;
        }
        
        unordered_map<int,int>m;
        m[nums[0]] = 0;
        for(i=1;i<n;i++){
            if(nums[i]==0){
                return true;
            }
            else if(m.find((nums[i]-k+k)%k)!=m.end()){
                if(i-m[(nums[i]-k+k)%k]>1){
                    return true;
                }
            }
            else{
                // m[nums[i]] = i;
                m.insert({nums[i],i});
            }
        }
        return false;
    }
};