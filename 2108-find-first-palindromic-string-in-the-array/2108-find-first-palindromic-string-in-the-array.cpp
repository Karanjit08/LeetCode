class Solution {
public:
    bool checkPalindrome(string s){
        int left=0,right = s.length()-1;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        string ans="";
        int i,n=words.size();
        for(i=0;i<n;i++){
            bool check = checkPalindrome(words[i]);
            if(check){
                ans = words[i];
                break;
            }
        }
        return ans;
    }
};