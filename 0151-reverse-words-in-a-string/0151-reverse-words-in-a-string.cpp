class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j;
        string ans="";
        string f="";
        int n=s.length();
        while(i<n)
        {
           while(i<n && s[i]==' ')
           {
               i++;
           }
            if(i>=n)
            {
                break;
            }
            j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            f = s.substr(i,j-i);
            if(ans.length()==0)
            {
                ans = f;
            }
            else
            {
                ans = f + " " + ans;
            }
            i = j+1; 
        }
        return ans;
        
    }
};