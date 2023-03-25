//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int i,left,right;
        int sum;
        sort(A,A+n);
        for(i=0;i<n;i++)
        {
            left = i+1,right=n-1;
            while(left<right)
            {
                sum = A[i]+A[left]+A[right];
                if(sum==X)
                {
                    return 1;
                }
                else if(sum<X)
                {
                    left++;
                }
                else if(sum>X)
                {
                    right--;
                }
            }
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends