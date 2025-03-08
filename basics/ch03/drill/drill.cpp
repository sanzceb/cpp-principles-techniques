// A program that consists of a while-loop that reads two doubles each time
// then prints which is the smaller and which is the larger value if the
// difference is above the threshold. Otherwise, it prints that both numbers
// are equal

#include "../PPPheaders.h"

int main()
{
      cout << "Enter a sequence of numbers in pairs and then enter \"|\": ";
      int i = 0;
      double temp;
      double prev; // the previous number
      while (cin >> temp) {
	    if (i % 2) // is temp the second value?
		  if (temp < prev)
			if (prev - temp < 1.0/100)
			      cout << "The numbers are almost equal" << '\n';
			else
			      cout << "The smaller value is: " << temp << '\n'
				    << "The larger value is: " << prev << '\n';
		  else if (temp > prev)
			if (temp - prev < 1.0/100)
			      cout << "The numbers are almost equal" << '\n';
			else
			      cout << "The smaller value is: " << prev << '\n'
				    << "The larger value is: " << temp << '\n';
		  else
			cout << "The numbers are equal\n";
			
	    else
		  prev = temp;
	    ++i;
      }
}
