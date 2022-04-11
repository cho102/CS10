//
//  main.cpp
//  Calories Burned
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

   double age;
   double weight;
   double heartRate;
   double time;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> time;
   
   cout << "Men: " << ( (age * 0.2017) - (weight * 0.09036) + (heartRate * 0.6309) - 55.0969 ) * time / 4.184 << " calories" << endl;
   cout << "Women: " <<  ( (age * 0.074) - (weight * 0.05741) + (heartRate * 0.4472) - 20.4022 ) * time / 4.184 << " calories" << endl;
   

   return 0;
}

