//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int i,largest=arr[0];
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            largest = arr[i];
	        }
	    }
	    int element;
	    for(i=0;i<n;i++)
	    {
	        element = largest - arr[i];
	        if(element==0)
	        {
	            arr[i] = largest;
	        }
	        else
	        {
	            arr[i] = element;
	        }
	    }
	    int smallest = arr[0];
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<smallest)
	        {
	            smallest = arr[i];
	        }
	    }
	    int ans = largest - smallest;
	    if(ans==0)
	    {
	        return -1;
	    }
	    else
	    {
	        return ans;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends