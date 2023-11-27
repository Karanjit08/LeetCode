class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int countVowel,countConsonant;
        int i,j;
        int n = s.length();
        int count=0;
        for(i=0;i<n;i++){
            countVowel=0,countConsonant=0;
            for(j=i;j<n;j++){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    countVowel++;
                }
                else{
                    countConsonant++;
                }
                int val = (countVowel * countConsonant) %k;
            if(val==0 && countVowel==countConsonant){
                count++;
            }
            }
            
        }
        return count;
    }
    
    // DISCUSS : https://leetcode.com/problems/count-beautiful-substrings-i/discuss/4330526/C%2B%2B-or-PYTHON-or-JAVA-oror-EXPLAINED-oror
};