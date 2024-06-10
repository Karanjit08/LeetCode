class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
      int i,n=nums.size();
      for(i=0;i<n;i++){
          m[nums[i]]++;
      }
      
      int ans=0;
      for(auto it: m){
          if(it.second > 1){
              ans = it.first;
          }
      }
      return ans;
    }
};