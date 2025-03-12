// This program is a numbers guessing game. The user thinks of a number
// between 1 and 100 and the computer must guess it in no more than
// seven questions

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{
      int min = 0; // The smallest guess
      int max = 100; // The 
      int guess = 50;

      cout << "Think of a number between 1 and 100:\n";
      while (min != max){ // Is there more than one option?
            char answer;
            cout << "Is your number less than " << guess << "? (y/n)";
            cin >> answer;
            if (answer == 'y')
                  max = guess - 1;
            else if (answer == 'n')
                  min = guess;
            // Integer division with ceiling ensures
            // that when only two options are remaining
            // the program can discriminate between both.
            guess = (min + max + 1) / 2; 
      }
      
      cout << "The number you were thinking is: " << guess << '\n';
}

