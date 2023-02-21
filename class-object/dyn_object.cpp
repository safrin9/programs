#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student(string name,int age,int id)
    {
        this->name=name;
        this->age=age;
        std_id=id;
    }
 void print_info()
 {
    cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
 }

};
int main()
{
        Student *s=new Student("A",23,20);
        s->print_info();
}
