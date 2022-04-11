//
//  main.cpp
//  Largest Number
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
   
   int num1;
   int num2;
   int num3;
   
   cin >> num1;
   cin >> num2;
   cin >> num3;
   
   if ((num1 > num2) && (num1 > num3)) {
      cout << num1 << endl;
   }
   else if ((num2 > num1) && (num2 > num3)) {
      cout << num2 << endl;
   }
   else {
      cout << num3 << endl;
   }
   
   return 0;
}
