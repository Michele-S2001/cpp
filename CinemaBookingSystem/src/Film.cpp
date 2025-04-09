#include "../include/Film.h"
#include <iostream>
using namespace std;

int Film::nextID = 1;

Film::Film(
  string _title,
  uint16_t _minsDuration,
  string _lang,
  string _direction
) {
  ID = nextID++;
  setTitle(_title);
  setMinsDuration(_minsDuration);
  setLang(_lang);
  setDirection(_direction);
}

void Film::getFilmDetails() {
  cout << "Titolo: " << title << endl;
  cout << "Durata: " << minsDuration << endl;
  cout << "Lingua: " << lang << endl;
  cout << "Regia di: " << direction << endl;
}

void Film::setTitle(const std::string& _title) {
  if (_title.empty()) {
    throw invalid_argument("Il titolo non può essere vuoto");
  }  
  title = _title;
};

void Film::setMinsDuration(uint16_t _minsDuration) {
  if(_minsDuration < 30) {
    throw invalid_argument("I minuti non possono essere meno di 30");
  } else if (_minsDuration > 260) {
    throw invalid_argument("I minuti non possono superare i 260");
  }
  minsDuration = _minsDuration;
};

void Film::setLang(const std::string& _lang) {
  if(_lang.empty()) {
    throw invalid_argument("La lingua non puo essere vuota");
  }
  lang = _lang;
};

void Film::setDirection(const std::string& _direction) {
  if(_direction.empty()) {
    throw invalid_argument("La regia non puo essere vuota");
  }
  direction = _direction;
};

string Film::getTitle() { return title; };
uint16_t Film::getMinsDuration() { return minsDuration; };
string Film::getLang() { return lang; };
string Film::getDirection() { return direction; };