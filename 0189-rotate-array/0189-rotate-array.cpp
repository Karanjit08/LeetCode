class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int i;
        k = k%n;
        int left=0,right=n-k-1;
        int left2 = n-k,right2=n-1;
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        while(left2<=right2)
        {
            swap(nums[left2],nums[right2]);
            left2++;
            right2--;
        }
        int s=0,e=n-1;
        while(s<e)
        {
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
        
           
    }
};