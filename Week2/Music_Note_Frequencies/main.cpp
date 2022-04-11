//
//  main.cpp
//  Music Note Frequencies
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

   double numKey;
   
   cin >> numKey;
   
   cout << numKey * pow(pow(2,0.0833333),0) << " "
   << numKey * pow(pow(2,0.0833333),1) << " "
   << numKey * pow(pow(2,0.0833333),2) << " "
   << numKey * pow(pow(2,0.0833333),3) << " "
   << numKey * pow(pow(2,0.0833333),4) << endl;

   return 0;
}

