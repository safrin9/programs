#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main()
{
    cpp_int n("");
    cin>>n;
    int so=0;
    int se=0;
    string s=to_string(n);
    for(int i=s.size()-1;i>=0;i-=2)
    {
        so=so+s[i]-'0';
    }
    for(int i=s.size()-2;i>=0;i-=2)
    {
        se=se+s[i]-'0';
    }
    int sum=abs(so-se);
    if(sum%11==0)
    {
        cout<<"YES"<<"\n";
    }
    else 
    {
        cout<<"NO"<<"\n";
    }
    

}