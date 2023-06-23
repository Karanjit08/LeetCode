class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        if(n==1){
            return ans;
        }
        else
        {
            for(int i=2;i<=n;i++)
            {
                ans = func(ans);
            }
        }
        return ans;
        
    }
    
    string func(string ans)
    {
        string temp="";
        char c = ans[0];
        int count=1;
        for(int i=1;i<ans.length();i++){
            if(ans[i]==c){
                count++;
            }
            else{
                temp = temp + to_string(count);
                temp = temp + c;
                c = ans[i];
                count=1;
            }
        }
        temp = temp + to_string(count);
        temp = temp + c;
        return temp;
    }
};