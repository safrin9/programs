#include<bits/stdc++.h>
using namespace std;
//time O(n^2),O(E)
//space=O(n^2);
/*0----1
       /  \
      2----3

0--1
1--2
2--3
1--3
*/
int main()
{
    int nodes=4;
   vector< vector<int> >edge;//={{0,1},{1,2},{1,3},{2,3}};
    edge.push_back({0,1});
     edge.push_back({1,2});
 edge.push_back({1,3});
edge.push_back({2,3});

  for(int i=0;i<edge.size();i++)
  {
     cout<<edge[i][0]<<" "<<edge[i][1]<<"\n";
  }
}