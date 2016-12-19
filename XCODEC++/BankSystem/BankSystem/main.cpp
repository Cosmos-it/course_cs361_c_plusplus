//
//  main.cpp
//  BankSystem
//
//  Created by Taban Cosmos on 11/27/16.
//  Copyright © 2016 Taban Cosmos. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Bank.h"

using namespace std;

int main(int argc, const char * argv[]) {
    //insert code here...
    //Get user input
    //Breaking it down to tuples.
    //Name Balance
    Bank<string> bank;
    char input[100];
    string in;
    
    do {
        
        while (1) {
 
            cout << "To end the program enter quit otherwise enter 1:";
            getline(cin, in);
            if (in == "quit"){
                break;
            }
            else {
                cout << "\nBank system\n";
                cout << "\nPlease enter a user name and balance\n";
                cout << "\nName Account balance\n";
                cin.getline(input, sizeof(input));
                
                bank.tokenizeInput(input, bank);
                bank.bankAccounts.push_back(bank);
//                cout << bank.getPerson();
//                cout << " ";
//                cout << bank.getBalance();
//                cout << "\n";
            }
            
        }
    } while (in != "quit");
    
    for (Bank<string> ass : bank.bankAccounts){
        cout << ass.getPerson() << "," << ass.getBalance() << "\n ";
        
    }
    
//    for (Bank<string> ass : bank.bankAccounts){
//        cout << "name: "<< ass.getPerson() << " balance: " << ass.getBalance() << "\n ";
//        
//    }
    
    
    
    
    
    return 0;
    
    
}
