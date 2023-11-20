class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int i,n=arr.size();
        sort(arr.begin(),arr.end());
        
        arr[0]=1;
        for(i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])>1){
                arr[i] = arr[i-1]+1;
            }
        }
        return arr[n-1];
    }
};