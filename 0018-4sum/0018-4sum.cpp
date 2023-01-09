class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j;
        set<vector<int>>v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                long long int sum=nums[i]+nums[j];
                int s=j+1,e=n-1;
                while(s<e)
                {
                    if(nums[s]+nums[e]==target-sum)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[s]);
                        temp.push_back(nums[e]);
                        v.insert(temp);
                        s++;
                        e--;
                    }
                    else if(nums[s]+nums[e]>target -sum)
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
        }
        vector<vector<int>>ans = {v.begin(),v.end()};
        return ans;
        
    }
};