#include "../include/utils.h"
#include <algorithm>
#include <cctype>
#include <string>

bool is_empty_or_whitespace(const std::string& str) {
  return str.empty() || std::all_of(str.begin(), str.end(), [](unsigned char c) {
    return std::isspace(c);
  });
}