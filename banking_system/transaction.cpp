#include "transaction.h"
#include <iostream>
#include <fstream>

// Constructor Definition
Transaction::Transaction(int transactionid, int accountnumber, double totalbalance, std::string transactiontype)
    : transactionID(transactionid), accountNumber(accountnumber), balance(totalbalance), transactionType(transactiontype) {}

// Function to write the transaction to a CSV file
void Transaction::writeTransactionToCSV(const std::string& filename) {
    std::ofstream transactionFile;  // Declare the file stream
    bool fileExists = std::ifstream(filename).good();  // Check if file exists

    transactionFile.open(filename, std::ios::app);  // Open in append mode

    if (!transactionFile) {
        std::cerr << "Error: Could not open the file " << filename << std::endl;
        return;
    }

    // If file is new, write headers
    if (!fileExists) {
        transactionFile << "TransactionID,AccountNumber,Balance,TransactionType\n";
    }

    // Write transaction details
    transactionFile << transactionID << "," << accountNumber << "," << balance << "," << transactionType << "\n";

    transactionFile.close();  // Close file
    std::cout << "Transaction written successfully to " << filename << std::endl;
}
