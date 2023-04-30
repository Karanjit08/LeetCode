class Solution {
public:
    string makeGood(string s) {
        int n=s.length();
        int i=0;
        while(i<n-1)
        {
            int x,y;
            if(s[i]>=97 && s[i]<=122)
            {
                x = s[i] - 32;
            }
            else
            {
                x = s[i] + 32;
            }
            y = s[i+1];
            if(x==y)
            {
                s.erase(i,2);
                i=0;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};