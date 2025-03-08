// A program that reads a sequence of doubles and keeps track of the
// biggest and the smallest value at any given time

#include "../PPPheaders.h"

int main()
{
      double min; // Keep track of the smallest value
      double max; // Keep track of the biggest value at each time
      double temp;
      cout << "Enter a sequence of numbers in pairs and then enter \"|\": ";
      cin >> temp; // The first number is always the biggest
      cout << temp << " the biggest so far" << '\n'; 
      min = temp;
      max = temp; 
      while (cin >> temp) 
	    if (temp < min) {
		  min = temp;
		  cout << temp << " the smallest so far" << '\n';
	    } else if (temp > max) {
		  max = temp;
		  cout << temp << " the biggest so far" << '\n';
	    } else
		  cout << temp << '\n';
}

