// This program converts yen or kroner or pounds to dollards

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{ 
      constexpr double y_to_usd = 0.0068;
      constexpr double k_to_usd = 0.092;
      constexpr double p_to_usd = 1.29;
      char unit = 0;
      double amount = 1; // amount in yens, kroners or pounds

      cout << "Please enter an amount followed by"
	    << " a currency unit (y or k or p):\n";
      cin >> amount >> unit;

      if (unit == 'y')
	    cout << amount << "y == " << amount * y_to_usd << "usd\n";
      else if (unit == 'k')
	    cout << amount << "k == " << amount * k_to_usd << "usd\n";
      else if (unit == 'p')
	    cout << amount << "p == " << amount * p_to_usd << "usd\n";
      else
	    cout << "Sorry, I don't know a currency called \""
		  << unit << "\"\n";
      return 0;
}

