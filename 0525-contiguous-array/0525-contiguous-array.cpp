class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum=0,maxLen=0;
        int i;
        vector<int>temp;
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                temp.push_back(-1);
            }
            else{
                temp.push_back(nums[i]);
            }
        }
        for(i=0;i<temp.size();i++){
            sum = sum + temp[i];
            if(sum==0){
                maxLen = max(maxLen,i+1);
            }
            if(m.count(sum)){
                int g = i-m[sum];
                if(g>maxLen){
                    maxLen = g;
                }
            }
            else{
                m[sum] = i;
            }
        }
        return maxLen;
        
    }
};