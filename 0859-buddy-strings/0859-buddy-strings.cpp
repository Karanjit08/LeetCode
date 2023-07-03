class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n1 = s.length();
        int n2 = goal.length();
        int i;
        vector<int>index;
        unordered_set<char>ss;
        if(n1!=n2){
            return false;
        }
        else if(s==goal){
            for(i=0;i<n1;i++){
                ss.insert(s[i]);
            }
            if(ss.size()<n1){
                return true;
            }
            else{
                return false;
            }
        }
        
        else{
            for(i=0;i<n1;i++){
                if(s[i]!=goal[i]){
                    index.push_back(i);
                }
            }
        }
        if(index.size()!=2)
        {
            return false;
        }
        
        swap(s[index[0]],s[index[1]]);
        if(s==goal){
            return true;
        }
        return false;
        
    }
};