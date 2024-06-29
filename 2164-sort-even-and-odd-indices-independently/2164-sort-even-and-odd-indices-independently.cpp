class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        int evenIndex=0,oddIndex = odd.size()-1;
        
        while(evenIndex < even.size() && oddIndex>=0){
            ans.push_back(even[evenIndex]);
            evenIndex++;
            
            ans.push_back(odd[oddIndex]);
            oddIndex--;
        }
        if(evenIndex < even.size()){
            ans.push_back(even[evenIndex]);
            evenIndex++;
        }
        if(oddIndex>=0){
            ans.push_back(odd[oddIndex]);
            oddIndex--;
        }
        return ans;
    }
};