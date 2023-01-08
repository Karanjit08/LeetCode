class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i;
        int n=nums.size();
        k = k%n;
        int s1=0,e1=n-k-1;
        int s2=n-k,e2=n-1;
        while(s1<e1)
        {
            swap(nums[s1],nums[e1]);
            s1++;
            e1--;
        }
        while(s2<e2)
        {
            swap(nums[s2],nums[e2]);
            s2++;
            e2--;
        }
        int start=0,end=n-1;
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        
        
    }
};