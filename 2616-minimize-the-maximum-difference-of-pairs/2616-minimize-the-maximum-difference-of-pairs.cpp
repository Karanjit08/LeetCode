class Solution {
public:
    bool func(vector<int>& nums, int p, int diff){
        int i;
        int n = nums.size();
        int count=0;
        for(i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=diff){
                count++;
                i++;
            }
            
        }
        if(count>=p){
            return true;
        }
        return false;
    }
    
    int minimizeMax(vector<int>& nums, int p) {
        int left,right,mid;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        left=0,right = nums[n-1]-nums[0];
        int ans=right;
        while(left<=right){
            mid = left + (right-left)/2;
            if(func(nums,p,mid)){
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