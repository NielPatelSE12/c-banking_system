#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string> // Include string library

class Bank {
    private:
        std::string listOfAccounts;

    public:
        // Constructor Declaration
        Bank(std::string listofaccounts);

        // Function Declarations
        std::string createAccount();
        std::string deleteAccount();
        std::string accountDetails();
};

#endif
