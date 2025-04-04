#include <iostream>
#include "../include/Book.h"
#include "../include/Library.h"

void showMenu() {
  std::cout << "\n--- Menu Biblioteca ---\n";
  std::cout << "1. Aggiungi un libro\n";
  std::cout << "2. Rimuovi un libro\n";
  std::cout << "3. Mostra i libri\n";
  std::cout << "4. Esci\n";
  std::cout << "Scelta: ";
};

int main() {
  Library library("Knowledge", "123 Main st");
  int choice;

  do
  {
    showMenu();
    std::cin >> choice;
    std::cin.ignore();

    if (choice == 1) {
      std::string title, author, ISBN;
      uint16_t year_of_release;

      std::cout << "Titolo del libro: ";
      std::getline(std::cin, title);
      std::cout << "Autore del libro: ";
      std::getline(std::cin, author);
      std::cout << "Anno di pubblicazione: ";
      std::cin >> year_of_release;
      std::cin.ignore();
      std::cout << "Codice ISBN: ";
      std::getline(std::cin, ISBN);
                                                                                    
      library.addBook(Book(title, author, year_of_release, ISBN));
    } else if(choice == 2) {
      std::string book_ISBN;

      std::cout << "Inserisci il codice ISBN del libro da eliminare: ";
      std::getline(std::cin, book_ISBN);

      library.removeBook(book_ISBN);
    } else if(choice == 3) {
      library.coutBooks();
    }
    
  } while (choice != 4);

  return 0;
}