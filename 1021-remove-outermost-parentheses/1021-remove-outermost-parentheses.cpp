class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=0;
        int i,n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(count>0)
                {
                    ans.push_back('(');
                }
                count++;
            }
            else
            {
                
                if(count>1)
                {
                    ans.push_back(')');
                }
                count--;
            }
        }
        return ans;
        
    }
};