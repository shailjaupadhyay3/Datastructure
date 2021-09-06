// Write a program to check whether a number is Prime or Not


#include <iostream>
using namespace std;

int main()
{
    int n, i, a= 0;
    
    cout << "Enter any number n: "; cin>>n;
    
   for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           a++;
        }
    }
    if (a == 2)
    {
       cout << "It is a Prime number" << endl;
    }
    else
    {
         cout << "It is not a Prime number" << endl; 
    }
    return 0;    
}

