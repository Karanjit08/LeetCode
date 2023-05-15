class Solution {
public:
    
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        int i;
        int n = s.length();
        int n2 = t.length();
        set<char>c;
        if(n!=n2)
        {
            return false;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(m.count(s[i])==0 && c.count(t[i])==0)
                {
                    m.insert({s[i],t[i]});
                    c.insert(t[i]);
                }
                else if(m.count(s[i])==0 && c.count(t[i])==1)
                {
                    return false;
                }
                else if(m[s[i]]!=t[i])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};