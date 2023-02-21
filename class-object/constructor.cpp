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

};

int main()
{
   Student s("Sumaiya",104,20,"abbu","ammu");
   s.print_info();
    Student s2("dhsfjksd",34,5);
    s2.print_info();
    Student s3;

}

