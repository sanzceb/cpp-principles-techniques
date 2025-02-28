#include "PPPheaders.h"

// Get the age in years and write it out in months
//

int main() // read name and age
{
	cout << "Please enter your first name and age\n";
	string first_name = "???"; // "???" indicates we don't know the name
	double age = -1; // integer variable (-1 means "don't know the age")
	cin >> first_name >> age;
	cout << "Hello, " << first_name << " (age " << (age * 12) << " months)\n";
}

