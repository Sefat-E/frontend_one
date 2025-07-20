#include <bits/stdc++.h>
using namespace std;
class Student {
  public :
  string name ;
  int roll;
  
  Student(string name, int roll){
      this->name = name;
      this->roll = roll;
  }
};
class comparator
{
public:
    bool operator()(Student a, Student b)
    {
       if(a.name == b.name)
       {
           if(a.roll < b.roll){
            return true;
           }
            else
             return false;
          } 
            
        else
        {
            if (a.name > b.name)
            {
            return true;  
            }
            else
             return false;
        }
     }
   
};
int main ()
{
    priority_queue<Student, vector<Student>, comparator>pq;
    int n;
    cin >> n;
 for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int roll;
        cin >> roll ;

        pq.push(Student(name, roll));
    }


while (!pq.empty())
{
    Student pr = pq.top();
    cout<< pr.name <<" " << pr.roll << " "<<endl;
    pq.pop();
}

return 0;
}