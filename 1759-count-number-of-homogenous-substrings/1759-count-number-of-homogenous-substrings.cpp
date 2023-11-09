class Solution {
public:
    int countHomogenous(string s) {
        int i=0,j=0;
        int n = s.length();
        long long int ans=0;
        long long int count=1;
        for(i=0;i<n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                ans = ans + count*(count+1)/2;
                count=1;
            }
        }
        ans = ans + count*(count+1)/2;
        return (ans-1)%1000000007;
    }
};