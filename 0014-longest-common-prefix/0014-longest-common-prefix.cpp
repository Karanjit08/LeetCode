class Solution {
public:
    int findMinLength(vector<string>& strs){
        int i,n=strs[0].length();
        for(i=0;i<strs.size();i++)
        {
            if(strs[i].length()<n)
            {
                n = strs[i].length();
            }
        }
        return n;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = findMinLength(strs);
        string ans;
        int j;
        int i;
        char current;
        for(i=0;i<minLen;i++)
        {
            current = strs[0][i];
            for(j=1;j<strs.size();j++)
            {
                if(current != strs[j][i])
                {
                    return ans;
                }  
            }
            ans.push_back(current);
        }
        return ans;
    }
};