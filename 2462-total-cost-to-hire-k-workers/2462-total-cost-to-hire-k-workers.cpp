class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        priority_queue<int, vector<int>, greater<int>>pq1;
        priority_queue<int, vector<int>, greater<int>>pq2;
        int count=1;
        int i=0;
        int j=n-1;
        long long int totalCost=0;
        while(count<=k){
            while(pq1.size()<candidates && i<=j){
                pq1.push(costs[i]);
                i++;
            }
            while(pq2.size()<candidates && j>=i){
                pq2.push(costs[j]);
                j--;
            }
            long long int a = pq1.size()>0 ? pq1.top() : INT_MAX;
            long long int b = pq2.size()>0 ? pq2.top() : INT_MAX;
            if(a<=b){
                totalCost = totalCost + a;
                pq1.pop();
            }
            else{
                totalCost = totalCost + b;
                pq2.pop();
            }
            count++;
        }
        return totalCost;
    }
};