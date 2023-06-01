/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    
    
    int guessNumber(int n) {
        int mid,left=1,right=n;
        int res;
        int ans;
        while(left<right){
            mid = left + (right-left)/2;
            res = guess(mid);
            if(res==0)
            {
                ans = mid;
                left++;
                right--;
            }
            else if(res==1)
            {
                left = mid+1;;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
        
    }
};