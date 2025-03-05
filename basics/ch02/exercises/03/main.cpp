// Determines the smaller, larger, sum, difference and product of two values

#include "../../PPPheaders.h"

int main()
{
      cout << "Enter two integer values: ";
      int val1;
      int val2;
      cin >> val1 >> val2;

      if (val1 < val2)
	    cout << "The first value is smaller";
      else if (val2 < val1)
	    cout << "The second value is smaller";
      cout << "\nThe sum is: " << val1+val2
	    << "\nThe difference is: " << val1 - val2
	    << "\nThe product is: " << val1 * val2
	    << '\n';
}

