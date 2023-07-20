class Solution {
public:
   
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        int temp = intervals[0][1];
        int i;
        int count=0;
        for(i=1;i<n;i++){
            if(temp<=intervals[i][0])
            {
                temp = intervals[i][1];
            }
            else
            {
                count++;
                temp = min(temp,intervals[i][1]);
            }
        }
        
        return count;
    }
};