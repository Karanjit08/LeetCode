class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int i;
        vector<int>ans;
        ans.push_back(0);
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum = sum + gain[i];
            ans.push_back(sum);
        }
        
        int max = ans[0];
        for(i=0;i<ans.size();i++)
        {
            if(ans[i]>max){
                max = ans[i];
            }
        }
        return max;
    }
};