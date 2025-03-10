// This program reads a string from input and then, for each character
// read, prints out the character and its integer value on a line

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{
      string input;
      cout << "Write a single string (no whitespaces): ";
      cin >> input;
      for(char c : input)
	    cout << c << '\t' << int(c) << '\n';
}

