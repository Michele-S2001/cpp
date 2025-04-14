#include "../include/Auditorium.h"
#include <iostream>
using namespace std;

int Auditorium::auditorium_number = 0;

Auditorium::Auditorium(
  uint16_t _rows_num,
  uint16_t _columns_num
) {
  ID = auditorium_number++;
  setRowsNum(_rows_num);
  setColumnsNum(_columns_num);
}

void Auditorium::setRowsNum(const uint16_t _rows_num) {
  if(_rows_num > 15) {
    throw invalid_argument("Il numero di righe non può superare 15");
  }

  rows_num = _rows_num;
}

void Auditorium::setColumnsNum(const uint16_t _columns_num) {
  if(_columns_num > 20) {
    throw invalid_argument("Il numero di colonne non può superare 20");
  }

  columns_num = _columns_num;
}

uint16_t Auditorium::getRowsNum() { return rows_num; };
uint16_t Auditorium::getColumnsNum() { return columns_num; };

