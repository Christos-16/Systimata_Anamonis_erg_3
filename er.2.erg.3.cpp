#include <iostream>
#include <cstdlib>  // Απαιτείται για τις rand() και srand()
#include <ctime>    // Απαιτείται για time()

int main() {
    // Αρχικοποίηση του σπόρου χρησιμοποιώντας την τρέχουσα ώρα
    srand(static_cast<unsigned int>(time(0)));

    // Δημιουργία και εμφάνιση τυχαίων αριθμών
    std::cout << "Τυχαίοι αριθμοί με χρήση της συνάρτησης rand():\n";
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand();
        std::cout << randomNumber << "\n";
    }

    // Αρχικοποίηση του σπόρου με μια συγκεκριμένη τιμή
    unsigned int seed = 12345;
    srand(seed);

    // Δημιουργία και εμφάνιση τυχαίων αριθμών με την ίδια τιμή εκκίνησης
    std::cout << "\nΤυχαίοι αριθμοί που χρησιμοποιούν την ίδια τιμή σπόρου:\n";
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand();
        std::cout << randomNumber << "\n";
    }

    return 0;
}