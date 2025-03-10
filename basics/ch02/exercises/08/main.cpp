// Test an integer value to determine if it is odd or even
// Using the modulo operator

#include "../../PPPheaders.h"

int main()
{
      cout << "Enter a number to determine if it is odd or even: ";
      int value;
      if (cin >> value)
	    if (value % 2)
		  cout << "The number " << value << " is odd.\n";
	    else
		  cout << "The number " << value << " is even.\n";
      else
	    cout << "Sorry, I don't recognize your input as a number\n";
}

