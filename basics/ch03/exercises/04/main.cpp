// This program stores from the user input the distances between two cities

#include "../../PPPheaders.h" // For compilers without good module support

int main() 
      // Compute the distances between two cities along a given route
{
      cout << "Input the distances of each route between two cities: ";
      vector <double> dists;
      double sum = 0;
      for (double temp; cin >> temp;sum += temp)
      	    dists.push_back(temp);

      if (dists.size() == 0)
            simple_error("I could not read any distance.");
      ranges::sort(dists);
      cout << "The smallest distance is: " << dists[0] << '\n';
      cout << "The greatest distance is: " << dists[dists.size()-1] << '\n'; 
      cout << "The sum of the distances is: " << sum << '\n';
      cout << "The mean distance is: " << sum/dists.size() << '\n';
}

