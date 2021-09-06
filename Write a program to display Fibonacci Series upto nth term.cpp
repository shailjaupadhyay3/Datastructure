//Write a program to display Fibonacci Series upto nth term	

#include <iostream>
using namespace std;

int
main ()
{
  int a = 0, b = 1, c = 0, n;

  cout << "Enter the number of terms: ";
  cin >> n;

  cout << "Fibonacci Series: ";

  for (int i = 1; i <= n; ++i)
    {
    
      if (i == 1)
	{
	  cout << a << ", ";
	  continue;
	}
      if (i == 2)
	{
	  cout << b << ", ";
	  continue;
	}
      c = a + b;
      a = b;
      b = c;

      cout << c << ", ";
    }
  return 0;
}
