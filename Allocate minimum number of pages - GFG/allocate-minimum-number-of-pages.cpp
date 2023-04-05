//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    
    bool booksAllocation(int A[], int N, int M, int mid)
    {
        int i,studentCount=1;
        int sum=0;
        for(i=0;i<N;i++)
        {
            if(sum+A[i]<=mid)
            {
                sum = sum + A[i];
                
            }
            else
            {
                studentCount++;
                if(studentCount>M || A[i]>mid)
                {
                    return false;
                }
                sum =A[i];
            }
        }
        return true;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int i,left=0,right,mid;
        int ans=-1;
        int sum=0;
        for(i=0;i<N;i++)
        {
            sum = sum + A[i];
        }
        right = sum;
        if(M>N)
        {
            return ans;
        }
        else{
            while(left<=right)
            {
                mid = left + (right-left)/2;
                if(booksAllocation(A,N,M,mid))
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
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends