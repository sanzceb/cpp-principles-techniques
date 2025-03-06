#include "../PPPheaders.h"

int main()
{
      double d = 0;
      while (cin >> d) { // repeats as long as numbers are typed
	    int i = d; // narrowing cast: double into int
	    char c = i; // narrowing cast: an integer into a char
	    cout << "d==" << d // the original double
		 << " i==" << i // double converted to int
		 << " c==" << c // int value of char
		 << " char(" << c << ")\n"; // the char
      }
}

