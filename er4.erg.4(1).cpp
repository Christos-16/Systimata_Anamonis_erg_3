#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Αρχικοποίηση του σπόρου χρησιμοποιώντας την τρέχουσα ώρα
    srand(static_cast<unsigned int>(time(0)));

    // Δημιουργία και εμφάνιση τυχαίων αριθμών μεταξύ 1 και 10
    std::cout << "Τυχαίοι αριθμοί μεταξύ 1 και 10:\n";
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand() % 10 + 1;
        std::cout << randomNumber << "\n";
    }

    return 0;
}
