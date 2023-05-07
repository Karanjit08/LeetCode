class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s;
        int i;
        int n = s.length();
        
        char ch;
        int count=0;
        while(count<n)
        {
            char ch = ans[0];
            ans = ans.substr(1,n);
            ans.push_back(ch);
            if(ans==goal)
            {
                return true;
            }
            cout<<ans;
            count++;
        }
        return false;
        
    }
};