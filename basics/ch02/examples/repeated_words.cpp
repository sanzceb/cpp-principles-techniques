
#include "PPPheaders.h"

int main () 
{
      string previous; // previous word; initalized to ""
      string current; // current word;
      // the condition will succeed as long as there are characters to read
      while (cin >> current) {
	    if (previous == current) // check if the word is the same as last
		  cout << "repeated word:" << current << '\n';
	    previous = current;
      }
}

