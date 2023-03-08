#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        char now=s[i];
        if(now=='{')
        {
            st.push(now);
            c++;

        }
        else
        {
            if(st.empty())
            {
                cout<<"invalid\n";
                return 0;

            }
         
            else if(now=='}'&&st.top()=='{')
            {
                st.pop();
                c++;

            }
          
            else
            {
                cout<<"0\n";
                return 0;

            }
        }

    }
    cout<<c;


}
