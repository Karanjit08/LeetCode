class Solution {
public:
    bool func2(char ch, string& allowed){
        int n = allowed.length();
        int i=0;
        bool flag = false;
        while(i<n){
            if(ch==allowed[i]){
                flag = true;
            }
            i++;
        }
        return flag;
    }
    bool func(string& allowed, string& s){
        int n = s.length();
        int i=0;
        bool flag=false;
        
        while(i<n){
            if(func2(s[i],allowed)){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
            i++;
        }
        return flag;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int i;
        int count=0;
        for(i=0;i<n;i++){
            if(func(allowed,words[i])){
                count++;
            }
        }
        
        return count;
    }
};