class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        int i;
        int n = s.length();
        int count=0;
        for(i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        
        vector<pair<int,char>>v;
        for(auto it: m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        string ans;
        for(auto it: v)
        {
            while(it.first!=0)
            {
                ans.push_back(it.second);
                it.first--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};