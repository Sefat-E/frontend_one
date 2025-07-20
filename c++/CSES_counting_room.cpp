#include <bits/stdc++.h>
using namespace std;

char room[1005][1005];
bool vis[1005][1005];
int n, m;
int sr,sc;
int dr,dc;

vector<pair<int,int>> direction = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int x , int y){
    if (x <0 || x>=n || y<0|| y>=m){
        return false;
    }
     else 
     return true;
}
void dfs(int sr, int sc){
    vis[sr][sc] = true;
    for (int i = 0; i <4; i++)
    {
        int child_row = sr + direction[i].first;
        int child_col = sc + direction[i].second;
        if (valid(child_row,child_col) && vis[child_row][child_col] == false && room[child_row][child_col] == '.')
         dfs(child_row,child_col);
    }
}

int main() {
    
    
    cin >> n>> m;
    for (int i = 0; i<n; i++)
      for (int j = 0; j<m; j++){
           cin>> room[i][j];
          
      }
      memset(vis,false, sizeof(vis));
      int cnt = 0;
      for (int i = 0; i<n; i++){
         for (int j = 0; j<m; j++){
              if(room[i][j] == '.'){
                  if (!vis[i][j])
                  {
                      cnt ++;
                      dfs(i,j);
                  }
              }
          }
       }
       cout << cnt << endl;
    return 0;
}
// https://cses.fi/problemset/task/1192/
// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/count-apartments/submissions/code/1388275871