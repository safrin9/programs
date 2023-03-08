#include<bits/stdc++.h>
using namespace std;
int call(int x,int d1,int d2)
{
    double s=x*d1;
   
    return ceil(s/d2);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,d1,d2;
        cin>>x>>d1>>d2;
        int c=call(x,d1,d2);
        cout<<c<<"\n";
    }
}