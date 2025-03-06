// This program writes a table of the alphabet characters with their
// corresponding char values

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{
      // Print a table of the characeters 'a'-'z'
      int i = 0;
      while (i < 26) { 
	    cout <<  char('a' + i) << '\t' << 'a' + i << '\n';
	    ++i;	
      }
}

