//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(int x, int y,vector<vector<int>>& m, vector<vector<int>>& visited){
        
        if((x>=0 && x<m.size()) && (y>=0 && y<m.size()) && m[x][y]==1 && visited[x][y]==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, vector<vector<int>>& visited, string path, int x, int y){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        //DOWN
        int newX = x+1;
        int newY = y;
        if(isSafe(newX,newY,m,visited)){
            path.push_back('D');
            solve(m,n,ans,visited,path,newX,newY);
            path.pop_back();
        }
        
        //UP
        newX = x-1;
        newY = y;
        if(isSafe(newX,newY,m,visited)){
            path.push_back('U');
            solve(m,n,ans,visited,path,newX,newY);
            path.pop_back();
        }
        
        //LEFT
        newX = x;
        newY = y-1;
        if(isSafe(newX,newY,m,visited)){
            path.push_back('L');
            solve(m,n,ans,visited,path,newX,newY);
            path.pop_back();
        }
        
        //RIGHT
        newX = x;
        newY = y+1;
        if(isSafe(newX,newY,m,visited)){
            path.push_back('R');
            solve(m,n,ans,visited,path,newX,newY);
            path.pop_back();
        }
        visited[x][y] = 0;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string path="";
        vector<vector<int>>visited = m;
        int srcX = 0;
        int srcY=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
            }
        }
        if(m[0][0]==0){
            return ans;
        }
        
        solve(m,n,ans,visited,path,srcX,srcY);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends