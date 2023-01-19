//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

bool isPossibleSolution(int n, int k, vector<int> &stalls, int mid)
{
    int cowCount=1;
    int pos = stalls[0];
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-pos>=mid)
        {
            cowCount++;
            pos = stalls[i];
            if(cowCount==k)
            {
                return true;
            }
        }
    }
    return false;
}

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int left=0,right,i,mid;
        int max=-1,ans=-1;
        for(i=0;i<n;i++)
        {
            if(stalls[i]>max)
            {
                max = stalls[i];
            }
        }
        right = max;
        while(left<=right)
        {
            mid = left + (right-left)/2;
            if(isPossibleSolution(n,k,stalls,mid))
            {
                ans = mid;
                left = mid +1;
            }
            else
            {
                right = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends