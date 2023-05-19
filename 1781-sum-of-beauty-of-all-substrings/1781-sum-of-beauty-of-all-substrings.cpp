class Solution {
public:
    int beautySum(string s) {
        int i,j,ans=0;
        int n = s.length();
        
        for(i=0;i<n;i++)
        {
            map<char,int>m;
            for(j=i;j<n;j++)
            {
                m[s[j]]++;
                int maxi= 0, mini = INT_MAX;
                for(auto it: m)
                {
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                }
                ans = ans + (maxi - mini);
            }
            
        }
        return ans;
    }
};