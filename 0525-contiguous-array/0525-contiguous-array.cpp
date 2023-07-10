class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        int sum=0;
        int max_length = 0;
        int i;
        int ans;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                nums[i] = -1;
            }
        }
        for(i=0;i<n;i++){
            sum = sum + nums[i];
            if(sum==0){
                max_length = max(max_length,i+1);
            }
            if(m.count(sum)){
                ans = i - m[sum];
                if(ans>max_length){
                    max_length = ans;
                }
            }
            else{
                m.insert({sum,i});
            }
        }
        return max_length;
    }
};