
#include "PPPheaders.h"

int main () 
{
      int number_of_words = 0;
      string previous; // previous word; initalized to ""
      string current; // current word;
      // the condition will succeed as long as there are characters to read
      while (cin >> current) {
	    ++number_of_words;
	    if (previous == current) // check if the word is the same as last
		  cout << "word number " << number_of_words
		      << " repeated:" << current << '\n';
	    previous = current;
      }
}

