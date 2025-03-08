// A program that consists of a while-loop
// that reads two integers each time and prints them

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
		  cout << temps[i - 2] << '\t' << temps[i - 1] << '\n';
      }
}
