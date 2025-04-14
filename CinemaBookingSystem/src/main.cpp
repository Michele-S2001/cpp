#include <iostream>
#include "../include/Film.h"
#include "../include/Auditorium.h"

using namespace std;
int main() {  
  cout << "Cinema Booking System" << endl;
  cout << "---------------------" << endl;

  Film film1 (
    "Attacco improvviso",
    120,
    "ita",
    "Michele Serafini"
  );  
  
  film1.getFilmDetails();


  Auditorium aud1 (13, 18);
  aud1.getAuditoriumDetails();

  return 0;
}