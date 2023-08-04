class Solution {
public:
    string getStringCombined(string a, string b){
        if(a.find(b)!=string::npos){
            return a;
        }
        int i;
        int n = min(a.length(),b.length());
        for(i=n;i>=0;i--){
            if(a.substr(a.length()-i)==b.substr(0,i)){
                return a+b.substr(i);
            }
        }
        return a+b;
    }
    
    void isValid(string s1, string& ans){
        if(ans.length()==0 || s1.length()<ans.length() || (s1.length()==ans.length() && s1<ans)){
            ans = s1;
        }
    }
    
    
    
    string minimumString(string a, string b, string c) {
        vector<string>v = {a,b,c};
        int i,j,k;
        int n = v.size();
        string ans = "";
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(i!=j && j!=k && k!=i)
                    {
                        string s1 = getStringCombined(v[i],v[j]);
                        s1 = getStringCombined(s1,v[k]);
                        isValid(s1,ans);
                    }
                }
            }
        }
        return ans;
    }
};