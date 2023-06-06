class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i;
        int n = arr.size();
        int diff = arr[1]-arr[0];
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]!=diff)
            {
                return false;
            }
        }
        return true;
    }
};