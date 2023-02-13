//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[27] = {0};
        int index,i;
        int n=str.length();
        for(i=0;i<n;i++)
        {
            index = str[i] - 97 + 1;
            arr[index]++;
        }
        int max=0;
        int ans;
        for(i=0;i<27;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                ans = i;
            }
        }
        char alpha = 97 + ans-1;
        return alpha;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends