#pragma once
#include "./Film.h"
#include "./Auditorium.h"
#include <iostream>
#include <vector>
using namespace std;

class Projection {
  private:
    static int projection_number;
    int ID;
    int film_ID;
    int auditorium_ID;
    string& date_time;

  public:
    Projection(
      const std::vector<Film>& filmList,
      const std::vector<Auditorium>& auditoriumList,
      const int _film_ID,
      const int _auditorium_ID,
      const string& _date,
      const string& _time
    );

    void getProjectionDetails() const;

    void setFilmID(const int _film_ID, const std::vector<Film>& filmList);
    void setAuditoriumID(const int _auditorium_ID, const std::vector<Auditorium>& auditoriumList);
    void setDateTime(const string& _date, const string& _time);
};