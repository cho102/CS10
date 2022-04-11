//
//  main.cpp
//  Phone Number Breakdown
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   
   cout << phoneNumber/10000000 <<((phoneNumber/10000000 * 10000000) - (phoneNumber - phoneNumber % 10000) ) / 10000 << "-" << phoneNumber % 10000 << endl;
   
   return 0;
}

