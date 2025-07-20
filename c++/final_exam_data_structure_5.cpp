#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
bool operator()(Student a, Student b){
    if (a.marks == b.marks) {
          if(a.roll > b.roll){
          return true;
              
          }
        }
     return a.marks < b.marks; 
        
        
}
    
};


void student_marks(priority_queue<Student, vector<Student>, cmp>& max_current) {
    if (max_current.empty()) {
        cout << "Empty" << endl;
        return;
    }
    Student maxStudent = max_current.top();
    cout << maxStudent.name << " " << maxStudent.roll << " " << maxStudent.marks << endl;
}

int main() {
    priority_queue<Student, vector<Student>, cmp> max_current;
    int n;
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        max_current.push(obj);
    }

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        if (x == 0) {
           
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            max_current.push(obj);
            student_marks(max_current); 
        } 
        else if (x == 1) {
            
            student_marks(max_current);
        }
        else if (x == 2) {
           
              if (!max_current.empty()){
                max_current.pop();
              }
             student_marks(max_current);        
            }
        
    }

    return 0;
}

// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/get-current-max/submissions/code/1387767014