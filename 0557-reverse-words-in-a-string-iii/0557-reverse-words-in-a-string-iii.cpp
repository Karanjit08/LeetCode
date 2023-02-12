class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int indexLeft,indexRight;
        int n=s.length();
        while(i<n)
        {
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            
            indexLeft=i;
            indexRight=j-1;
            while(indexLeft<indexRight)
            {
                swap(s[indexLeft],s[indexRight]);
                indexLeft++;
                indexRight--;
            }
            i=j+1;
            j = i;
        }
        return s;
        
    }
};