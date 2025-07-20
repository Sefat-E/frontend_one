#include <bits/stdc++.h>
using namespace std;
int n,m;
char maze[1005][1005];
int si,sj;
int di,dj;
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];

vector<pair<int,int>> d = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>>q;
    q.push({si,sj});
    vis[si][sj] =true;
    level[si][sj] = 0;
    while(!q.empty()){
        pair<int, int>par = q.front();
        q.pop();
        int par_r = par.first;
        int par_c = par.second;
        for(int i = 0; i<4 ; i++){
            int c_r = par_r + d[i].first;
            int c_c = par_c + d[i].second;
            if (valid(c_r,c_c) && !vis[c_r][c_c]&& (maze[c_r][c_c]=='.' || maze[c_r][c_c]=='R'|| maze[c_r][c_c]=='D'))
            {
                q.push({c_r,c_c});
                vis[c_r][c_c] =true;
                level[c_r][c_c] = level[par_r][par_c]+1;
                parent[c_r][c_c] = {par_r, par_c};
            }
        }
    }
}

int main()
{
    cin>>n>>m;
   for(int i = 0; i<n; i++){
       for(int j = 0; j<m; j++){
           cin>>maze[i][j];
        if (maze[i][j] == 'R')
        {  
            si = i;
            sj = j;
        }
        if (maze[i][j] == 'D')
        {
            di = i;
            dj = j;
        }
       }
   }
   memset(vis,false, sizeof(vis));
   memset(level, -1, sizeof(level));
   memset(parent, -1,sizeof(parent));
   
   bfs(si, sj);
   
   int a = di, b = dj;
    if (level[di][dj] == -1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << maze[i][j];
            }
            cout << endl;
        }
       return 0; 
    }
   while (!(a == si && b == sj)) {
    pair<int, int> par = parent[a][b];
    a = par.first;
    b = par.second;

    if (maze[a][b] != 'R' && maze[a][b] != 'D') {
        maze[a][b] = 'X';
    }
}
   for(int i = 0; i<n; i++)
   {
       for(int j = 0; j<m; j++)
       {
           cout<< maze[i][j];
           
       }
       
     cout << endl;
    }

    return 0;
}
   
   
   
   
//    https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/maze-19