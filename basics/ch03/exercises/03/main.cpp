// This program fixes the program 3.6.3 to compute the median

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
      // Compute the median temperatures
{
      vector <double> temps;
      for (double temp; cin >> temp;)
	    temps.push_back(temp);

      // Compute the median temperature
      ranges::sort(temps);
      double median = 0.0;
      if (temps.size() % 2)
	    median  = temps[temps.size() / 2]; 
      else // For odd sizes the median is computed through interpolation
	    median = (temps[temps.size() / 2 - 1]
		  + temps[temps.size() / 2])
		  / 2;
      cout << "Median temperature: " << median << '\n';
}

