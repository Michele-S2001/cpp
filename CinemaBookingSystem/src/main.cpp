#include <iostream>
#include "../include/Film.h"

using namespace std;
int main() {
  
  cout << "Hello world" << endl;

  Film film1 (
    "Attacco improvviso",
    120,
    "ita",
    "Michele Serafini"
  );  
  
  film1.getFilmDetails();




  return 0;
}