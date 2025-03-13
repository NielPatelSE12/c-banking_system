#include "account.h"


// Constructor Definition
Account::Account(std::string fName, std::string lName, int accountnumber, int routingnumber,  int socialsecuritynumber, std::string currentaddress, std::string dateofbirth, double initialbalance)
    : firstName(fName), lastName(lName), accountNumber(accountnumber), routingNumber(routingnumber), 
      socialSecurityNumber(socialsecuritynumber), currentAddress(currentaddress), dateOfBirth(dateofbirth), balance(initialbalance) {}


// Function Definitions

// Deposit money into the account
void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

// Withdraw money from the account
bool Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true; // Successful withdrawal
    }
    return false; // Insufficient funds
}

// Return the account balance
double Account::getBalance() const {
    return balance;
}
