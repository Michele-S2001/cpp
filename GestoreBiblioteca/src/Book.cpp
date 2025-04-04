#include "../include/Book.h"
#include <iostream>

Book::Book(
  std::string _title, 
  std::string _author, 
  uint16_t _year_of_release, 
  std::string _ISBN
) : title(_title), author(_author), year_of_release(_year_of_release), ISBN(_ISBN) {};

void Book::showDetails() const {
  std::cout << "Title: " << title << "\n";
  std::cout << "Author: " << author << "\n";
  std::cout << "year_of_release: " << year_of_release << "\n";
  std::cout << "ISBN: " << ISBN << "\n";
};

std::string Book::getTitle() const {
  return title;
};

std::string Book::getISBN() const {
  return ISBN;
};