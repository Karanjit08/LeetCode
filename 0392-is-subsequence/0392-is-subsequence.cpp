class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        int i=0,j=0;
        int count=0;
        while(i<n1 && j<n2){
            if(s[i]==t[j]){
                i++;
                j++;
                count++;
            }
            else{
                j++;
            }
        }
        if(count==n1){
            return true;
        }
        return false;
        
    }
};