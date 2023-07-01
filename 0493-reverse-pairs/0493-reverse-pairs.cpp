class Solution {
public:
    int merge(vector<int>& nums, int start, int end){
        int mid = start + (end-start)/2;
        int len1 = mid-start+1;
        int len2 = end-mid;
        vector<int>first(len1);
        vector<int>second(len2);
        int mainArrayIndex=start;
        int i;
        for(i=0;i<len1;i++){
            first[i] = nums[mainArrayIndex++];
        }
        mainArrayIndex=mid+1;
        for(i=0;i<len2;i++){
            second[i] = nums[mainArrayIndex++];
        }
        
        int count=0;
        int j=0;
        for(i=0;i<len1;i++){
            while(j<len2 && first[i]>( 2LL *second[j])){
                j++;
            }
            count = count + j;
            
        }
        int index1=0;
        int index2=0;
        mainArrayIndex=start;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[mainArrayIndex++] = first[index1++];
            }
            else{
                nums[mainArrayIndex++] = second[index2++];
            }
        }
        while(index1 < len1){
            nums[mainArrayIndex++] = first[index1++];
        }
        while(index2 < len2){
            nums[mainArrayIndex++] = second[index2++];
        }
        return count;
        
    }
    
    int mergeSort(vector<int>& nums, int start, int end){
        if(start>=end){
            return 0;
        }
        int ans=0;
        int mid = start + (end-start)/2;
        ans = ans + mergeSort(nums,start,mid);
        ans = ans + mergeSort(nums,mid+1,end);
        ans = ans + merge(nums,start,end);
        return ans;
    }
    
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
        
    }
};