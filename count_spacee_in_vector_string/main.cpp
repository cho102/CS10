//
//  main.cpp
//  count spaces in vector string
//
//  Created by Cindy Ho on 11/26/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int CountSpaces (vector<string> Vec)
{
  int count = 0;
  string tester;

  for (unsigned int i = 0; i < Vec.size(); ++i)
  {
    tester = Vec.at(i);
    for (unsigned int j = 0; j < tester.size(); ++j)
    {
      if (tester.at(j) == ' ')
      {
        ++count;
      }
    }
  }

  return count;
}

int main() {
  int size;
  int indexInput = 0;

  cout << "Enter vector size: " ;
  cin >> size;

  vector<string> list(size);

  while (indexInput != size)
  {
    cout << "Enter string: ";
    getline(cin, list.at(indexInput));
    ++indexInput;
  }

  cout << "The total spaces in the vector of strings is: " ;
  cout << CountSpaces(list) << endl;

  return 0;
}
