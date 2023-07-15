//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int i,sum=0;
        int maxLen=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(i=0;i<n;i++){
            sum = sum + A[i];
            if(m.find(sum)!=m.end()){
                int k = i - m[sum];
                if(k>maxLen){
                    maxLen = k;
                }
            }
            else{
                m[sum]=i;
            }
        }
        return maxLen;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends