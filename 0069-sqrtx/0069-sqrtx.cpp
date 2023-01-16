class Solution {
public:
    int mySqrt(int x) {
        
        int l=0,r=x;
        long long int mid;
        int ans;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            if(mid*mid>x)
            {
                r = mid-1;
            }
            else
            {
                ans = mid;
                l++;
            }
        }
        return ans;
        
    }
};