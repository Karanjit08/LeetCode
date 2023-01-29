//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        
        //STEP 1: FIND THE COUNT OF DIGITS
        
        long long int temp,rem,count=0;
        long long int temp1 = n;
        long long int temp2 = n;
        while(n!=0)
        {
            rem = n%10;
            count++;
            n=n/10;
        }
        
        //STEP 2: FIND THE POWER OF DIGITS AND SUM OF DIGITS
        int number=0;
        
        while(temp1!=0)
        {
            rem = temp1%10;
            number = number + pow(rem,count);
            temp1 = temp1/10;
        }
        if(number==temp2)
        {
            return "Yes";
        }
        else
        {
            return "No";
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
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends