class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        int i;
        string ans="";
        string k = "";
        for(i=1;i<=n/2;i++){
            if(n%i==0){
                k = s.substr(0,i);
                ans = "";
                for(int j=0;j<n/i;j++){
                    ans+=k;
                }
                if(ans==s){
                    return true;
                }
                
            }
        }
        return false;
        
    }
};