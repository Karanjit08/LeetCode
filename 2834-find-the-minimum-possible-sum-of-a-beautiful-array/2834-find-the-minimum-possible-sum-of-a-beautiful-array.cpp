class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long int i=1;
        set<long long int>s;
        long long int count=0;
        long long int sum=0;
        while(count!=n){
            if(s.count(target-i)){
                i++;
            }
            else{
                s.insert(i);
                sum = sum + i;
                count++;
                i++;
            }
        }
        return sum;
        
    }
};