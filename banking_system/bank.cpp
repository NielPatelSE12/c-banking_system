#include "bank.h"
#include <iostream>


// Constructor Definition
Bank::Bank(std::string listofaccounts) : listOfAccounts(listofaccounts) {}

// Function Defintion

std::string Bank::createAccount() {
    return "Account successfully created.";
}

std::string Bank::deleteAccount() {
    return "Account successfully deleted.";
}

std::string Bank::accountDetails() {
    return "Displaying account details.";
}
