//
//  main.cpp
//  Chicago Bulls championship
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

   int year;
   
   cin >> year;
   
   if (year == 1991) {
      cout << "First championship" << endl;
   }
   else if (year == 1992) {
      cout << "Second championship" << endl;
   }
   else if (year == 1993) {
      cout << "Third championship" << endl;
   }
   else if (year == 1996) {
      cout << "Fourth championship" << endl;
   }
   else if (year == 1997) {
      cout << "Fifth championship" << endl;
   }
   else if (year == 1998) {
      cout << "Sixth championship" << endl;
   }
   else {
      cout << "No championship" << endl;
   }

   return 0;
}
