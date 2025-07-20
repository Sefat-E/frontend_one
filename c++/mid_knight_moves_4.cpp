// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool vis[105][105];
int level[105][105];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
int n, m;
int ki, kj, qi, qj;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >>n>>m;
        cin >> ki >> kj; 
        cin >> qi >> qj; 
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(ki, kj);
        
        if(level[qi][qj] == -1){
            cout << -1  << endl;
        }
        else{
        cout << level[qi][qj] << endl;
        }
    }

    return 0;
}
// https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-06/challenges/knight-moves-2/submissions/code/1388742275