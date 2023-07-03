class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,n=nums.size();
        int currentProd=1;
        vector<int>ans1;
        vector<int>ans2;
        for(i=0;i<n;i++){
            currentProd = currentProd * nums[i];
            ans1.push_back(currentProd);
            if(currentProd==0){
                currentProd=1;
            }
        }
        sort(ans1.begin(),ans1.end());
        int c1 = ans1[ans1.size()-1];
        
        currentProd = 1;
        for(i=n-1;i>=0;i--){
            currentProd = currentProd * nums[i];
            ans2.push_back(currentProd);
            if(currentProd==0){
                currentProd=1;
            }
        }
        sort(ans2.begin(),ans2.end());
        int c2 = ans2[ans2.size()-1];
        
        if(c1>c2){
            return c1;
        }
        return c2;
    }
};