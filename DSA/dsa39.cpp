#include<iostream>
#include<vector>
#include<bits/stdc++.h>
class Solution {
  public:
  bool safe(int newx,int newy,vector<vector<int>> ,string path,int n){
      if((newx>=0 && newx<< n-1) &&(newy>=0 && newx<0)&& (visit[newx][newy] == 1)){
        return true;
      }
      else{
          return false;
      }
  }
    void solve(vector<vector<int>>mat ,int n,vector<string> &ans,int x,int y,vector<vector<int> visit,string path){
    if(x == n -1, y == n - 1){
        ans.push_back(path);
        return;
    }
    visit [x][y] = 1;
    // D/L/R/U
    
    // down
    int newx = x+1;
    int newy = y;
    if(safe(newx,newy,visit,path,n)) {
        path.push_back('D');
        solve(mat,n,ans,x,y,visit,path);
        path.pop_back();
    } 
    // left
    int newx = x;
    int newy = y-1;
    if(safe(newx,newy,visit,path,n)) {
        path.push_back('L');
        solve(mat,n,ans,x,y,visit,path);
        path.pop_back();
    }
    // right
    int newx = x;
    int newy = y+1;
    if(safe(newx,newy,visit,path,n)) {
        path.push_back('R');
        solve(mat,n,ans,x,y,visit,path);
        path.pop_back();
    }
    // up
    int newx = x-1;
    int newy = y;
    if(safe(newx,newy,visit,path,n)) {
        path.push_back('U');
        solve(mat,n,ans,x,y,visit,path);
        path.pop_back();
    }
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        vector<string> ans;
        if(mat[0],[0] == 0){
            return ans;
        }
        int x = 0;
        int y = 0;
        
        vector<vector<int>> visit = mat;
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                visit[i][j] = 0;
            }
        }
        string path = "";
        solve(mat,n,ans,x,y,visit,path);
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
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends