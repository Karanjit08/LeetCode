// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=0,right=n,mid;
        int ans;
        while(left<=right){
            mid = left + (right-left)/2;
            if(isBadVersion(mid)==true){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};