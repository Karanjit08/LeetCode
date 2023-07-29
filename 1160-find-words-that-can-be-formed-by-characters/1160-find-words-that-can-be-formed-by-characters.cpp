class Solution {
public:
    bool func(string& s, string& chars,vector<int>& temp, vector<int>& temp2){
        int i,j;
        int flag=0;
        for(i=0;i<26;i++){
            if(temp2[i]>temp[i]){
                return false;
            }
        }
        
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();
        int size = chars.length();
        int ans=0;
        int i,j;
        vector<int>temp(26,0);
        for(i=0;i<size;i++){
            int index = chars[i] - 'a';
            temp[index]++;
        }
        for(i=0;i<n;i++){
            string s = words[i];
            vector<int>temp2(26,0);
            for(j=0;j<s.length();j++){
                int index = s[j] - 'a';
                temp2[index]++;
            }
            if(func(s,chars,temp,temp2)){
                ans = ans + s.length();
            }
        }
        return ans;
    }
};