
#include "../PPPheaders.h"


int main() // read name and age
{
	cout << "Enter the name of the person you want to write to and the"
	      << "\nname of the friend you want to mention to:\n";
	string first_name = "???"; // "???" indicates we don't know the name
	string friend_name = "???";
	cin >> first_name >> friend_name;

	int age = 0;
	cout << "Enter the age of the recipient: ";
	cin >> age;
	if (age <= 0 || 110 <= age)
	      simple_error("you're kidding!");

	cout << "Dear " << first_name << ','
	      << "\nHow are you? I am fine. I miss you."
	      << "\nI am counting the days to go see you again."
	      << "\nHave you seen " << friend_name << " lately?"
	      << "\nI hear you just had a birthday and your are "
	      << age << " years old.";

	if (age < 12)
	      cout << "\nNext year you will be " << age + 1;
	else if (age == 17)
	      cout << "\nNext year you will be able to vote.";
	else if (age > 70)
	      cout << "\nAre you retired?";

	cout << "\nYours sincerely,"
	     << "\n\n\nSergio"; //The signature goes after two blank lines

}

