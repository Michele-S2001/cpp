#include "../include/Library.h"
#include "../include/Book.h"

#include <iostream>

Library::Library(
  std::string _name,
  std::string _address
) : name(_name), address(_address) {};

void Library::coutBooks() const {
  if(books.size() != 0) {
    std::cout << "Ecco lista aggiornata dei titoli presenti: " << "\n";
    for (size_t i = 0; i < books.size(); i++) {
      std::cout << "-> " << books[i].getTitle() << "\n";
    }  
  } else {
    std::cout << "La libreria è vuota" << "\n";
  }

  return;
}

void Library::addBook(const Book& _book) {
  books.push_back(_book);
  if (books.size() == 1) {
    std::cout << "Hai aggiunto il tuo primo libro!" << "\n";
  } else {
    std::cout << "E' stato aggiunto un nuovo libro" << "\n";
  }

  std::cout << "---------------------" << "\n";
  _book.showDetails();
  std::cout << "---------------------" << "\n";
  
  if(books.size() != 1) {
    coutBooks();
  }
  
  return;  
};

void Library::removeBook(std::string _ISBN) {

  if(_ISBN.empty()) return;
  
  if(books.size() != 0) {
    size_t id_book_to_remove = books.size();

    for (size_t i = 0; i < books.size(); i++)
    {
      std::string current_book_ISBN = books[i].getISBN();
      if(current_book_ISBN == _ISBN) {
        id_book_to_remove = i;
      }
    }  
  
    if(id_book_to_remove < books.size()) {
      std::string title_book_removed = books[id_book_to_remove].getTitle();
      books.erase(books.begin() + id_book_to_remove);
      std::cout << title_book_removed << " e' stato rimosso dalla libreria" << "\n";
    } else {
      std::cout << "Nessun libro trovato con questo codice ISBN" << "\n";
    }
  } else {
    std::cout << "Non c'e' nulla da togliere in libreria" << "\n";
  }

  return;
};