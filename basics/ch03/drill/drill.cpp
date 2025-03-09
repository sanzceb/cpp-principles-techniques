// A program that reads a sequence of values and units
// and keeps track of the biggest and the smallest value at any given time

#include "../PPPheaders.h"

double value_as_m (double value, string unit)
      // Search the appropriate factor to convert into meters
      // from other units. If the unit argument is not found
      // no conversion is made and -1 is returned
{
      vector<string> units = {"m", "in", "ft", "cm"};
      vector<double> factors = {1, 0.0254, 0.3048, 0.01}; // conversion factors
      for (int i=0;i < units.size(); ++i)
	    if (units[i] == unit)
		  return factors[i] * value;
      return -1;
}

int main()
{
      // The first number is always the biggest
      double temp;
      string unit; 
      cout << "Enter a sequence of numbers in pairs and then enter \"|\": ";
      cin >> temp >> unit; 
      cout << temp << unit << " the biggest so far" << '\n'; 

      double min_m = value_as_m(temp, unit); // track the smallest value
      double max_m = min_m; // track the biggest value
      while (cin >> temp >> unit) {
	    double temp_m = value_as_m(temp, unit);
	    if (temp_m == -1) {
		  cout << "Sorry, I do not know a unit called "
			<< unit << '\n';
	    } else if (temp_m < min_m) {
		  min_m = temp_m;
		  cout << temp << unit << " the smallest so far" << '\n';
	    } else if (temp_m > max_m) {
		  max_m = temp_m;
		  cout << temp << unit << " the biggest so far" << '\n';
	    } else
		  cout << temp << unit << '\n';
      }
}

