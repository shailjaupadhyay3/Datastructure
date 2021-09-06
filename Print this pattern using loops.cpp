// Write a program  Print this pattern using loops
//For n=5

#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(k=5;k>i;k--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


