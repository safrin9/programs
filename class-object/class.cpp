#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
 void print_info()
 {
    cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
 }

};

class Rectangle{
public:

Student s;
int h,w;
int area()
{
    return h*w;
}
int perimeter()
{
    return 2*(h*w);
}
};

int main()
{
/*
Student s1;
s1.name="Sumaiya";
s1.std_id=104;
s1.age=20;
s1.fathers_name="Mir Abu Sayeed";
s1.mothers_name="Ummeda Begum";

s1.print_info();
*/
Rectangle r;
r.h=4;
r.w=6;
r.s.name="Sumaiya";
r.s.std_id=104;
r.s.age=20;
r.s.fathers_name="Mir Abu Sayeed";
r.s.mothers_name="Ummeda Begum";
r.s.print_info();
cout<<r.area()<<"\n";
cout<<r.perimeter()<<"\n";




}
