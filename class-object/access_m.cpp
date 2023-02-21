#include<bits/stdc++.h>
using namespace std;
class student{
private:
    string name;
public:
    int age;

   /* void set_info(string s,int a)
    {
        name=s;
        age=a;
    }*/
    void print()
    {
        cout<<name<<"\n";
        cout<<age<<"\n";

    }

};
class user{
protected:
    string name;//access korte parbena cause eta private ache
    int id;

};
class Admin: user{
private:
int age;

public:
    void set_info(string s,int a,int b)
    {
        name=s;
        id=a;
        age=b;
    }
    void print()
    {
        cout<<name<<"\n";
        cout<<id<<"\n";
        cout<<age<<"\n";

    }

};
int main()
{
   /* student p;
    //p.set_info("sss",20);

    p.name="djgfdgk";//cannot access private a.m
    p.age=20;
    p.print();*/

    Admin a;
    a.set_info("nnnnn",29,20);
    a.print();

}
