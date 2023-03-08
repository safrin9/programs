#include<bits/stdc++.h>
using namespace std;
//time O(n^2),O(E)
//space=O(n^2);

 /*
   0----1
       /  \
      2----3
  0-->1=2
  1-->2=4
  3-->2=8
  2-->1=7
  
  pair<int,int>
  var_pair.first;
  var_pair.second;

  */
int main()
{
      int nodes=4;
   vector< vector<pair<int,int>>>list(nodes);
  //  list[0].push_back({1,2});
    list[0]={{1,2}};
     list[1]={{2,4}};
    
    list[2]={};
    
    list[3]={{2,8},{1,7}};
    


    
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<list[i].size();j++)
        {
            cout<<"("<<list[i][j].first<<","<<list[i][j].second<<")";
        }
        cout<<"\n";
    }

}