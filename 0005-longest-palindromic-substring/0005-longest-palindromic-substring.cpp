class Solution {
public:
    string longestPalindrome(string s) {
        
        int low,high;
        int start=0,end=1;
        int i;
        int n=s.length();
        for(i=1;i<n;i++)
        {
            //ODD CASE
            low = i-1;
            high = i+1;
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1>end)
                {
                    start = low;
                    end = high-low+1;
                }
                low--;
                high++;
            }
            // EVEN CASE
            low = i;
            high = i-1;
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1 > end)
                {
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
        }
        return s.substr(start,end);
    }
};