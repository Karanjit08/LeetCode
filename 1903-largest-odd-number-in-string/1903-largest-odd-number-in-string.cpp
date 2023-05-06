class Solution {
public:
    string largestOddNumber(string num) {
        long long int i;
        string oddLargest="";
        string temp="";
        long long int n=num.length();
        for(i=n-1;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                string s = num.substr(0,i+1);
                oddLargest = s;
                return oddLargest;
                
            }
        }
        return oddLargest;
    }
};