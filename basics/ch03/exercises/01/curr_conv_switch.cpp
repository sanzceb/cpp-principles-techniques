
// This program converts yen or kroner or pounds to dollards

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
{ 
      // usd exchanges
      constexpr double y_to_usd = 0.0068; // yen
      constexpr double k_to_usd = 0.092; // kroner
      constexpr double p_to_usd = 1.29; // pound
      constexpr double c_to_usd = 1.13; // swiss franc
      char currency = 0;
      double amount = 1; // amount in yens, kroners or pounds

      cout << "Please enter an amount followed by"
	    << " a currency (y or k or p):\n";
      cin >> amount >> currency;

      switch (currency) {
      case 'y':
	    cout << amount << "y == " << amount * y_to_usd << "usd\n";
	    break;
      case 'k':
	    cout << amount << "k == " << amount * k_to_usd << "usd\n";
	    break;
      case 'p':
	    cout << amount << "p == " << amount * p_to_usd << "usd\n";
	    break;
      case 'c':
	    cout << amount << "c == " << amount * c_to_usd << "usd\n";
	    break;
      default:
	    cout << "Sorry, I don't know a currency called \""
		  << currency << "\"\n";
	    break;
      }

      return 0;
}

