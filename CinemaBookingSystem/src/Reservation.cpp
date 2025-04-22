#include "../include/Reservation.h"
#include "../include/utils.h"
#include <iostream>

using namespace std;
int Reservation::reservation_number = 1;

Reservation::Reservation(
  const vector<Projection>& projectionList,
  const string& _nominative,
  const int _projection_ID,
  const vector<string>& _researved_seats
) {
  setNominative(_nominative);
  setProjectionID(_projection_ID, projectionList);
  setResearvedSeats(_researved_seats);
}

void Reservation::getReservationDetails() const {
  cout << "ID prenotazione: " << ID << endl;
  cout << "Nominativo: " << nominative << endl;
  cout << "ID proiezione: " << projection_ID << endl;
}

void Reservation::setNominative(const string& _nominative) {
  if(is_empty_or_whitespace(_nominative)) {
    throw invalid_argument("Nominativo non valido, inserisci almeno un carattere");
  }
  nominative = _nominative;
}

void Reservation::setProjectionID(
  const int _projection_ID,
  const vector<Projection>& projectionList
) {
  for (auto i = 0; i < projectionList.size(); i++)
  {
    int current_projection_ID = projectionList[i].getProjectionID();

    if (current_projection_ID == _projection_ID) {
      projection_ID = current_projection_ID;
      return;
    }    
  }
  throw invalid_argument("L'id proiezione non e' esistente");
}

void Reservation::setResearvedSeats(const vector<string>& _researved_seats) {
  //TODO: AGGIUNGERE PARAMS: lista prenotazioni, lista proiezioni
}; 