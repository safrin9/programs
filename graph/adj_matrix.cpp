#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int nodes=4;
    int mat[nodes][nodes]={};
    mat[0][1]=1;
    mat[1][0]=1;
    mat[1][2]=1;
    mat[2][1]=1;
    mat[2][3]=1;
    mat[3][2]=1;
    mat[3][1]=1;
    mat[1][3]=1;
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    //unweighted;
    */
   int nodes=4;
    int mat[nodes][nodes]={};
    mat[0][1]=2;
   // mat[1][0]=2;
    mat[1][2]=4;
   // mat[2][1]=4;
    mat[2][3]=7;
    //mat[3][2]=7;
    mat[3][1]=9;
    //mat[1][3]=9;
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    //weighted = directed;
    
}