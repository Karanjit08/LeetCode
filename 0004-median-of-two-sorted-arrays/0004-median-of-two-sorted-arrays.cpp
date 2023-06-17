class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        int i,j;
        int n1 = nums1.size();
        int n2 = nums2.size();
        double value;
        for(i=0; i<n1;i++)
        {
            merge.push_back(nums1[i]);
        }
        for(i=0;i<n2;i++)
        {
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        int size = merge.size();
        if(size%2!=0)
        {
            int index = size/2;
            value = merge[index];
        }
        else{
            int secondIndex = size/2;
            int firstIndex = secondIndex-1;
            double v1 = merge[firstIndex];
            double v2 = merge[secondIndex];
            value = (v1+v2)/2;
        }
        return value;
    }
};