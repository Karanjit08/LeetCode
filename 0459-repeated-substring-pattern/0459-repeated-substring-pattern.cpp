class Solution {
public:
    // bool checkString(string& temp, string s){
    //     string t;
    //     int index=0;
    //     int n = s.length();
    //     while(index<=n){
    //         t = t + temp;
    //         index = index + temp.length();
    //     }
    //     cout<<t;
    //     if(t==s){
    //         return true;
    //     }
    //     return false;
    // }
    
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        int i;
        // string temp;
        for(i=1;i<=n/2;i++){
            if(n%i==0){
                string temp = s.substr(0,i);
                string ans="";
                for(int j=0;j<n/i;j++){
                    ans += temp;
                }
            // cout<<ans;
                if(ans==s){
                    return true;
                }
            }
        }
        // cout<<temp/;
        // cout<<n;
        return false;
    }
};