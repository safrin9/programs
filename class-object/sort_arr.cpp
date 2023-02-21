#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student(string name,int id,int age,string f_name,string m_name)
    {
    this->name=name;
    std_id=id;
    this->age=age;
    fathers_name=f_name;
    mothers_name=m_name;
    }
    Student(string name,int id,int a)
    {
        this->name=name;
        std_id=id;
        age=a;
    }
    Student()
    {
    }

 void print_info()
 {
    cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
 }
bool operator<(Student s)
{
    return std_id<s.std_id;
}

};
/*bool comp(Student a,Student b)
{
        return a.std_id<b.std_id;
}*/

int main()
{
  vector<Student>a;
  for(int i=0;i<10;i++)
  {
    a.push_back(Student("A",20-i,20));
  }
  for(int i=0;i<10;i++)
  {
    a[i].print_info();
  }
  cout<<"After"<<"\n";
 // sort(a.begin(),a.end(),comp);
 sort(a.begin(),a.end());
for(int i=0;i<10;i++)
  {
    a[i].print_info();
  }
}


