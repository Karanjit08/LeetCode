class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,count=0;
        int j;
        map<int,int>m;
        for(i=0;i<nums.size();i++)
        {
            if(m.count(nums[i])!=0)
            {
                count = count + m[nums[i]];
                m[nums[i]]+=1;
            }
            else
            {
                m.insert({nums[i],1});
            }
        }
        return count;
    }
};