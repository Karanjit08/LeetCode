class Solution {
public:
    bool isPalindrome(int x) {
        long long int rem,temp,number=0;
        temp = x;
        while(x!=0)
        {
            rem = x%10;
            number = number*10+rem;
            x=x/10;
        }
        if(temp<0)
        {
            return false;
        }
        else
        {
            if(temp==number)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
            
    }
};