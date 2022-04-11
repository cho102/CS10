#include <iostream>
using namespace std;

int main() {
    int input;
    int i;
    int a = 0;
    int j;
 
    cin >> input;
 
    for (i=0 ; i < input ; ++i){
      for (j=input; j >=i ; --j){
        cout << " ";
      }
        for (a=0; a<2*i+1 ; ++a){
            cout << "*";
        }
        cout << endl;
        
    }
 
/*
    cout << "Input valid number from 1-9 " << endl;
  cin >> input;

  if ((input >= 1) && (input <=9)){
      
  }
  else {
    cout << "Enter a valid number" << endl;
  }
*/

  return 0;
}
/*
for (i=0; i < input ; ++i){
  for (a=0; a <=i ; ++a){
    cout << "*";
  }
  cout << endl;
}
 */
