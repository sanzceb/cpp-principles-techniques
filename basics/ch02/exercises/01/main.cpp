/*
 * Converts from mile to kilometers
 * A mile is 1.609 kilometers
 */

#include "../../PPPheaders.h"

int main ()
{
      cout << "Enter the distance in miles: ";
      double distance;
      constexpr double mile_to_km = 1.609;

      if (cin >> distance)
	    cout << "The distance in km is: "
		  << distance * mile_to_km << '\n';
      else
	    simple_error("That input is not a valid distance!");
}
