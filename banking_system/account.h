#ifndef ACCOUNT_H  
#define ACCOUNT_H
#include <string>

class Account {
    private: 
        std::string firstName;
        std::string lastName;
        int accountNumber;
        int routingNumber;
        int socialSecurityNumber;
        std::string currentAddress;
        std::string dateOfBirth;
        double balance;

    public: 
        // Constructor
        Account(std::string fName, std::string lName, int accountnumber, int routingnumber, 
                int socialsecuritynumber, std::string currentaddress, std::string dateofbirth, double initialbalance);

        // Public functions
        void deposit(double amount);
        bool withdraw(double amount);
        double getBalance() const;
};

#endif
