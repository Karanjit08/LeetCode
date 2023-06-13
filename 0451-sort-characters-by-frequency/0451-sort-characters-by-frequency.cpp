class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        string ans;
        vector<pair<int,char>>v;
        for(auto it: m)
        {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(),v.end());
        for(auto it: v){
            while(it.first!=0){
                ans.push_back(it.second);
                it.first--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};