class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        set<int>s;
        int i;
        int n=arr.size();
        for(i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it: mpp)
        {
            s.insert(it.second);
        }
        if(mpp.size()==s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};