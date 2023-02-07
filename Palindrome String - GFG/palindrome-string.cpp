//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int ans=1;
	    // Your code goes here
	    int left=0,right=S.length()-1;
	    while(left<right)
	    {
	        if(S[left]==S[right])
	        {
	            left++;
	            right--;
	        }
	        else
	        {
	            ans=0;
	            left++;
	            right--;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends