//
//  main.cpp
//  Draw a tree
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
   
   int trunkHeight;
   int trunkWidth;
   int leavesWidth;
   int userInput;
   
   
   //trunk height
   cout << "Enter trunk height: ";
   cin >> trunkHeight;
   cout << endl;
 
   //trunk width
   cout << "Enter trunk width: ";
   cin >> userInput;
   cout << endl;
   while (userInput % 2 == 0)
   {
      cout << "Please enter an odd number for the width: ";
      cin >> userInput;
      cout<<endl;
   }
   trunkWidth = userInput;
   
   //leaves width
   
   cout << "Enter leaves width: ";
   cin >> userInput;
   while (userInput % 2 == 0)
   {
      cout << "Please enter an odd number for the width: ";
      cin >> userInput;
      cout << endl;
   }
   leavesWidth = userInput;
   cout << endl;

   cout << endl;
  
   for (int i=0 ; i < leavesWidth / 2 + 1 ; ++i)
   {
      for (int j=leavesWidth / 2; j >i ; --j){
        cout << " ";
      }
      for (int a=0; a<2*i+1 ; ++a)
      {
         cout << "*";
      }
      cout << endl;
   }
   
   for (int i=0; i < trunkHeight ; ++i)
   {
      for (int j=0; j < (leavesWidth - trunkWidth) / 2 ; ++j)
      {
         cout << " " ;
      }
      for (int a=0; a < trunkWidth ; ++a)
      {
         cout << "*" ;
      }
      cout << endl;
   }

   
/*
    // Draw leaves
    cout << "  *"   << endl;
    cout << " ***"  << endl;
    cout << "*****" << endl;

    // Draw trunk
    cout << " ***" << endl;
    cout << " ***" << endl;
    cout << " ***" << endl;
    cout << " ***" << endl;
    */

    return 0;
}

