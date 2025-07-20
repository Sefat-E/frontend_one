// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


bool vis[1005][1005];
 int max_fish = 0;
int m, n;
int sr,sc;
int dr,dc;
int cnt;

vector<pair<int,int>> direction = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int x , int y){
    if (x <0 || x>=m || y<0|| y>=n ){
        return false;
    }
     else 
     return true;
}
int  dfs(int sr, int sc,vector<vector<int>>& grid){
    vis[sr][sc] = true;
    int sum =grid[sr][sc];
     sum += grid[sr][sc];
    for (int i = 0; i <4; i++)
    {
        int child_row = sr + direction[i].first;
        int child_col = sc + direction[i].second;
        if (valid(child_row,child_col) && vis[child_row][child_col] == false && grid[child_row][child_col] >0)
              
           dfs(child_row,child_col,grid);
           
    }
    return sum;
}

int main() {
    
    cin >> m >> n;
   vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

          
      
      memset(vis,false, sizeof(vis));
     
      for (int i = 0; i<m; i++){
         for (int j = 0; j<n; j++){
              if(grid[i][j] >0 && !vis[i][j]){
                  
                      cnt = 0;
                      dfs(i,j,grid);
                      
                          max_fish = max(max_fish,cnt);
                      
                  
              }
          }
       }
       cout << max_fish << endl;
    return 0;
}