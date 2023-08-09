class Solution {
public:
    bool solve(string& ans, int left, int right){
        bool check = true;
        if(left>right){
            check = true;
            return check;
        }
        if(ans[left]!=ans[right]){
            check = false;
            return check;
        }
        return solve(ans,left+=1,right-=1);
        
    }
    
    bool isPalindrome(string s) {
        string ans;
        int i,n=s.length();
        for(i=0;i<n;i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    s[i] = s[i] + 32;
                    ans.push_back(s[i]);
                }
                else{
                    ans.push_back(s[i]);
                }
            }
        }
        
        if(solve(ans,0,ans.length()-1)){
            return true;
        }
        return false;
        
    }
};