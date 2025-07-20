#include <bits/stdc++.h>
using namespace std;
class student
{
    public :
    string name;
    int cls;
    char section;
    int id;
    
};

int main() {
    int n;
    cin >> n;
    student a[n];
    for( int i = 0; i <n; i++){
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
     int start = 0, end = n - 1;
    while (start < end) {
       
        char temp = a[start].section;
        a[start].section = a[end].section;
        a[end].section = temp;
        start++;
        end--;
    }

    for( int i = 0; i <n; i++){
    cout << a[i].name<<" " << a[i].cls << " "<<a[i].section <<" "<< a[i].id<<endl;
}
    return 0;
}
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/reverse-it-8-2