class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int i,j,n=arr.size();
        int mini = INT_MAX;
        sort(arr.begin(),arr.end());
        int diff;
        vector<vector<int>>ans;
        for(i=0;i<n-1;i++){
            diff = arr[i+1] - arr[i];
            mini = min(mini,diff);
        }
        // cout<<;
        int k;
        for(i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==mini){
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
            }
        }
        return ans;
        
    }
};