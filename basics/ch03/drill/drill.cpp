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
      constexpr int max_value = 100; // Maximum allowed
      constexpr int min_value = 0;	 // Minimum allowed
      vector <double> values;
      double min_m = max_value; // track the minimum value
      double max_m = min_value; // track the biggest value
      double sum = 0.0;
      int count = 0; // track the number of values

      cout << "Enter a sequence of numbers between (" << min_value
	    << " and " << max_value << ") in pairs and then enter \"|\": ";
      double temp;
      string unit;
      while (cin >> temp >> unit) {
	    double temp_m = value_as_m(temp, unit);
	    if (temp_m == -1)
		  cout << "Sorry, I do not know a unit called "
			<< unit << '\n';
	    else {
		  if (temp_m > max_m) {
			max_m = temp_m;
			cout << temp << unit << " the biggest so far" << '\n';
		  } else if (temp_m < min_m) {
			min_m = temp_m;
			cout << temp << unit << " the smallest so far" << '\n';
		  } else
			cout << temp << unit << '\n';

		  values.push_back(temp_m);
		  sum += temp_m;
		  ++count;
	    }
      }

      cout << '\n' << "The biggest value is: " <<  max_m << "m\n";
      cout << "The smallest value is: " <<  min_m << "m\n";

      cout << "The values entered are:" << '\n';
      ranges::sort(values);
      for (double v : values)
	    cout << v << "m ";
      cout << '\n' << "The number of values is: " << count << '\n';
      cout << "The sum of values is: " << sum << "m\n";
}

