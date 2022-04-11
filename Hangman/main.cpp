#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

void ClearScreen()
  {
  int n;
  for (n = 0; n < 10; n++)
    printf( "\n\n\n\n\n\n\n\n\n\n" );
  }

int main() {
  string userInput;
  string underScore = "";
  string a;
  int incorrectGuesses = 0;
  bool isFound;
  bool isCongrats = false;

  cout << "Choose a word or phrase:" << endl;

  getline(cin, userInput);

  for (int a = 0; a < userInput.size(); ++a) {
    if (isupper(userInput.at(a))) {
      userInput.at(a) = tolower(userInput.at(a));
    }
  }
  ClearScreen();

  for (int i = 0; i < userInput.size(); ++i) // TURNS THE USER INPUT INTO UNDERSCORES
  {
    if (userInput.at(i) == ' ') {
      underScore = underScore + "  " ;
    }
    else {
      underScore = underScore + "_ " ;
    }
  }

  cout << endl;
  cout << underScore << endl;
  cout << endl;

  cout << "Guess a letter or the entire phrase (lowercase): ";
  getline(cin, a);
  cout << endl;
  
  while (incorrectGuesses < 5){
    if (a.size() > 1) { // IF THE USER GUESSES THE WHOLE WORD
      if (a == userInput) {
        cout << "Congratulations, you guessed the phrase: " << userInput << endl;
        cout << " /\\__/\\" << endl;
        cout << " (=^.^=)" << endl;
        cout <<" (\")(\")_/" << endl;
        incorrectGuesses = 7;
      }
      else {
        incorrectGuesses += 1;
        cout << "You have " << 6 - incorrectGuesses << " / 6 tries remaining" << endl;
        cout << underScore << endl << endl;
        cout << "Guess a letter or the entire phrase (lowercase): ";
        getline (cin, a);
        cout << endl;
      }
    }
    else { // IF THE USER GUESSES ONE LETTER
      isFound = false;
      for (int i = 0; i < userInput.size(); ++i)
      {

        if (userInput.at(i) == a.at(0))
        {
        underScore.at(i*2) = a.at(0);
        isFound = true;
        }
      }
        if (!isFound)
        {
          incorrectGuesses += 1;
          cout << "You have " << 6 - incorrectGuesses << " / 6 tries remaining" << endl;
        }
      cout << underScore << endl <<endl;
      if (underScore.find("_") == string::npos) {
        cout << "Congratulations, you guessed the phrase: "
        << userInput << endl;
        cout << " /\\__/\\" << endl;
        cout << " (=^.^=)" << endl;
        cout <<" (\")(\")_/" << endl;
        isCongrats = true;
        incorrectGuesses = 7;
      }
      if (!isCongrats){
        cout << "Guess a letter or the entire phrase (lowercase): ";
      getline(cin, a);
      cout << endl;
      }
    }
  }
  if (incorrectGuesses == 5){
    cout << "Game Over" << endl;
    cout << "  _____" << endl;
    cout << " /     \\" << endl;
    cout << "| () () |" << endl;
    cout << " \\  ^  /" << endl;
    cout << "  |||||" << endl;
    cout << "  |||||" << endl;
    cout << "The phrase was: " << userInput << endl;
  }
  
  return 0;
}
