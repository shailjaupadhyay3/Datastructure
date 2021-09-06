//Write a program to check whether a year entered by a user is Leap year or not.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Year: ";
    cin>>a;
    if((a%4==0) && (a%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(a%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
    cout<<endl;
    return 0;
}
