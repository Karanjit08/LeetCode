class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int n = nums.size();
        int count=0;
        vector<int>st;
        if(n==0)
        {
            return count;
        }
        else{
            for(i=1;i<n;i++)
            {
                if(nums[i]-nums[i-1]==1)
                {
                    count++;
                    
                }
                else if(nums[i]!=nums[i-1])
                {
                    st.push_back(count);
                    count=0;
                }
            }
        }
        st.push_back(count);
        int j;
        int max = st[0];
        for(j=0;j<st.size();j++)
        {
            if(st[j]>=max)
            {
                max = st[j];
            }
        }
        return max+1;
    }
};