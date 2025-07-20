#include <bits/stdc++.h>
using namespace std;
int main() 
{   
   int n;
   cin >> n;
   int* a = new int[n];
     for (int i = 0; i<n; i++){
      cin >>a[i];
    }
    int m;
  cin >> m;
   int* x = new int[m];
   for (int i = 0; i<n; i++){
      x[i] = a[i];
    }
    delete[] a;
    for (int i = n; i< m; i++){
      cin >> x[i];
    }
   
    for (int i = 0; i<m; i++){
      cout << x[i] << " ";
    }
    cout << endl;
    delete[] x;
    return 0;
}