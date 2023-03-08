#include<bits/stdc++.h>
using namespace std;
//time O(n^2),O(E)
//space=O(n^2);
int main()
{
    /*int nodes=4;
    vector<vector<int>>list(nodes);
    list[0]={1};
     list[1]={0,1,2};
    
    list[2]={1,3};
    
    list[3]={1,2};
    


    
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<list[i].size();j++)
        {
            cout<<list[i][j]<<" ";
        }
        cout<<"\n";
    }
    */


   /*
   0----1
       /  \
      2----3
  0-->1=2
  1-->2=4
  3-->2=8
  2-->1=7
   */
   int nodes=4;
    vector<vector<int>>list(nodes);
    list[0]={1};
     list[1]={2};
    
    list[2]={};
    
    list[3]={1,2};
    


    
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<list[i].size();j++)
        {
            cout<<list[i][j]<<" ";
        }
        cout<<"\n";
    }
}