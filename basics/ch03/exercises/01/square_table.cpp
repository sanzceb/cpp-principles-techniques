
// This program writes a table where the first column represents a
// sequence of numbers and the second the square value

#include "../../PPPheaders.h" // For compilers without good module support

int square(int x)
{
      int y = 0;
      for (int i = 0; i < x; ++i)
	    y += x;
      return y;
}

int main() 
{
      for (int i = 0; i < 100; ++i)  
	    cout << i << '\t' << square(i) << '\n';
}

