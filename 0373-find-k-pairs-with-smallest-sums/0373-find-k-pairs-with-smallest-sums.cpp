class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        // multimap<pair<int,int>, int>m;
        priority_queue<pair<int,pair<int,int>>>p;
        int i,j;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                int sum = nums1[i] + nums2[j];
                if(p.size()<k){
                    p.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum<p.top().first){
                    p.pop();
                    p.push({sum,{nums1[i],nums2[j]}});
                }
                else if(sum>p.top().first){
                    break;
                }
            }
        }
        vector<vector<int>>ans;
        int count=0;
        while(p.size()!=0){
            ans.push_back({p.top().second.first, p.top().second.second});
            p.pop();
        }
        return ans;
    }
};