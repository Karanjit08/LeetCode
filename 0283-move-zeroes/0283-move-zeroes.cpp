class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>nonZero;
        vector<int>zero;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                zero.push_back(nums[i]);
            }
            else
            {
                nonZero.push_back(nums[i]);
            }
        }
        int size1 = zero.size();
        int size2 = nonZero.size();
        int index=0;
        i=0;
        while(size2!=0)
        {
            nums[i] = nonZero[index];
            i++;
            index++;
            size2--;
        }
        while(size1!=0)
        {
            nums[i] = 0;
            size1--;
            i++;
        }
        
    }
};