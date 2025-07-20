#include <bits/stdc++.h>
using namespace std;
class Student
{
    public :
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
    int sum;
};
bool cmp(Student l, Student r)
{
    if(l.eng > r.eng){
        return true;
    }
    else if (l.eng < r.eng)
    {
        return false;
    }
    else
    {
       if(l.math > r.math)
       {
           return true;
       }
       else if (l.math < r.math)
       {
            return false;
       }
       else{
           if (l.id < r.id){
               return true;
           }
           else{
               return false;
           }
       }
    }
}

int main() {
    int n;
    cin >> n;
    Student a[n];
    for( int i = 0; i <n; i++){
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }
    // for( int i = 0; i <n; i++){
    // a[i].sum = a[i].math + a[i].eng;
    // }
    sort(a,a+n,cmp);
    for( int i = 0; i <n; i++){
  
    cout << a[i].name<<" " << a[i].cls << " "<<a[i].section <<" "<< a[i].id<<" "<< a[i].math<<" " <<a[i].eng<< endl;
}
    return 0;
}
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/sort-it-again