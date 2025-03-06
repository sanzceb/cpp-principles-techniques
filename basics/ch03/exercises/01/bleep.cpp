
// Program that "bleeps" out words that I don't like
// To run the program without range checking use
// ./program.out 2> /dev/null

#include "../../PPPheaders.h"

int main()
{
      vector<string> disliked ={"crab", "shrimp", "coke"};
      vector<string> words;
      for(string word; cin >> word;)
	    words.push_back(word);
      cout << "Number of words: " << words.size() << '\n';

      for (string word : words) {
	    for(int i = 0; i < disliked.size() && word != "BEEP"; ++i)
		  if (disliked[i] == word)
			word = "BEEP";
	    cout << word << '\n';
      }

}

