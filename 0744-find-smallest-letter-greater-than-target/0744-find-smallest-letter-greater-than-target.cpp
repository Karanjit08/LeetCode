class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int i;
        int n = letters.size();
        for(i=0;i<n;i++)
        {
            if(letters[i]>target)
            {
                ans = letters[i];
                break;
            }
        }
        return ans;
    }
};