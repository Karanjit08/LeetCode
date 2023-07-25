class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        int n = s.length();
        int i;
        for(i=0;i<n;i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                if(s[i]>='A' && s[i]<='Z'){
                    s[i] = s[i] + 32;
                    temp.push_back(s[i]);
                }
                else{
                    temp.push_back(s[i]);
                }
            }
        }
        bool ans =true;
        int left=0,right = temp.length()-1;
        while(left<=right){
            if(temp[left]==temp[right]){
                left++;
                right--;
            }
            else{
                ans = false;
                return ans;
            }
        }
        return ans;
    }
};