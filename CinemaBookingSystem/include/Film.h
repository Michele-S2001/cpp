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
      const string& _title,
      uint16_t _minsDuration,
      const string& _lang,
      const string& _direction
    );

    void getFilmDetails() const;

    void setTitle(const std::string& _title);
    void setMinsDuration(uint16_t _minsDuration);
    void setLang(const std::string& _lang);
    void setDirection(const std::string& _direction);

    string getTitle() const;
    uint16_t getMinsDuration() const;
    string getLang() const;
    string getDirection() const;
    int getFilmID() const;
};