
// This program writes a table of the alphabet characters with their
// corresponding char values using a for loop

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{
      // Print a table of the characeters 'a'-'z'
      for (int i = 0; i < 26; ++i) { 
	    cout << char('a' + i)
		 << '\t' << 'a' + i
		 << '\t' << char('A' + i) 
		 << '\t' << 'A' + i << '\n';
      }
}

