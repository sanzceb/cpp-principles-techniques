
// Convert spelled-out numbers such as "zero" and "two"
// to digits between 0 to 4

#include "../../PPPheaders.h"

int main()
{
      cout << "Enter a spelled-out numbers between \"zero\" and \"four\"\n";
      string number;
      cin >> number;
      if (number == "zero")
	    cout << "The digit is 0\n";
      else if (number == "one")
	    cout << "The digit is 1\n";
      else if (number == "two")
	    cout << "The digit is 2\n";
      else if (number == "three")
	    cout << "The digit is 3\n";
      else if (number == "four")
	    cout << "The digit is 4\n";
      else
	    cout << "Not a number I know \n";
}

