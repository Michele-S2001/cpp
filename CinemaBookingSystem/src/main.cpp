#include <iostream>
#include <vector>
#include "../include/Film.h"
#include "../include/Auditorium.h"
#include "../include/Projection.h"

using namespace std;
int main() {  
  std::vector<Film> filmList;
  std::vector<Auditorium> auditoriumList;

  cout << "Cinema Booking System" << endl;
  cout << "---------------------" << endl;

  Film film1 (
    "Attacco improvviso",
    120,
    "ita",
    "Michele Serafini"
  );  

  Film film2 (
    "Peace",
    180,
    "en",
    "Richard Mille"
  );  

  filmList.push_back(film1);
  filmList.push_back(film2);
  
  // film1.getFilmDetails();

  Auditorium aud1 (13, 18);
  Auditorium aud2 (15, 20);

  auditoriumList.push_back(aud1);
  auditoriumList.push_back(aud2);  

  // aud1.getAuditoriumDetails();
  // aud2.getAuditoriumDetails();

  Projection projection1 (
    filmList,
    auditoriumList,
    film1.getFilmID(),
    aud1.getAuditoriumID(),
    "24/04/2025",
    "16:30"
  );

  projection1.getProjectionDetails();

  return 0;
}