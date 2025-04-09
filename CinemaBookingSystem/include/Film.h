#pragma once

#include <iostream>
using namespace std;

class Film {
  private:
    static int nextID;
    int ID;
    string title;
    uint16_t minsDuration;
    string lang;
    string direction;

  public: 
    Film(
      string _title,
      uint16_t _minsDuration,
      string _lang,
      string _direction
    );

    void getFilmDetails();

    void setTitle(const std::string& _title);
    void setMinsDuration(uint16_t _minsDuration);
    void setLang(const std::string& _lang);
    void setDirection(const std::string& _direction);

    string getTitle();
    uint16_t getMinsDuration();
    string getLang();
    string getDirection();
};