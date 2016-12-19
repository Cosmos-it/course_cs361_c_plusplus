//
//  Bank.h
//  BankSystem
//
//  Created by Taban Cosmos on 11/27/16.
//  Copyright © 2016 Taban Cosmos. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include "Person.h"
#ifndef Bank_h
#define Bank_h


using namespace std;

template <typename BA>


struct Bank {
public:
    
    BA balance;
    BA name;
    vector<Bank> bankAccounts {
        
    };
    
    Bank() { }
    
    void setPerson(BA name) { this->name = name; }
    void setBalance(BA balance) { this->balance = balance; }
    
    BA getPerson() { return name; }
    BA getBalance() { return balance; }
    
    void tokenizeInput (BA data[], Bank<BA> &bank) {
        char * pch;
        pch = strtok (data," ,.-");
        string name;
        string price;
        
        bank.setPerson(pch);
        while (pch != NULL)
        {
            pch = strtok (NULL, " ,.-");
            price = pch;
            pch = strtok (NULL, " ,.-");
        }
        bank.setBalance(price);
    }
    
    //Return a reversed list
    void reverseVector(Bank<string> &bank) {
        
        
    }
    
    //
    void ouputLinkedListWithOffSet(){
        
    }
    
    
    //receives referece to an offset
    //and a vector index to a linkedlist
    void receiveOfsetAndVector() {
        
    }
    
    //Out put values only if they are not dublicate
    void outPutListIfNotDublicate() {
        
    }
    
    //Out put odd index vector indexes
    //first then followed by the even numbers.
    void outputOddThenEven() {
        
    }
    
    //Sort the vector with length.
    void sortedByLength(){
        
    }
    
    
};



#endif /* Bank_h */
