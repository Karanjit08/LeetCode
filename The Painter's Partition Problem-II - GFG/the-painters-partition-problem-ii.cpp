//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
bool isPossibleSolution(int arr[], int n, int k, int mid)
{
    int total=0,painters=1;
    for(int i=0;i<n;i++)
    {
        if(total+arr[i]<=mid)
        {
            total+=arr[i];
        }
        else
        {
            painters++;
            if(painters>k || arr[i]>mid)
            {
                return false;
            }
            total = arr[i];
        }
    }
    return true;
}


class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long int left=0,right,sum=0,i,ans=-1;
        int mid;
        for(i=0;i<n;i++)
        {
            sum +=arr[i];
        }
        right = sum;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(isPossibleSolution(arr,n,k,mid))
            {
                ans = mid;
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends