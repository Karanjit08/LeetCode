class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i,n=nums.size();
        string temp="";
        vector<string>ans;
        for(i=0;i<n;i++)
        {
            int j=i;
            while(j+1<n && nums[j+1]==nums[j]+1)
            {
                j++;
            }
            if(j>i)
            {
                temp = temp + to_string(nums[i]);
                temp = temp + "->";
                temp = temp + to_string(nums[j]);
            }
            else{
                temp = temp + to_string(nums[i]);
            }
            i = j;
            ans.push_back(temp);
            temp = "";
        }
        return ans;
        
    }
};