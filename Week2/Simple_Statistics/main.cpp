//
//  main.cpp
//  Simple Statistics
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

   cout << (num1 + num2 + num3) / 3 << " " << num1 * num2 * num3 << endl;
   cout << static_cast<double>(num1 + num2 + num3) / 3 << " " << static_cast<double>(num1) * num2 * num3 << endl;

   return 0;
}

