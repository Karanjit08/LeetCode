class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>firstOcc;
        map<int,int>lastOcc;
        map<int,int>count;
        int i,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(firstOcc.count(nums[i])==0){
                firstOcc[nums[i]] = i;
            }
            lastOcc[nums[i]]=i;
            count[nums[i]]++;
        }
        int maxCount=0;
        for(auto it: count){
            maxCount = max(maxCount,it.second);
        }
        int minAns=nums.size();
        for(auto it: count){
            if(it.second==maxCount){
                minAns = min(minAns,lastOcc[it.first]-firstOcc[it.first]+1);
            }
        }
        return minAns;
        
    }
};