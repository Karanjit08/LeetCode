class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        long long int sum=0;
        int i=1;
        if(n==1){
            return 1;
        }
        while(sum<=n){
            sum = sum + i;
            i++;
            count++;
        }
        return count-1;
    }
};