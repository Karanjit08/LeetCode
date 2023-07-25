class Solution {
public:
    bool solve(string& temp, int left, int right){
        
        if(left>right){
            return 1;
        }
        if(temp[left]==temp[right]){
            left++;
            right--;
        }
        else{
            return 0;
        }
        
        return solve(temp,left++,right--);
    }
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
        bool ans = false;
        int left=0,right = temp.length()-1;
        bool a = solve(temp,left,right);
        // int left=0,right = temp.length()-1;
        // while(left<=right){
        //     if(temp[left]==temp[right]){
        //         left++;
        //         right--;
        //     }
        //     else{
        //         ans = false;
        //         return ans;
        //     }
        // }
        return a;
    }
};