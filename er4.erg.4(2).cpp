#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  // Τιμή σπόρου εισόδου
  unsigned int seed;
  std::cout << "Εισάγετε την τιμή σπόρου: ";
  std::cin >> seed;

  // Αρχικοποίηση του σπόρου
  srand(seed);

  // Δημιουργία και εμφάνιση τυχαίων αριθμών
  std::cout << "Τυχαίοι αριθμοί με χρήση του σπόρου " << seed << ":\n";
  for (int i = 0; i < 5; ++i) {
    int randomNumber = rand();
    std::cout << randomNumber << "\n";
  }

  return 0;
}
