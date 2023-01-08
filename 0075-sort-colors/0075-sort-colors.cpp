class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,e;
        int n=nums.size();
        e=n-1;
        while(m<=e)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==2)
            {
                swap(nums[m],nums[e]);
                e--;
            }
        }
        
    }
};