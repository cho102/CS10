#include <vector>
#include <iostream>

using namespace std;

void drawBoard(const vector < char >&gameBoard) {
   for (int i = 0; i < 9; i += 3) {
      cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
         << gameBoard.at(i + 2) << "  " << endl;
      if (i < 6) {
         cout << "-----|-----|-----" << endl;
      }
   }
   cout << endl;
    
   return;
}

void initVector(vector <char> &v) {
    
    char c = 'a';
      for (unsigned int i = 0; i < v.size() ; ++i)
      {
          v.at(i) = c;
          ++c;
      }
   return;
}

int convertPosition(char boardPosition) {
   
   // TODO: implement function
   return (static_cast<int>(boardPosition) - 97);
}

bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {
   
   bool isEmpty = false;
   if (positionIndex > 8 || positionIndex < 0)
   {
     isEmpty = false;
   }
   else if (gameBoard.at(positionIndex) != 'O' && gameBoard.at(positionIndex) != 'X')
   {
       isEmpty = true;
   }
   return isEmpty;
}

int getPlay(const vector<char> &gameBoard) {
   
   // TODO: implement function
   char boardPosition = ' ';
   int pos;
    
   cout << "Please choose a position: ";
    
   cin >> boardPosition;
   pos = convertPosition(boardPosition);
   
    while (!validPlacement(gameBoard, pos))
    {
        cout << "Please choose a position: ";
        cin >> boardPosition;
        cout << endl;
        pos = convertPosition(boardPosition);
    }
   
   return pos;
}

bool gameWon(const vector<char> &gameBoard) {
    
   bool isWon = false;

  if (gameBoard.at(0) == 'X' && gameBoard.at(1) == 'X' && gameBoard.at(2) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(3) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(5) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(6) == 'X' && gameBoard.at(7) == 'X' && gameBoard.at(8) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(0) == 'X' && gameBoard.at(3) == 'X' && gameBoard.at(6) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(1) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(7) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(2) == 'X' && gameBoard.at(5) == 'X' && gameBoard.at(8) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(8) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(2) == 'X' && gameBoard.at(4) == 'X' && gameBoard.at(6) == 'X')
  {
    isWon = true;
  }
  else if (gameBoard.at(0) == 'O' && gameBoard.at(1) == 'O' && gameBoard.at(2) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(3) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(5) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(6) == 'O' && gameBoard.at(7) == 'O' && gameBoard.at(8) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(0) == 'O' && gameBoard.at(3) == 'O' && gameBoard.at(6) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(1) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(7) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(2) == 'O' && gameBoard.at(5) == 'O' && gameBoard.at(8) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(8) == 'O')
  {
    isWon = true;
  }
  else if (gameBoard.at(2) == 'O' && gameBoard.at(4) == 'O' && gameBoard.at(6) == 'O')
  {
    isWon = true;
  }
  
   
   return isWon;
}

bool boardFull(const vector<char> &gameBoard) {
   
   // TODO: implement function
   bool isFull = true;

  for (unsigned int i = 0; i < gameBoard.size(); ++i)
  {
    if (gameBoard.at(i) != 'X' && gameBoard.at(i) != 'O')
    {
      isFull = false;
    }
  }

  
   return isFull;
}

const int PLAYER1 = 0;
const int PLAYER2 = 1;


int main() {
    vector<char> gameBoard(9);
   //int curPlay;
   int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'
   
   /// TODO: Initialize board to empty state
    initVector(gameBoard);
   /// TODO: Display empty board
    drawBoard(gameBoard);
    
    gameBoard.at(getPlay(gameBoard)) = 'X';
    cout << endl;
    drawBoard(gameBoard);
    whosTurn = PLAYER2;

    while (!gameWon(gameBoard) && !boardFull(gameBoard))
    {
      if (whosTurn)
      {
        gameBoard.at(getPlay(gameBoard)) = 'O';
        cout << endl;
        drawBoard(gameBoard);
        whosTurn = PLAYER1;
      }
      else
      {
        gameBoard.at(getPlay(gameBoard)) = 'X';
        cout << endl;
        drawBoard(gameBoard);
        whosTurn = PLAYER2;
      }
    }
    
   if (boardFull(gameBoard))
   {
     cout << "No one wins" << endl;
   }
   else if (whosTurn == PLAYER2)
   {
     cout << "Player 1 Wins!!" << endl;
   }
   else
   {
     cout << "Player 2 Wins!!" << endl;
   }

    return 0;
}
