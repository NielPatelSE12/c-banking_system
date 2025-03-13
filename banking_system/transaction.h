#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <fstream>  // Required for file operations

class Transaction {
    private:
        int transactionID;
        int accountNumber;
        double balance;
        std::string transactionType;

    public:
        // Constructor
        Transaction(int transactionid, int accountnumber, double totalbalance, std::string transactiontype);

        // Function to write transaction to CSV
        void writeTransactionToCSV(const std::string& filename);
};

#endif
