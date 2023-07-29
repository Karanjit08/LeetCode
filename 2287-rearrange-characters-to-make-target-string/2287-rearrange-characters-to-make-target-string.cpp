class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int n = s.length();
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        int i,j;
        for(i=0;i<n;i++){
            m1[s[i]]++;
        }
        for(j=0;j<target.length();j++){
            m2[target[j]]++;
        }
        
        int ans = INT_MAX;
        for(auto it: m2){
            int v1 = it.second;
            int v2 = m1[it.first];
            ans = min(ans,v2/v1);
            
        }
        return ans;
        
    }
};