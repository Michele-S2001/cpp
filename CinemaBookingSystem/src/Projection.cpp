#include "../include/Projection.h"
#include "../include/Film.h"
#include "../include/Auditorium.h"
#include <iostream>
#include <vector>
#include <regex>

using namespace std;
int Projection::projection_number = 1;

Projection::Projection(
  const std::vector<Film>& _filmList,
  const std::vector<Auditorium>& _auditoriumList,
  const int _film_ID,
  const int _auditorium_ID,
  const string& _date,
  const string& _time
) {
  ID = projection_number;
  setFilmID(_film_ID, _filmList);
  setAuditoriumID(_auditorium_ID, _auditoriumList);
  setDateTime(_date, _time);
};


void Projection::setFilmID(
  const int _film_ID,
  const std::vector<Film>& filmList
) {
  for (auto i = 0; i < filmList.size(); i++)
  {
    int current_film_ID = filmList[i].getFilmID();

    if (current_film_ID == _film_ID) {
      film_ID = current_film_ID;
      return;
    }    
  }
  throw invalid_argument("L'id film inserito per la proiezione, non è valido o esistente");
};

void Projection::setAuditoriumID(
  const int _auditorium_ID,
  const std::vector<Auditorium>& auditoriumList
) {
  for (auto i = 0; i < auditoriumList.size(); i++)
  {
    int current_auditorium_ID = auditoriumList[i].getAuditoriumID();

    if (current_auditorium_ID == _auditorium_ID) {
      auditorium_ID = current_auditorium_ID;
      return;
    }    
  }
  throw invalid_argument("L'id sala inserito per la proiezione, non è valido o esistente");
};

void Projection::setDateTime(const std::string& _date, const std::string& _time) {
  regex dateRegex(R"(^\d{2}/\d{2}/\d{4}$)");
  regex timeRegex(R"(^\d{2}:\d{2}$)");

  if (!regex_match(_date, dateRegex)) {
    throw invalid_argument("Data non valida. Usa il formato GG/MM/AAAA.");
  }

  if (!regex_match(_time, timeRegex)) {
    throw invalid_argument("Orario non valido. Usa il formato HH:MM.");
  }

  date_time = _date + " " + _time;
};

void Projection::getProjectionDetails() const {
  cout << "Film: " << film_ID << endl;
  cout << "Sala: " << auditorium_ID << endl;
  cout << "Date e ora: " << date_time << endl;
}