class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=n-1;
        k = k%n;
        if(k>n)
        {
            int l=0,r=n-1;
            while(l<=r)
            {
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
        }
        else
        {
            while(left<=right)
            {
                swap(nums[left],nums[right]);
                left++;
                right--;
            } 
            int left2=0,right2=k-1;
            while(left2<=right2)
            {
                swap(nums[left2],nums[right2]);
                left2++;
                right2--;
            }
            int left3=k,right3=n-1;
            while(left3<=right3)
            {
                swap(nums[left3],nums[right3]);
                left3++;
                right3--;
            }
        }
        
    }
};