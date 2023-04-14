//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i,j;
	    int mid;
	    int count;
	    int countMax=0;
	    int ans=m;
	    int index=-1;
	    for(i=0;i<n;i++)
	    {
	        count=0;
	        int left=0,right=m-1;
	        while(left<=right)
	        {
	            mid = left + (right-left)/2;
	            if(arr[i][mid]==1)
	            {
	                ans = mid;
	                right = mid-1;
	            }
	            else if(arr[i][mid]<1)
	            {
	                left = mid+1;
	            }
	        }
	        count = m-ans;
	        if(count>countMax)
	        {
	            countMax = count;
	            index = i;
	        }
	    }
	    return index;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends