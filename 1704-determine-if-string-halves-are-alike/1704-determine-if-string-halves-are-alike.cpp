class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int i;
        string a;
        string b;
        a = s.substr(0,(n/2));
        b = s.substr((n/2),n);
        int countA=0;
        int countB=0;
        for(i=0;i<a.length();i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            {
                countA++;
            }
        }
        
        for(i=0;i<b.length();i++)
        {
            if(b[i]>='A' && b[i]<='Z')
            {
                b[i] = b[i] + 32;
            }
            if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
            {
                countB++;
            }
        }
        if(countA==countB)
        {
            return true;
        }
        return false;
    }
};