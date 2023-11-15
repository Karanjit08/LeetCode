class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        sort(access_times.begin(),access_times.end());
        vector<string>ans;
        int i,n=access_times.size();
        set<string>s;
        for(i=0;i<n-2;i++){
            if(access_times[i][0]==access_times[i+2][0]){
                string s1 = access_times[i][1];
                string s2 = access_times[i+2][1];
                int a = stoi(s1);
                int b = stoi(s2);
                if(abs(b-a)<100){
                    s.insert(access_times[i][0]);
                }
            }
        }
        
        for(auto it: s){
            ans.push_back(it);
        }
        return ans;
    }
};