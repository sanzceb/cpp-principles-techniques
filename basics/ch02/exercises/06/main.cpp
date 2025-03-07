
// Prompt the user to enter three integers, and outputs the values in
// numerical sequence separated by commas

#include "../../PPPheaders.h"

int main()
{
      cout << "Enter three integer values: ";
      int x;
      int y;
      int z;
      cin >> x >> y >> z;

      cout << "The numerical sequence is: ";
      if (x < y)
	    if (y < z)
		  cout << x << ", " << y << ", " << z << '\n';
	    else if (x < z)
		  cout << x << ", " << z << ", " << y << '\n';
	    else
		  cout << z << ", " << x << ", " << y << '\n';
      else if (y < z) 
	    if (x < z)
		  cout << y << ", " << x << ", " << z << '\n';
	    else
		  cout << y << ", " << z << ", " << x << '\n';
      else
	    cout << z << ", " << y << ", " << x << '\n';
	
}

