#include <iostream>

class PaymentProcessor {
private:
    static int fraudulentTransactionsCount; // Static variable to track fraudulent transactions

public:
    // Method to process a payment
    void processPayment(double amount, bool isFraud) {
        if (isFraud) {
            fraudulentTransactionsCount++; // Increment fraudulent transactions count
            std::cout << "Fraudulent transaction detected!\n";
        } else {
            std::cout << "Payment processed successfully.\n";
        }
    }

    // Static method to get the count of fraudulent transactions
    static int getFraudulentTransactionsCount() {
        return fraudulentTransactionsCount;
    }
};

// Initialize the static variable
int PaymentProcessor::fraudulentTransactionsCount = 0;

int main() {
    PaymentProcessor processor1, processor2;

    // Process some payments
    processor1.processPayment(100.0, false); // Non-fraudulent payment
    processor1.processPayment(200.0, true);  // Fraudulent payment
    processor2.processPayment(300.0, true);  // Fraudulent payment

    // Get the count of fraudulent transactions
    std::cout << "Total fraudulent transactions: " 
              << PaymentProcessor::getFraudulentTransactionsCount() << std::endl;

    return 0;
}