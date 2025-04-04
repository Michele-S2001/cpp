//Per evitare duplicazioni durante la compilazione
#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

class Book {
  private:
    std::string title;
    std::string author;
    uint16_t year_of_release;
    std::string ISBN;

  public:
    Book(std::string _title, std::string _author, uint16_t _year_of_release, std::string _ISBN);

    void showDetails() const;
    std::string getTitle() const;
    std::string getISBN() const;
};