#include <string>
#include <vector>
#include <sstream>
#include "../include/Function.h"

Function::Function(std::string& s) {
  statement = s;
  terms = get_terms();
}

std::vector<std::string> Function::get_terms() {
  std::vector<std::string> tokens;
  std::istringstream iss(statement);
  std::string token;
  while(std::getline(iss, token, ' ')) {
      tokens.push_back(token);
  }
  return tokens;
}
