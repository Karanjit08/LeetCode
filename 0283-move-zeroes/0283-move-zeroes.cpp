class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,n=nums.size();
        vector<int>v1;
        vector<int>v2;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        int n2=v1.size();
        int index=0;
        while(n2!=0)
        {
            v2.push_back(v1[index]);
            index++;
            n2--;
        }
        nums = v2;
    }
};