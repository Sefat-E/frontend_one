// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
char mat [1005][1005];
bool vis[1005][1005];
int n, m;
vector<pair<int,int>> d= {{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i, int j){
    if (i<0 || i>=n || j<0 || j>=m)
         return false;
        return true;
}
void dfs(int si, int sj)
  {
      vis[si][sj] = true;
    for(int i = 0; i<4; i++)
    {
         int ci = si+ d[i].first;
         int cj = sj + d[i].second;
         if (valid(ci,cj) && !vis[ci][cj] && mat[ci][cj] == '.')
             dfs(ci,cj);
    }
  }


int main() {
   
   cin >> n >> m;
   for (int i = 0; i < n; i++)
     for (int j = 0; j<m; j++)
        cin >>mat[i][j];
        
        int si, sj;
        cin >> si>>sj;
        int di, dj;
        cin >> di >> dj;
        dfs(si,sj);
        
        if (vis[di][dj] == false)
        {
            cout << "NO";
        
        }
        else
         {
             cout << "YES";
         }
        
        return 0;
}
        
        
