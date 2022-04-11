//
//  main.cpp
//  Driving Cost
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

   double miles;
   double dollars;
   
   cin >> miles;
   cin >> dollars;
   
   cout << dollars / miles * 10  << " " << dollars / miles * 50 << " " << dollars / miles * 400 << endl;

   return 0;
}

