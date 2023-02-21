#include<bits/stdc++.h>
using namespace std;
class person{
public:

    string name;
    person *father,*mother;
    person()
    {
        father=NULL;
        mother=NULL;

    }
    person(string name,string fname,string mname)
    {
        this->name=name;
        father=new person;
        father->name=fname;
        mother=new person;
        mother->name=mname;
    }
    void print()
    {
        cout<<"name-> "<<name<<"\n";
          cout<<"father-> "<<father->name<<"\n";
          cout<<"mother-> "<<mother->name<<"\n";

    }
    ~person()
    {
        cout<<"cc"<<"\n";
        if(father!=NULL)
        delete father;
        if(mother!=NULL)
        delete mother;
    }


};
int main()
{
    person p("ssss","kkkk","llll");
    p.print();

}

