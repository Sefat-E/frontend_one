// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cin >> v>>e;
    int mat[v][v];
    memset(mat,0,sizeof(mat));
    for(int i =0; i<v;i++){
        for(int j =0; j<v;j++){
             if(i==j)
                mat[i][j] = 1;
    }
    }
    
    for (int i =0; i<e; i++){
         int a,b;
         cin >> a>> b;
        mat[a][b] =1;
    }
    
    int q;
    cin >> q;
    while (q--){
    int c,d;
    cin >> c >>d;
    
            if (mat[c][d] ==1){
                cout <<"YES"<< endl;
            }
            else {
                cout <<"NO"<< endl;
            }
         
        
       
    }
    
    
    return 0;
    
}
// https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/connected-or-not-1-1