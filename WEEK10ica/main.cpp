//
//  main.cpp
//  WEEK10ica
//
//  Created by Cindy Ho on 12/7/19.
//  Copyright © 2019 Cindy Ho. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string userInput;
    bool doesExist = false;
    vector<string> namesA;
    vector<string> namesB;
    
    cout << "Enter name: ";
    cin >> userInput;
    
    if (userInput.at(0) == 'A')
    {
        namesA.push_back(userInput);
        cout << "Enter name: ";
        cin >> userInput;
    }
    
    
    while (userInput.at(0) == 'A')
    {
        doesExist = false;
        for (unsigned int i = 0 ; i < namesA.size(); ++i)
        {
            if (userInput == namesA.at(i))
            {
                doesExist = true;
            }
        }
        if (!doesExist)
        {
            namesA.push_back(userInput);
        }
        cout << "Enter name: ";
        cin >> userInput;
    }
    
    if (userInput.at(0) == 'B')
    {
        namesB.push_back(userInput);
        cout << "Enter name: ";
        cin >> userInput;
    }
    
    while (userInput.at(0) == 'B')
    {
        doesExist = false;
        for (unsigned int i = 0 ; i < namesB.size(); ++i)
        {
            if (userInput == namesB.at(i))
            {
                doesExist = true;
            }
        }
        if (!doesExist)
        {
           namesB.push_back(userInput);
        }
        cout << "Enter name: ";
        cin >> userInput;
    }
    
    cout << endl;
    
    for (unsigned int i = 0 ; i < namesA.size(); ++i)
    {
        cout << namesA.at(i) << endl;
    }
    
    cout << endl;
    
    for (unsigned int i = 0 ; i < namesB.size(); ++i)
    {
        cout << namesB.at(i) << endl;
    }
    
    cout << endl;
    
    
    
    
    return 0;
}
