class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int i;
        unordered_map<int,int>m;
        int sum=0;
        int count=0;
        
        for(i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum==k){
                count++;
            }
            int element = sum - k;
            if(m.count(element)){
                count = count + m[sum-k];
            }
            m[sum]++;
            
        }
        return count;
    }
};