class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i;
        unordered_map<int,int>m;
        vector<int>temp;
        int sum=0;
        
        for(i=0;i<n;i++){
            nums[i] = nums[i]%k;
        }
        for(i=0;i<n;i++){
            sum = sum + nums[i];
            temp.push_back(sum);
        }
        for(i=0;i<temp.size();i++){
            temp[i] = temp[i]%k;
        }
        m[temp[0]]=0;
        for(i=1;i<temp.size();i++){
            if((temp[i]-k+k)%k==0){
                return true;
            }
            if(m.find((temp[i]-k+k)%k) !=m.end()){
                if(i-m[(temp[i]-k+k)%k]>1){
                    return true;
                }
            }
            else{
                m[(temp[i]-k+k)%k]=i;
            }
        }
        return false;
    }
};