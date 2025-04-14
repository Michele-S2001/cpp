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
  Auditorium aud2 (15, 20);
  aud1.getAuditoriumDetails();
  aud2.getAuditoriumDetails();

  return 0;
}