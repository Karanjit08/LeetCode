class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int i,n=s.length();
        unordered_map<string,int>m;
        for(i=0;i<=n-minSize;i++){
            string temp = s.substr(i,minSize);
            unordered_set<char>d;
            for(auto it: temp){
                d.insert(it);
            }
            if(d.size()<=maxLetters){
                m[temp]++;
            }
        }
        int max=0;
        for(auto it: m){
            if(it.second>max){
                max = it.second;
            }
        }
        return max;
    }
};