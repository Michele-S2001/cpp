#pragma once

#include <iostream>
#include <vector>

#include "./Book.h"

class Library {
  private:
    std::string name;
    std::string address;
    std::vector<Book> books;
  
  public:
    Library(std::string _name, std::string _address);

    void addBook(const Book& _book);
    void removeBook(std::string _ISBN);
    void coutBooks() const;
};