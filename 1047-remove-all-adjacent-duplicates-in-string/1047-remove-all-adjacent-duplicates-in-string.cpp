class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i;
        string ans;
        for(i=0;i<n;i++)
        {
            if(ans.back()==s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};