class Solution {
public:
    bool isAnagram(string s, string t) {
        int count1[26] = {0};
        int count2[26] = {0};
        int i;
        int n1 = s.length();
        int n2 = t.length();
        for(i=0;i<n1;i++)
        {
            int index = s[i] - 'a';
            count1[index]++;
        }
        for(i=0;i<n2;i++)
        {
            int index = t[i] - 'a';
            count2[index]++;
        }
        for(i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])
            {
                return false;
            }
        }
        return true;
    }
};