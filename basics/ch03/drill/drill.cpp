// A program that consists of a while-loop that reads two integers each time
// then prints which is the smaller and which is the larger value

#include "../PPPheaders.h"

int main()
{
      cout << "Enter a sequence of numbers in pairs and then enter \"|\": ";
      vector<int> temps;
      int temp;
      while (cin >> temp) {
	    temps.push_back(temp);
	    int i = temps.size();
	    if (i % 2 == 0)
		  if (temps[i-2]< temps[i-1])
			cout << "The smaller value is: " << temps[i-2] << '\n'
			      << "The larger value is: " << temps[i-1] << '\n';
		  else
			cout << "The smaller value is: " << temps[i-1] << '\n'
			      << "The larger value is: " << temps[i-2] << '\n';
			
      }
}
