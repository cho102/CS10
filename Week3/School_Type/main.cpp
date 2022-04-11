//
//  main.cpp
//  School Type
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

   int schoolYear;
   
   cin >> schoolYear;
   
   if (schoolYear < 0 ) {
      cout << "Invalid" << endl;
   }
   else if ((schoolYear >= 0) && (schoolYear <=5)) {
      cout << "Elementary school" << endl;
   }
   else if ((schoolYear >= 6) && (schoolYear <=8)) {
      cout << "Middle school" << endl;
   }
   else if ((schoolYear >= 9) && (schoolYear <=12)) {
      cout << "High school" << endl;
   }
   else if ((schoolYear >= 13) && (schoolYear <=16)) {
      cout << "College" << endl;
   }
   else {
      cout << "Post-secondary" << endl;
   }

   return 0;
}

