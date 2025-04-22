#pragma once;
#include "./Projection.h"
#include <iostream>
#include <vector>

using namespace std;
class Reservation {
  private:
    static int reservation_number;
    int ID;
    int projection_ID;
    string nominative;
    vector<string> researved_seats;

  public:
    Reservation(
      const vector<Projection>& projectionList,
      const string& _nominative,
      const int _projection_ID,
      const vector<string>& _researved_seats
    );
    
    void getReservationDetails() const;

    void setNominative(const string& _nominative);
    void setProjectionID(
      const int _projection_ID,
      const vector<Projection>& projectionList
    );
    void setResearvedSeats(const vector<string>& _researved_seats);
};