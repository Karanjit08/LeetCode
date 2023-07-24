class Solution {
public:
    bool func(string s, int remSum){
        if(remSum==0 && s==""){
            return true;
        }
        if(remSum<0){
            return false;
        }
        bool ans = false;
        
        for(int i=0;i<s.size();i++){
            string left = s.substr(0,i+1);
            string right = s.substr(i+1);
            int leftNum = stoi(left);
            bool r = func(right,remSum-leftNum);
            if(r){
                ans = true;
                break;
            }
        }
        return ans;
    }
    int punishmentNumber(int n) {
        int sq;
        int i;
        int ans=0;
        for(i=1;i<=n;i++){
            sq = i*i;
            if(func(to_string(sq),i)){
                ans += sq;
            }
        }
        return ans;
    }
};