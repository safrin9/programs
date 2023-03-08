#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
 
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        vector<int>a;
        if(x==1)
        {
            int s;
            cin>>s;
            a.push_back(s);

      

        }

        else if(x==2)
        {
            int n=a.size();
            int m=a[0];
            for(int j=0;j<n;j++)
            {
                if(a[i]>m)
                {
                    m=a[i];
                }
            }
            
            cout<<m<<"\n";
            a.clear();
        }
    }
}