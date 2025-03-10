

// This program reads a string from input and then, for each character
// read, prints out the character and its integer value on a line

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{
      string input;
      cout << "Write a single string (no whitespaces): ";
      cin >> input;

      for(int i=0; i < input.size(); ++i)
	    cout << input[i] << '\t' << int(input[i]) << '\n';
}

