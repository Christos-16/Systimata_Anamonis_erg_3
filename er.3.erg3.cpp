#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Αρχικοποίηση του σπόρου χρησιμοποιώντας την τρέχουσα ώρα
    srand(static_cast<unsigned int>(time(0)));

    // Δημιουργία και εμφάνιση τυχαίων αριθμών μεταξύ 0 και 1
    std::cout << "Τυχαίοι αριθμοί μεταξύ 0 και 1:\n";
    for (int i = 0; i < 5; ++i) {
        double randomNumber = static_cast<double>(rand()) / RAND_MAX;
        std::cout << randomNumber << "\n";
    }

    return 0;
}
