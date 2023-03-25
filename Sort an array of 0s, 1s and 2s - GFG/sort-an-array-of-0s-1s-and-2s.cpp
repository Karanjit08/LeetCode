//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        vector<int>v0;
        vector<int>v1;
        vector<int>v2;
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                v0.push_back(a[i]);
            }
            else if(a[i]==1)
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
            }
        }
        int s0,s1,s2;
        s0 = v0.size();
        s1 = v1.size();
        s2 = v2.size();
        i=0;
        while(s0!=0)
        {
            a[i] = 0;
            s0--;
            i++;
        }
        while(s1!=0)
        {
            a[i] = 1;
            s1--;
            i++;
        }
        while(s2!=0)
        {
            a[i] = 2;
            s2--;
            i++;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends