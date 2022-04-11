//
//  main.cpp
//  Using Math Functions
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;
   
   cin >> x;
   cin >> y;
   cin >> z;

   cout << pow(x,y) << " " << pow(x,pow(y,z)) << " " << fabs(x) << " " << sqrt(pow(x*y,z)) << endl;

   return 0;
}

