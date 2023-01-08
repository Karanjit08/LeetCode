class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(i=0;i<n;i++)
        {
            int a = nums[i];
            int t = -a;
            int s = i+1;
            int e = n-1;
            while(s<e)
            {
               if(nums[s]+nums[e]==t)
               {
                   vector<int>temp;
                   temp.push_back(a);
                   temp.push_back(nums[s]);
                   temp.push_back(nums[e]);
                   ans.push_back(temp);
                   while(s<e && nums[s]==nums[s+1])
                   {
                       s++;
                   }
                   while(s<e && nums[e]==nums[e-1])
                   {
                       e--;
                   } 
                   s++;
                   e--;
                   
               }
               else if(nums[s]+nums[e]>t)
               {
                    e--;
               }
               else if(nums[s]+nums[e]<t)
               {
                    s++;
               }
            }
            while(i+1<n && nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return ans;
        
    }
};