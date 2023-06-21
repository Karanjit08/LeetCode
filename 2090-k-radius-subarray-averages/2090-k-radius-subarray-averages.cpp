class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        long long int pref[n];
        long long int suff[n];
        int i;
        vector<int>ans;
        pref[0] = nums[0];
        for(i=1;i<n;i++)
        {
            pref[i] = pref[i-1] + nums[i];
        }
        suff[n-1] = nums[n-1];
        for(i=n-2;i>=0;i--){
            suff[i] = suff[i+1] + nums[i];
        }
        for(i=0;i<n;i++)
        {
            if(i-k<0 || i+k>=n){
                ans.push_back(-1);
            }
            else{
                long long int sum = (long long int)((suff[i-k]-suff[i]) + (pref[i+k]-pref[i]) + nums[i]);
                sum = sum/(2*k+1);
                // long long int num1 = pref[i+k]-pref[i];
                // long long int num2 = nums[i];
                // long long int num3 = suff[i-k] - suff[i];
                // long long int total = (long long int)(num1 + num2 + num3);
                // long long int avg = total/(2*k+1);
                ans.push_back(sum);
                // if(sum>k){
                //     ans.push_back(sum);
                // }
                // else{
                //     ans.push_back(-1);
                // }
            }
        }
        return ans;
    }
    
};