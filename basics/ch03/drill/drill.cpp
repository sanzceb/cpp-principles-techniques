// A program that consists of a while-loop that reads two integers each time
// then prints which is the smaller and which is the larger value. Otherwise
// it prints that both numbers are equal

#include "../PPPheaders.h"

int main()
{
      cout << "Enter a sequence of numbers in pairs and then enter \"|\": ";
      vector<int> temps;
      int temp;
      while (cin >> temp) {
	    temps.push_back(temp);
	    int i = temps.size();
	    if (i % 2 == 0) // test we print every two iterations
		  if (temps[i-2]< temps[i-1])
			cout << "The smaller value is: " << temps[i-2] << '\n'
			      << "The larger value is: " << temps[i-1] << '\n';
		  else if (temps[i-2] > temps[i-1])
			cout << "The smaller value is: " << temps[i-1] << '\n'
			      << "The larger value is: " << temps[i-2] << '\n';
		  else
			cout << "The numbers are equal\n";
			
      }
}
