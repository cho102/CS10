//
//  main.cpp
//  RGB-LeapYear-Highway-Seasons-ExactChange
//
//  Created by Cindy Ho on 11/18/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

//Remove Gray from RGB
#include <iostream>
using namespace std;

int main() {

   int red;
   int green;
   int blue;
   int gray;
   
   cin >> red;
   cin >> green;
   cin >> blue;
   
   if ((red < green) && (red < blue)){
      gray = red;
   }
   else if ((green < red) && (green < blue)){
      gray = green;
   }
   else {
      gray = blue;
   }
   
   cout << red - gray << " " << green - gray << " " << blue - gray << endl;

   return 0;
}









//Leap Year
#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear;
   
   cin >> inputYear;
   
   if ((inputYear % 100) == 0) {
      if  ((inputYear % 400) == 0) {
         isLeapYear = true;
      }
      else {
         isLeapYear = false;
      }
   }
   else if ((inputYear % 4) == 0 ) {
      isLeapYear = true;
   }
   else {
      isLeapYear = false;
   }
   
   
  // isLeapYear = ((inputYear % 4) == 0 ) || ((inputYear % 400) == 0 );
   
   if (isLeapYear) {
      cout << inputYear << " is a leap year." << endl;
   }
   else {
      cout << inputYear << " is not a leap year." << endl;
   }

   return 0;
}







//Interstate Highway numbers
#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   if ((highwayNumber >= 1) && (highwayNumber <= 99)) {
      if ((highwayNumber % 2 ) == 0){
         cout <<  "The " << highwayNumber
         << " is primary, going east/west." << endl;
      }
      else  {
         cout <<  "The " << highwayNumber
         << " is primary, going north/south." << endl;
      }
   }
   else if ((highwayNumber >= 100) && (highwayNumber <= 999)) {
      if ((highwayNumber % 10) == 5){
         cout <<  "The " << highwayNumber
         << " is auxiliary, serving the " << highwayNumber % 100
         << ", going north/south." << endl;
      }
      else {
         cout <<  "The " << highwayNumber
         << " is auxiliary, serving the " << highwayNumber % 100
         << ", going east/west." << endl;
      }
   }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}











//Seasons
#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if ((inputDay > 30) || (inputDay < 1)) {
      cout << "invalid" << endl;
   }
   
   
   else if (inputMonth == "March") {
      if ((inputDay >= 20) && (inputDay <= 31)) {
         cout << "spring" << endl;
      }
      else {
         cout << "winter" << endl;
      }
   }
   
   
   
   
   else if (inputMonth == "April") {
      if (inputDay <= 30) {
         cout << "spring" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   
   
   else if (inputMonth == "May"){
      if (inputDay <= 31) {
         cout << "spring" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   
   
   
   else if (inputMonth == "June") {
      if ((inputDay >= 21) && (inputDay <= 30)) {
         cout << "summer" << endl;
      }
      else {
         cout << "spring" << endl;
      }
   }
   
   else if (inputMonth == "July") {
      if (inputDay <= 31) {
         cout << "summer" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   
   
   else if (inputMonth == "August"){
      if (inputDay <= 31) {
         cout << "summer" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   else if (inputMonth == "September") {
      if ((inputDay >= 22) && (inputDay <= 30)) {
         cout << "autumn" << endl;
      }
      else {
         cout << "summer" << endl;
      }
   }
   else if (inputMonth == "October") {
      if (inputDay <= 31) {
         cout << "autumn" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   
   
   else if (inputMonth == "November"){
      if (inputDay <= 30) {
         cout << "autumn" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   else if (inputMonth == "December") {
      if (inputDay >= 21) {
         cout << "winter" << endl;
      }
      else {
         cout << "autumn" << endl;
      }
   }
   else if (inputMonth == "January") {
      if (inputDay <= 31) {
         cout << "summer" << endl;
      }
      else {
         cout << "winter" << endl;
      }
   }
   
   
   else if (inputMonth == "February"){
      if (inputDay <= 29) {
         cout << "winter" << endl;
      }
      else {
         cout << "invalid" << endl;
      }
   }
   else {
      cout << "invalid" << endl;
   }

   return 0;
}










//Exact Change
#include <iostream>
using namespace std;

int main() {

   int totalChange;
   int dollar;
   int quarter;
   int dime;
   int nickel;
   int penny;
   
   cin >> totalChange;
   
   if (totalChange == 0 ) {
      cout << "no change" << endl;
   }
   if (totalChange/100 != 0) {
      dollar = totalChange/100;
      totalChange = totalChange % 100;
      if (dollar == 1) {
         cout << dollar << " dollar" << endl;
      }
      else {
         cout << dollar << " dollars" << endl;
      }
   }
   if (totalChange/25 != 0) {
      quarter = totalChange/25;
      totalChange = totalChange % 25;
      if (quarter == 1) {
         cout << quarter << " quarter" << endl;
      }
      else {
         cout << quarter << " quarters" << endl;
      }
   }
   if (totalChange/10 != 0) {
      dime = totalChange/10;
      totalChange = totalChange % 10;
      if (dime == 1) {
         cout << dime << " dime" << endl;
      }
      else {
         cout << dime << " dimes" << endl;
      }
   }
   if (totalChange/5 != 0) {
      nickel = totalChange/5;
      totalChange = totalChange % 5;
      if (nickel == 1) {
         cout << nickel << " nickel" << endl;
      }
      else {
         cout << nickel << " nickels" << endl;
      }
   }
   if (totalChange/1 != 0) {
      penny = totalChange/1;
      totalChange = totalChange % 1;
      if (penny == 1) {
         cout << penny << " penny" << endl;
      }
      else {
         cout << penny << " pennies" << endl;
      }
   }
   

   return 0;
}
