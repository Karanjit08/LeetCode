class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int left=0,right=n-1,mid;
        int ans;
        while(left<right)
        {
            mid = left + (right-left)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                ans = mid;
                left = mid+1;
                right= mid;
                
            }
            else if(arr[mid]<arr[mid+1])
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return ans;
        
    }
};