//Write a program to find the largest number among three numbers entered by the user.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	
	cout << "Please enter the Three Different Number  = ";
	cin >>a>>b>>c;
	
	d=((a>b&&a>c) ? a:(b >c) ?b:c);
	
	cout << "\nLargest number among three is = " <<d;
	
 	return 0;
}