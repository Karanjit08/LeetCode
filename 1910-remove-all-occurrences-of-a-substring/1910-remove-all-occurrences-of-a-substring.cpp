class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";
        int i;
        for(i=0;i<s.length();i++)
        {
            ans.push_back(s[i]);
            if(ans.size()>=part.size())
            {
                if(ans.substr(ans.size()-part.size())==part)
                {
                    int x = part.size();
                    while(x)
                    {
                        ans.pop_back();
                        x--;
                    }
                }
            }
        }
        return ans;
        
    }
};