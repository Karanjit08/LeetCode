class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
        int i;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = s[i] + 32;
                ans.push_back(s[i]);
            }
            else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
            {
                ans.push_back(s[i]);
            }
        }
        
        int left=0,right=ans.size()-1;
        while(left<=right)
        {
            if(ans[left]==ans[right])
            {
                left++;
                right--;
            }
            else
            {
                left++;
                right--;
                return false;
            }
        }
        return true;
        
    }
};