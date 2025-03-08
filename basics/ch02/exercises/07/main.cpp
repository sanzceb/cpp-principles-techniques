// Prompt the user to enter three string values, and output the values in
// alphabetical sequence separated by commas

#include "../../PPPheaders.h"

int main()
{
      cout << "Enter three words: ";
      string first;
      string second;
      string third;
      cin >> first >> second >> third;

      cout << "The word sequence is: ";
      if (first < second)
	    if (second < third)
		  cout << first << ", " << second << ", " << third << '\n';
	    else if (first < third)
		  cout << first << ", " << third << ", " << second << '\n';
	    else
		  cout << third << ", " << first << ", " << second << '\n';
      else if (second < third) 
	    if (first < third)
		  cout << second << ", " << first << ", " << third << '\n';
	    else
		  cout << second << ", " << third << ", " << first << '\n';
      else
	    cout << third << ", " << second << ", " << first << '\n';
	
}

