#pragma once

#include <iostream>
using namespace std;

class Auditorium {
  private:
    static int auditorium_number;
    int ID;
    uint16_t rows_num;
    uint16_t columns_num;

  public:
    Auditorium(
      const uint16_t _rows_num,
      const uint16_t _columns_num
    );

    void setRowsNum(const uint16_t _rows_num);
    void setColumnsNum(const uint16_t _columns_num);

    uint16_t getRowsNum() const;
    uint16_t getColumnsNum() const;
    void getAuditoriumDetails() const;
    int getAuditoriumID() const;
};