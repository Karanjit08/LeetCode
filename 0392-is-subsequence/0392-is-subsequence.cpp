class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int n1 = s.length();
        int n2 = t.length();
        while(i<n1 && j<n2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i<n1){
            return false;
        }
        return true;
            
    }
};