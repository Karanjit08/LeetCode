class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>m;
        int n = nums.size();
        int i;
        int count=0;
        for(i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum==k){
                count++;
            }
            if(m.find(sum-k)!=m.end()){
                count = count + m[sum-k];
            }
            m[sum]++;
        }
        return count;
    }
};